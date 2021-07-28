// utiliza el monitor serial para ingresar la cantidad de gramos de material a dispensar.
// debes configurar la celda antes de ocupar el sistema
// la constante proporcional del controlador también debe ser calibrada

#include "HX711.h"

#define DC_IN1 2
#define DC_IN2 4
#define DC_PWM 3

int pwm = 0;
float target = 0;
float masa = 0;
boolean dispensing = false;

#define Kp 100

#define CC_CLK 5
#define CC_DAT 6
#define calibrationfactor 965500 // celda de 1 kg

HX711 celda(CC_CLK,CC_DAT);

unsigned long sampletime = 50;

void setup() {

  Serial.begin(9600);
  celda.set_scale();
  celda.tare();
  celda.read_average();
  celda.set_scale(calibrationfactor);
  celda.tare();
  pinMode(DC_IN1,OUTPUT);
  pinMode(DC_IN2,OUTPUT);
  pinMode(DC_PWM,OUTPUT);
  Serial.println("gramos? ");
  
}

void loop() {
  
  if(Serial.available()>0 && dispensing==false){
      target=Serial.parseInt()*1.26;
      Serial.println(target);
      dispensing=true;
      celda.tare();
      delay(500);
  }

  if (dispensing==true){

  masa=celda.get_units()*1000;
  Serial.print(masa);
  Serial.print("      ");
  float error = target-masa;
  pwm=int(Kp*error);
  pwm=constrain(pwm,125,255);
  Serial.print(error);
  Serial.print("      ");
  Serial.println(pwm);

  if(masa>=target){
    dispensing=false;
    pwm=0;
    Serial.println(masa);
  }

  }
  
  digitalWrite(DC_IN1,HIGH);
  digitalWrite(DC_IN2,LOW);
  analogWrite(DC_PWM,pwm);
}


int xPin=A0;
int yPin=A1;
int zPin=A2;


void setup(){
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  pinMode(zPin,INPUT);
  Serial.begin(9600);
}

int xval, yval, zval;

void loop() 
{
  xval=analogRead(xPin);
  yval=analogRead(yPin);
  zval=analogRead(zPin);
  
  if ((xval > 325 && xval < 345) && (yval > 325 && yval < 337) && (zval > 380 && zval < 400)) //stop
      Serial.println("stop");
   
  if ((xval > 325 && xval < 370) && (yval > 335 && yval < 370) && (zval > 355 && zval < 405)) //forward
      Serial.println("forward");
  
  if ((xval > 325 && xval < 345) && (yval > 270 && yval < 330) && (zval > 355 && zval < 400)) //backward
      Serial.println("backward");
  
  if ((xval > 260 && xval < 330) && (yval > 310 && yval < 345) && (zval > 360 && zval < 400)) //left
     Serial.println("left");
 
  if ((xval > 340 && xval < 375) && (yval > 320 && yval < 340) && (zval > 375 && zval < 395)) //right
     Serial.println("right");

  delay(1000);
    
}

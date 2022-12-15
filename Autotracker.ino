int trigPin = 12;
int echoPin = 13;
int trigPin2 = 2;
int echoPin2 = 4;
int trigPin3 = 7;
int echoPin3 = 8;
#include<Servo.h>
Servo servo;

void setup() {
  Serial.begin (115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);

  servo.attach(9);
  servo.write(0);
}

void loop() {
  int duration, distance;
  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);
  duration = pulseIn (echoPin, HIGH);
  distance = (duration/2) / 29.1;

      Serial.print(distance);  
      Serial.print("cm");
      Serial.println();

  if (distance < 30) {  // Change the number for long or short distances.
    servo.write(30);
    Serial.println("servo 1 on ");
  } 

    int duration2, distance2;
    digitalWrite (trigPin2, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin2, LOW);
    duration = pulseIn (echoPin2, HIGH);
    distance2 = (duration/2) / 29.1;
   
      Serial.print(distance2);  
      Serial.print("cm");
      Serial.println();

    if (distance2 < 30) {  // Change the number for long or short distances.
    servo.write(150);
    Serial.println("servo 3 on ");
  }

    int duration3, distance3;
    digitalWrite (trigPin3, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigPin3, LOW);
    duration = pulseIn (echoPin3, HIGH);
    distance3 = (duration/2) / 29.1;
   
      Serial.print(distance3);  
      Serial.print("cm");
      Serial.println();

    if (distance3 < 30) {  // Change the number for long or short distances.
    servo.write(90);
    Serial.println("servo 2 on ");
  }
  

  Serial.println();
  delay(2000);

  }

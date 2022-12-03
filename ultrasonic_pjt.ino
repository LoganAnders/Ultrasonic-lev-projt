//Trying to create levitation of small object using sound
#define echoPin 2 
#define trigPin 3 

//variables for algr.
long duration; 
int distance; 

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); 
  //Use MEGA not the UNO
  Serial.println("with Arduino MEGA 2560");
}
void loop() {
  //algr.
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
 //speed of sound /2
  distance = duration * 0.034 / 2; 

  //console output 
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm"); 
  

/*
 All the resources for this project:
 http://randomnerdtutorials.com/
*/
int rainPin = D1;
int Relay = D2;

// you can adjust the threshold value
int thresholdValue = 800;
void setup(){
  pinMode(rainPin, INPUT);
  pinMode(Relay,OUTPUT);
  Serial.begin(9600);
}
void loop() {
    int sensorValue = analogRead(rainPin);
    Serial.print(sensorValue);
    if(sensorValue < thresholdValue){
    Serial.println(" - Doesn't need watering");
    digitalWrite(Relay, HIGH);
    }
    else {
    Serial.println(" - Time to water your plant");
    digitalWrite(Relay, LOW);
    }
    delay(500);
}

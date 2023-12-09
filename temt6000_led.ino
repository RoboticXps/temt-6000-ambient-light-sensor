/*
Example for TEMT6000 Ambient Light Sensor and LED with Arduino Uno.
By: RoboticX Team
*/

#define LEDPIN 11         // LED brightness (PWM) writing
#define LIGHTSENSORPIN A0 // Ambient light sensor reading

void setup() {
  pinMode(LIGHTSENSORPIN,  INPUT);  
  pinMode(LEDPIN, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  float reading = analogRead(LIGHTSENSORPIN); // Read light level
  float ledRatio = map(reading, 0, 1023, 0, 255); // Map sensor value to 0-255 range
  analogWrite(LEDPIN, ledRatio);  // Adjust LED brightness relatively
  Serial.println(reading);     // Display reading in serial monitor
}

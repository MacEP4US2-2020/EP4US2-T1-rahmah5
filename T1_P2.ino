//Libraries to include
#include <String> //generic library
#include <DHT.h> //DHT-11 sensor library
//Declaring Objects
#define DHTPIN 4 //define the pin that the DHT sensor's signal is connected to
#define DHTTYPE DHT11 //define the type of DHT sensor, there are two types: DHT-11, DHT-22. This course is using DHT-11
DHT dht(DHTPIN, DHTTYPE); //object declaration constructor
void setup() {
  // put your setup code here, to run once:
  //Serial Monitor initialization
  //The serial monitor is the built in output form, similar to a console.
  //Use "Serial.println("")" to print strings and sensor data to the serial monitor
  Serial.begin(115200); //baud rate of 115200Hz for serial montior
  pinMode(0,OUTPUT); //IO 0 Output
  //DHT-11 Initialization
  dht.begin(); //function that starts the sensor during the initial setup
}
void loop() {
  // put your main code here, to run repeatedly:
  //DHT-11 Sensor Data Extraction
  //read varius sensor data as floats
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  float l = analogRead(0);
  //Display Sensor data on the Serial Monitor
  Serial.println("Humidity: String(h)"); 
  Serial.println("Temperature C: String(t)");
  Serial.println("Temperature F: String(f)");
  Serial.println("Light: String(l)");
  delay(1000);//delay for 1s before refreshing data
}

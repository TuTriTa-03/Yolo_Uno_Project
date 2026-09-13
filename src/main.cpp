#include <Wire.h>
#include <DHT20.h>

DHT20 DHT;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  DHT.begin();
}

void loop() {
  DHT.read();
  Serial.print("Temperature: ");
  Serial.print(DHT.getTemperature(), 1);
  Serial.print(" C, Humidity: ");
  Serial.print(DHT.getHumidity(), 1);
  Serial.println(" %");
  delay(1000);
}

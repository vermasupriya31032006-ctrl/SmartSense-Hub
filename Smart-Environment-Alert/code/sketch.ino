#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

const int ledPin = 2;

void setup() {
  Serial.begin(115200);
  dht.begin();

  pinMode(ledPin, OUTPUT);
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  if (temperature > 30) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Alert: High Temperature! LED ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Temperature Normal. LED OFF");
  }

  Serial.println("----------------------");

  delay(2000);
}

#include <DHT.h>

#define DHTPIN 15          // DHT22 Data Pin
#define DHTTYPE DHT22

#define LED_PIN 2          // LED Pin

DHT dht(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);

  dht.begin();

  Serial.println("====================================");
  Serial.println(" EnviroSync AI - Automation System");
  Serial.println("====================================");
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT22 sensor!");
    delay(2000);
    return;
  }

  Serial.println("------------------------------------");
  Serial.print("Temperature : ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity    : ");
  Serial.print(humidity);
  Serial.println(" %");

  // Automation Logic
  if (temperature > 30) {

    digitalWrite(LED_PIN, HIGH);

    Serial.println("Status      : HIGH TEMPERATURE");
    Serial.println("Action      : LED ON (Cooling Activated)");

  }
  else {

    digitalWrite(LED_PIN, LOW);

    Serial.println("Status      : NORMAL");
    Serial.println("Action      : LED OFF");

  }

  // Humidity Alert
  if (humidity > 80) {

    Serial.println("Alert       : High Humidity Detected");

  }

  delay(2000);
}

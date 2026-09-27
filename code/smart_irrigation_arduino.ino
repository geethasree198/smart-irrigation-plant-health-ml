// Smart Irrigation System and Plant Health Monitoring
// Arduino UNO

int moisturePin = A0;
int relayPin = 7;

// RGB LED pins
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

// Moisture thresholds
int dryThreshold = 700;
int wetThreshold = 400;

void setup()
{
  Serial.begin(9600);

  pinMode(moisturePin, INPUT);
  pinMode(relayPin, OUTPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Pump OFF initially
  digitalWrite(relayPin, HIGH);

  // RGB LED OFF initially
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
}

void loop()
{
  int moistureValue = analogRead(moisturePin);

  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue);

  // ---------------- DRY SOIL ----------------
  if (moistureValue > dryThreshold)
  {
    Serial.println("Dry Soil");
    Serial.println("Pump ON for 12 seconds");

    // Red LED
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);

    // Pump ON
    digitalWrite(relayPin, LOW);
    delay(12000);

    // Pump OFF
    digitalWrite(relayPin, HIGH);
  }

  // ---------------- MEDIUM MOISTURE ----------------
  else if (moistureValue > wetThreshold &&
           moistureValue <= dryThreshold)
  {
    Serial.println("Medium Moisture");
    Serial.println("Pump ON for 8 seconds");

    // Blue LED
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);

    // Pump ON
    digitalWrite(relayPin, LOW);
    delay(8000);

    // Pump OFF
    digitalWrite(relayPin, HIGH);
  }

  // ---------------- WET SOIL ----------------
  else
  {
    Serial.println("Wet Soil");
    Serial.println("Pump ON for 4 seconds");

    // Green LED
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);

    // Pump ON
    digitalWrite(relayPin, LOW);
    delay(4000);

    // Pump OFF
    digitalWrite(relayPin, HIGH);
  }

  delay(2000);
}

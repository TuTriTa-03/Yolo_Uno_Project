#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define NEOPIXEL_PIN 45
#define NUM_PIXELS 1

Adafruit_NeoPixel neopix(
    NUM_PIXELS,
    NEOPIXEL_PIN,
    NEO_GRB + NEO_KHZ800
);

void setup() {
    Serial.begin(115200);

    neopix.begin();
    neopix.clear();
    neopix.show();

    Serial.println("App started");
}

void loop() {

    // LED ON - ĐỎ
    neopix.setPixelColor(0, neopix.Color(255, 0, 0));
    neopix.show();

    Serial.println("LED ON - RED");

    delay(1000);

    // LED ON - VÀNG
    neopix.setPixelColor(0, neopix.Color(255, 255, 0));
    neopix.show();

    Serial.println("LED ON - YELLOW");

    delay(1000);

    // LED OFF
    neopix.clear();
    neopix.show();

    Serial.println("LED OFF");

    delay(1000);
}
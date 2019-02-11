#include <Arduino.h>
#include <WS2812FX.h>

#define LED_COUNT 8
#define LED_PIN 5

#define TIMER_MS 3000

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
WS2812FX ws2812fx = WS2812FX(LED_COUNT, LED_PIN, NEO_RGB + NEO_KHZ800);

unsigned long last_change = 0;
unsigned long now = 0;


// constants won't change. Used here to set a pin number:
const int ledPin =  LED_BUILTIN;// the number of the LED pin

// Variables will change:
int ledState = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 1000;           // interval at which to blink (milliseconds)

void turn_led_off()
{
  ledState = HIGH;
}

void turn_led_on()
{
  ledState = LOW;
}

bool led_is_on()
{
  return ledState == LOW;
}


void setup() {
  ws2812fx.init();
  ws2812fx.setBrightness(64);
  ws2812fx.setSpeed(500);
  ws2812fx.setColor(0x007BFF);
  ws2812fx.setMode(FX_MODE_STATIC);
  ws2812fx.start();

    pinMode(ledPin, OUTPUT);

}

void loop() {
  now = millis();

  ws2812fx.service();

  if(now - last_change > TIMER_MS) {
    ws2812fx.setMode((ws2812fx.getMode() + 1) % ws2812fx.getModeCount());
    last_change = now;
  }

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (led_is_on()) {
      turn_led_off();
    } else {

      turn_led_on();
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);

}
}

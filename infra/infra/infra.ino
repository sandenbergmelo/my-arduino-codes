#include <IRremote.hpp>

void setup()
{
  Serial.begin(9600);
  IrReceiver.begin(2, ENABLE_LED_FEEDBACK); // Start the receiver
}

void loop() {
  if (IrReceiver.decode()) {
      Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
      IrReceiver.resume(); // Enable receiving of the next value
  }
}

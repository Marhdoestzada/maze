#include <math.h>
const int x_out = A1; /* connect x_out of module to A1 of UNO board */
const int y_out = A2; /* connect y_out of module to A2 of UNO board */

void setup() {
  pinMode(x_out, INPUT);
  pinMode(y_out, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.write(0);
  Serial.write(map(analogRead(x_out), 0, 1023, 1, 255));
  Serial.write(map(analogRead(y_out), 0, 1023, 1, 255));
  delay(100);
}

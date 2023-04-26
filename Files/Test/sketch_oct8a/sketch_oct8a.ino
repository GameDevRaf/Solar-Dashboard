#include <GDBStub.h>

void setup() {
  Serial.begin(2400);
  Serial1.begin(9600);
  gdbstub_init();
  Serial1.printf("Starting...\n");
}

void loop() {
  static uint32_t cnt = 0;
  Serial1.printf("%d\n", cnt++);
  delay(100);
}
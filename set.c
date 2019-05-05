#include <ds1307.h>

int main(void) {
  ds1307_init(I2C_SCL_100KHZ);

  struct tm now;
  now.tm_hour = 00;
  now.tm_min = 00;
  now.tm_sec = 00;
  ds1307_set_time(now);

  // We're done, loop forever.
  for (;;) {}

  return 0;
}

#include <ds1307.h>

int main(void) {
  ds1307_init(I2C_SCL_100KHZ);
  struct tm now;
  now.tm_hour = 12;
  now.tm_min = 46;
  now.tm_sec = 0;
  ds1307_set_time(now);
  for (;;) {}
  return 0;
}

#include <ds1307.h>
#include <max7221.h>

int main(void) {
  max7221_init(MAX7221_INIT_BCD);
  ds1307_init(I2C_SCL_100KHZ);
  ds1307_start();

  for(;;) {
    struct tm current_time = ds1307_get_time();
    int value = current_time.tm_min * 100 + current_time.tm_sec;
    max7221_display_bcd_int(value, 4);
  }

  return 0;
}

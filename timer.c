#include <ds1307.h>
#include <max7221.h>

int main(void) {
  struct tm now = ds1307_get_time();

  // Minute
  max7221_display_bcd_digit(0, now.tm_min / 10);
  max7221_display_bcd_digit(1, now.tm_min % 10);
  // Second
  max7221_display_bcd_digit(2, now.tm_sec / 10);
  max7221_display_bcd_digit(3, now.tm_sec % 10);

  return 0;
}

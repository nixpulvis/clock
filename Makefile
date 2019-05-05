AVRM = /usr/avr/avrm/0.0.5
DS1307 = /usr/avr/ds1307/0.0.5
MAX7221 = /usr/avr/max7221/0.0.5
DEPENDENCIES = $(DS1307) $(MAX7221) $(AVRM)
LDLIBS = -lds1307 -lmax7221 -lavrm

all: timer.flash
include $(AVRM)/share/Makefile

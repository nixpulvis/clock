AVRM = /usr/local/avrm/0.0.5
DS1307 = /usr/local/ds1307/0.0.3
MAX7221 = /usr/local/max7221/0.0.3
DEPENDENCIES = $(DS1307) $(MAX7221) $(AVRM)
LDLIBS = -lds1307 -lmax7221 -lavrm

include $(AVRM)/Makefile

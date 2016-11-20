#include <avr/pgmspace.h>
#ifndef _HMI_MSG_H_
#define _HMI_MSG_H_

#define PROG_VERSION "Version: %S built on: %S %S"
#define LIBC_VERSION "avr-libc version: %S"
#define STUD_NAME "Tarvo Sbitnev"
#define GET_MONTH_MSG "Enter Month name first letter >"
#define UPTIME_MSG "Uptime: %lu s"

const char m1[] PROGMEM = "January";
const char m2[] PROGMEM = "February";
const char m3[] PROGMEM = "March";
const char m4[] PROGMEM = "April";
const char m5[] PROGMEM = "May";
const char m6[] PROGMEM = "June";

PGM_P const months[] PROGMEM = {m1,m2,m3,m4,m5,m6};
#endif /* _HMI_MSG_H_ */

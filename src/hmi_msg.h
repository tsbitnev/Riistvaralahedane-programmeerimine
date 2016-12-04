#ifndef _HMI_MSG_H_
#define _HMI_MSG_H_

#define PROG_VERSION "Version: %S built on: %S %S"
#define LIBC_VERSION "avr-libc version: %S avr-gcc version: %S"
#define STUD_NAME "Tarvo Sbitnev"
#define GET_MONTH_MSG "Enter Month name first letter >"
#define UPTIME_MSG "Uptime: %lu s"

#define HELP_CMD "help"
#define HELP_HELP "Get help"
#define VER_CMD "version"
#define VER_HELP "Print FW version"
#define ASCII_CMD "ascii"
#define ASCII_HELP "print ASCII tables"
#define MONTH_CMD "month"
#define MONTH_HELP "Find matching month from lookup list. Usage: month <string>"
#define CLI_HELP_MSG "Implemented commands:"
#define CLI_NO_CMD "Command not implemented.\n Use <help> to get help."
#define CLI_ARGS_MSG "To few or to many arguments for this command\nUse <help>"

extern PGM_P const months[];

extern const char help_cmd[];
extern const char help_help[];
extern const char ver_cmd[];
extern const char ver_help[];
extern const char ascii_cmd[];
extern const char ascii_help[];
extern const char month_cmd[];
extern const char month_help[];

#endif /* _HMI_MSG_H_ */

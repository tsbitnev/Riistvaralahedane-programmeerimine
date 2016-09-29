#include <stdio.h>
#include "print_helper.h"

int print_ascii_tbl (FILE *stream) {
    for (char c = ' '; c <= '~'; c++) {
        if(!fprintf(stream, "%c ", c)) {
            return 0;
        }
    }
    return fprintf(stream, "\n");
}


int print_for_human (FILE *stream, const unsigned char *array, const int len) {
    for (int i = 0; i < len; i++) {
        if (array[i] >= ' ' && array[i] <= '~') {
            if(!fprintf(stream, "%c", array[i])) {
                return 0;
            }
        } else {
            if(!fprintf(stream, "\"0x%02x\"", array[i])) {
                return 0;
            }
        }
    }
    return fprintf(stream, "\n");;
}

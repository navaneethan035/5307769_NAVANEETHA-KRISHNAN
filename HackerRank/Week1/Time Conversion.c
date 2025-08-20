#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* timeConversion(char* s) {
    int hh, mm, ss;
    char period[3];

    sscanf(s, "%d:%d:%d%s", &hh, &mm, &ss, period);

    if (strcmp(period, "PM") == 0 && hh != 12) {
        hh += 12;
    }
    if (strcmp(period, "AM") == 0 && hh == 12) {
        hh = 0;
    }

    static char result[9];
    sprintf(result, "%02d:%02d:%02d", hh, mm, ss);

    return result;
}
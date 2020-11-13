#include <stdlib.h>
#include <string>

int main() {
    char buf[100];
    char dumi[10][24]; // 10 reda po 23 simvolva
    int i, m = 0;

    std::printf("Enter the sentence: \n");
    gets_s(buf);

    i = 0;
    do {
        /**
         * sscanf vzima purviq string ot izrechenieto
         * Primer: Zdravei kak si
         * Otgovor: Zdravei
         */
        sscanf(buf + i, "%s", dumi[m]);
        i += strlen(dumi[m++]) + 1;
    } while (i < strlen(buf));
    int maxLength = 0;
    for (int j = 0; j < m; ++j) {
        if (strlen(dumi[j]) > maxLength) {
            maxLength = strlen(dumi[j]);
        }
    }
    for (int j = 0; j < m; ++j) {
        if (strlen(dumi[j]) == maxLength)
            printf("%s", dumi[j]);
    }


    return 0;
}
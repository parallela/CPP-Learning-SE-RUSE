#include <stdlib.h>
#include<iostream>
#include <string>
#include "vector"


int main() {
    char izrechenie[100]; // Dumata
    char dumi[20][16];
    int i, m = 0,c = 0;

    printf("Enter sentence: \n");
    gets_s(izrechenie);
    i = 0;
    do {
        sscanf(izrechenie + i, "%s", dumi[m]);
        i += strlen(dumi[m++]) + 1;
    } while (i < strlen(izrechenie));

    for (int j = 0; j < m; ++j) {
        int z = 0;
        int h = strlen(dumi[j]) - 1;
        bool s = true;
        while (h > z) {
            if (dumi[j][z++] != dumi[j][h--]) {
                s = false;
                break;
            }
        }
        if (s) {
            c++;
        }
    }

    printf("Polindromni dumi v izrechenie: %d", c);

    return 0;
}
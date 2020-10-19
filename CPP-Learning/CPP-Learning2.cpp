#include <iostream>
#include <stdlib.h>

using namespace std;

int mai2n() {
    int n;
    int P=0;

    for(int i = 0; i<n; i++) {
        P += P+1 / (i+2)*(i+2);
    }

    cout << P << endl;

    return 0;
}
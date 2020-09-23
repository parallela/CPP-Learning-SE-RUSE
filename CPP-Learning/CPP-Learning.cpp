using namespace std;

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <algorithm>
#include <vector>

int main() {
    string Text = "HELLO";
    transform(Text.begin(), Text.end(), Text.begin(), ::tolower);

    string temp = Text;

    vector <string> WaveVector = {};


    for (int i = 0; i < Text.size(); ++i) {
        if (Text[i] == ' ') continue;
        temp[i] = toupper(temp[i]);
        WaveVector.push_back(temp);
        cout << temp << endl;
        temp = Text;
    }

//    for (int i = 0; i < WaveVector.size(); ++i) {
//        cout << WaveVector[i] << endl;
//    }


    return 0;
}


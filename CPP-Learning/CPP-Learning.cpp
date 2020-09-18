#include <iostream>

using namespace std;


bool itsDevidable(int number) {
    if (number < 0) {
        return false;
    }
//    cout << (number % 7) << endl;
    if (!(number % 7)) {
        cout << "It's devisible by 7 \n";
        return true;
    } else {
        cout << "It's not devisible by 7, try again \n";
        return false;
    }
}

int main() {
    // Work with variables
    //char gradudation = 'A';
    //string name = "Lubomir";
    //int age = 50;
    //double cm = 2.4
    //int age = 0;
    //bool isMale = true/false
    //	string words[] = { "word1", "word2", "word3"};
    /*
     * HelloWorld
     *
     * cout << "Hello World \n";
     */


    //cout << "Hello " << name << endl;
    //cout << gradudation << endl;
    //cout << phrase.find("mir", 0);
    //cout << phrase.substr(0,8);

    //cout << "Enter Your Age: ";
    //cin >> age;
    //
    //cout << "Your ages are " << age << endl;
    itsDevidable(28);


    return 0;
}


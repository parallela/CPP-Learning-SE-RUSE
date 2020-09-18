#include<iostream>

using namespace std;

int main() {
    string name = "Lubomir";
    // p = pointer
    // p<Name> - variable
    string *pName = &name;

    cout << pName;
    // *pName - show the pointer data dereference
    // &var get pointer

    return 0;
}

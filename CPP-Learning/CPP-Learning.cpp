using namespace std;

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <algorithm>
#include <vector>

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sort(numbers.begin(), numbers.end());

    cout << numbers[0] + numbers[1] << endl;


    return 0;
}


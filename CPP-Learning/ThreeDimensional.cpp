#include<iostream>

using namespace std;

int main() {
    int x[3][3][2] =
            {
                    {{0, 1}, {2, 3}, {4,  5}} ,
                    {{6, 7}, {8, 9}, {10, 11}},
                    {{7,8}, {9,10},{11,12}}
            };

    cout << x[0][1][1] << endl; // Output: 3 (get the first table, second column, second row)


// Display all of the three dimensional array
//    for (int i = 0; i < 2; ++i)
//    {
//        for (int j = 0; j < 3; ++j)
//        {
//            for (int k = 0; k < 2; ++k)
//            {
//                cout << "Element at x[" << i << "][" << j
//                     << "][" << k << "] = " << x[i][j][k]
//                     << endl;
//            }
//        }
//    }
    return 0;
}

//
// Created by lubom on 9/19/2020.
//

#ifndef CPP_LEARNING_TEST_H
#define CPP_LEARNING_TEST_H

#include<iostream>

using namespace std;

class Test {
public:
    string title = "Simple title";
    string description = "Simple description";
    int pagination = 5;

    // Constructor
    Test(string aTitle, string aDesc, int paginate) {
        title = aTitle;
        description = aDesc;
        pagination = paginate;
    }

    bool hasTitleLongThan3Char() {
        if (title.length() > 3) {
            return true;
        }

        return false;
    }


};


#endif //CPP_LEARNING_TEST_H

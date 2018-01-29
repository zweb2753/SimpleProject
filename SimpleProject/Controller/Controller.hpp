//
//  Controller.hpp
//  SimpleProject
//
//  Created by Weber, Zane on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Controller
{
private:
    //data members
    int specialNumber;
    string favoriteWord;
    int * numberPointer;
protected:
    //Things that only need to be used in subclasses
public:
    //anyone can see this
    Controller();
    void start();
    void useVector();
};

#endif /* Controller_hpp */


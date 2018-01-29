//
//  Controller.cpp
//  SimpleProject
//
//  Created by Weber, Zane on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    this->specialNumber = 98765;
    this->favoriteWord = "spork";
}

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
       cout << "this has excecuted" << index
        + 1 << " times" << endl;
        
    }
    
    useVector();
}

void Controller :: useVector()
{
    vector<int> numbers;
    
    numbers.push_back(specialNumber);
    cout << "the size of my vector is: " << numbers.size() << endl;
    numbers.pop_back();
    cout << "the size of my vector is: " << numbers.size() << endl;
}


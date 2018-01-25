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
    
}

void Controller :: start()
{
    string myName = "Zane Weber";
    for (int index = 12; index < 31; index++)
    {
        cout << index + 1 << endl;
        cout << myName << endl;
        cout << myName + " is sitting in class" << + index << endl;
        
    }
}

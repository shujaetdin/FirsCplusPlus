//
//  Controller.cpp
//  FirsCplusPlus
//
//  Created by Din, Shujaet on 1/23/18.
//  Copyright © 2018 Din, Shujaet. All rights reserved.
//

#include "Controller.hpp"

using namespace std;
int main();

Controller :: Controller()
{
    cout << "Im in the constructor"
    << endl;
}

 void Controller :: start()
{
    string name = "Shujaet";
    
    string * shujaetPointer;
    shujaetPointer = &name;
    
    cout << name << endl;
    cout << shujaetPointer << endl;
    for(int x = 13 ; x <= 31; x++)
    {
        cout << x << endl;
    }
    
    cout << "Im not Depressed" << "I love to ride in the backseat" << "I only eat halal meat" << endl;
    
    
}


    

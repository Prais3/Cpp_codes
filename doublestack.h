//---------------------------------------------------------------------------------------------------------------
// author @ Varun Jani
// 
// Description: This program asks us to create or implement four files (charstack, doublestack, charlist, doublelist) 
// and then convert infix to postfix and then evaluate the value of the postfix expression. 
// Once all the test cases are passed it will show congratulations, all the test cases are passed
//---------------------------------------------------------------------------------------------------------------

#ifndef __DoubleStack__
#define __DoubleStack__

#include <iostream>
#include <string>
#include "doublelist.h"

using namespace std;

class DoubleStack
{
private:
    DoubleList list;
public:
    bool IsEmpty() const;
    void Push(double elem);
    double Pop();
    double Top() const;
    void Clear();

    friend ostream& operator<< (ostream& os, DoubleStack& stack);  
    operator string();                                      
};

#endif //__STACK__

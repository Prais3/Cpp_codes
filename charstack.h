//---------------------------------------------------------------------------------------------------------------
// author @ Varun Jani
// 
// Description: This program asks us to create or implement four files (charstack, doublestack, charlist, doublelist) 
// and then convert infix to postfix and then evaluate the value of the postfix expression. 
// Once all the test cases are passed it will show congratulations, all the test cases are passed
//---------------------------------------------------------------------------------------------------------------

#ifndef __CharStack__
#define __CharStack__

#include <iostream>
#include <string>
#include "charlist.h"

using namespace std;

class CharStack
{
private:
    CharList list;
public:
    bool IsEmpty() const;
    void Push(char elem);
    char Pop();
    char Top() const;
    void Clear();

    friend ostream& operator<< (ostream& os, CharStack& stack); 
    operator string();                                          
};

#endif //__STACK__

//---------------------------------------------------------------------------------------------------------------
// author @ Varun Jani
// 
// Description: This program asks us to create or implement four files (charstack, doublestack, charlist, doublelist) 
// and then convert infix to postfix and then evaluate the value of the postfix expression. 
// Once all the test cases are passed it will show congratulations, all the test cases are passed
//---------------------------------------------------------------------------------------------------------------

#include <string>
#include <iostream>
#include <sstream>
#include <cassert>

#include "charstack.h"

using namespace std;

bool CharStack::IsEmpty() const
{
    return list.IsEmpty();
}

void CharStack::Push(char elem)
{
    list.AddToHead(elem);
}

char CharStack::Top() const
{
    return list.GetHead();
}

char CharStack::Pop()
{
    int t = Top();
    list.RemoveHead();
    return t;
}

void CharStack::Clear()
{
    while(IsEmpty() == false)
      Pop();
}

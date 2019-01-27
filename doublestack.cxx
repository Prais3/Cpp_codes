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
#include "doublestack.h"

using namespace std;

bool DoubleStack::IsEmpty() const
{
    return list.IsEmpty();
}

void DoubleStack::Push(double elem)
{
    list.AddToHead(elem);
}

double DoubleStack::Top() const
{
    return list.GetHead();
    
}

double DoubleStack::Pop()
{
    double t = Top();
    list.RemoveHead();
    return t;
}

void DoubleStack::Clear()
{
    while(IsEmpty() == false)
      Pop();
}

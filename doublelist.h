//---------------------------------------------------------------------------------------------------------------
// author @ Varun Jani
// 
// Description: This program asks us to create or implement four files (charstack, doublestack, charlist, doublelist) 
// and then convert infix to postfix and then evaluate the value of the postfix expression. 
// Once all the test cases are passed it will show congratulations, all the test cases are passed
//---------------------------------------------------------------------------------------------------------------

#ifndef __DoubleList__
#define __DoubleList__

#include <iostream>
#include <string>

using namespace std;

class DoubleList;

class DoubleNode
{
private:
    double value;
    DoubleNode* prev;
    DoubleNode* next;
public:
    DoubleNode(double value, DoubleNode* prev = NULL, DoubleNode* next = NULL);
    friend class DoubleList;
};

class DoubleList
{
private:
    DoubleNode* h;
    DoubleNode* t;
public:
    DoubleList();
    ~DoubleList();
    bool IsEmpty() const;
    double GetHead() const;
    double GetTail() const;
    void AddToHead(double v);
    void AddToTail(double v);
    bool RemoveHead();
    bool RemoveTail();
    bool HasOne() const;
    bool RemoveLast();		

    friend ostream& operator<< (ostream& os, const DoubleList& list); 
    operator string() const;                                            
};

#endif //__TDLCharList__

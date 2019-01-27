//---------------------------------------------------------------------------------------------------------------
// author @ Varun Jani
// 
// Description: This program asks us to create or implement four files (charstack, doublestack, charlist, doublelist) 
// and then convert infix to postfix and then evaluate the value of the postfix expression. 
// Once all the test cases are passed it will show congratulations, all the test cases are passed
//---------------------------------------------------------------------------------------------------------------

#ifndef __CharList__
#define __CharList__

#include <iostream>
#include <string>

using namespace std;

class CharList;

class CharNode
{
private:
    char value;
    CharNode* prev;
    CharNode* next;
public:
    CharNode(char value, CharNode* prev = NULL, CharNode* next = NULL);
    friend class CharList;
};

class CharList
{
private:
    CharNode* h;
    CharNode* t;
public:
    CharList();
    ~CharList();
    bool IsEmpty() const;
    char GetHead() const;
    char GetTail() const;
    void AddToHead(char v);
    void AddToTail(char v);
    bool RemoveHead();
    bool RemoveTail();
    bool HasLast();
    bool RemoveLast();

    friend ostream& operator<< (ostream& os, const CharList& list);   
    operator string() const;                                          
}    

#endif //__CharList__

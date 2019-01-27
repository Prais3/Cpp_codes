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
#include "doublelist.h"

using namespace std;

DoubleList::DoubleList()
{
    h = t = NULL;
}

DoubleNode::DoubleNode(double value, DoubleNode* prev, DoubleNode* next)
{
    this->value = value;
}

DoubleList:: ~DoubleList()
{
    while(IsEmpty() == false)
      RemoveHead();
}
bool DoubleList::IsEmpty() const
{
    return (h == NULL);
}

double DoubleList::GetHead() const
{
    return h->value;
}

double DoubleList::GetTail() const
{
    return t->value;
}

void DoubleList::AddToHead(double v) 
{
    if(IsEmpty())
    {
        h = t = new DoubleNode(v, NULL, NULL);
    }
    else
    {
        DoubleNode *r = new DoubleNode(v);
        r->next = h;
        h->prev = r;
        h = r;
    }
}

void DoubleList::AddToTail(double v) 
{
    if(IsEmpty())
    {
        h = t = new DoubleNode(v, NULL, NULL);
    }
    else
    {
        DoubleNode *r = new DoubleNode(v);
        r->prev = t;
        t->next = r;
        t = r;
    }  
}

bool DoubleList::HasOne() const
{
    if(h == NULL)
    {
      return false;
    }  
    else if(h == t)
    {
      return true;
    }
    
    return false;
}

bool DoubleList::RemoveLast() 
{
    assert(HasOne());
    delete h;
    h = t = NULL;
    return true;
}

bool DoubleList::RemoveHead()
{
    if(HasOne())
    {
      RemoveLast();
    }  
    else
    {
      h = h->next;
      delete h->prev;
      h->prev = NULL;
    }
    
    return true;
}

bool DoubleList::RemoveTail()
{
    if(HasOne())
    {
      RemoveLast();
    }  
    else
    {
      t = t->prev;
      delete t->next;
      t->next = NULL;
    }
    
    return true;
}

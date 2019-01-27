//---------------------------------------------------------------------------------------------------------------
// author @ Varun Jani
//
// Description: This program asks us to create or implement four files (charstack, doublestack, charlist, doublelist) 
// and then convert infix to postfix and then evaluate the value of the postfix expression. 
// Once all the test cases are passed it will show congratulations, all the test cases are passed
//---------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <sstream>
#include <cassert>
#include <stdlib.h>
#include "charlist.h"

using namespace std;

CharList::CharList()
{
    h = t = NULL;
}

CharNode::CharNode(char value, CharNode* prev, CharNode* next)
{
    this->value = value;
}

CharList:: ~CharList()
{
    while(IsEmpty() == false)
      RemoveHead();
}

bool CharList::IsEmpty() const
{
    return (h == NULL);
}

char CharList::GetHead() const
{
    return h->value;
}

char CharList::GetTail() const
{
    return t->value; 
}

void CharList::AddToHead(char v)
{
    if(IsEmpty() == true)
    {
        h = t = new CharNode(v, NULL);
    }
    else 
    {
        CharNode *r = new CharNode(v);
        r->next = h;
        h = r;
    }
}

void CharList::AddToTail(char v)
{
     if(IsEmpty() == true)
    {
        h = t = new CharNode(v, NULL);
        return;
    }
    else
    {
        CharNode *r = new CharNode(v);
        r->next = NULL;
        t->next = r;
        t = r;
    }
}

bool CharList::HasLast()
{
    if(IsEmpty())
    {
        return false;
    }
    else if(h != t)
    {
        return false;
    }
    else
    {
        return true;
    }
    
    return false;
}

bool CharList::RemoveLast()
{
    assert(HasLast() == true);
    delete h;
    h = t = NULL;
    return true;
}

bool CharList::RemoveHead()
{
    if(HasLast())
    {
        RemoveLast();
    }
    else
    {
        CharNode *r = h;
        h = h->next;
        delete r;
    }
    
    return true;
}

bool CharList::RemoveTail()
{
    if(HasLast())
    {
        RemoveLast();
    }
    else
    {
        CharNode *s = h;
        while(s->next != t)
          s = s->next;
        delete t;
        t = s;
        t->next = NULL;
    }
    
    return true;
}

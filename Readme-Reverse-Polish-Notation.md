# Cpp_codes

author @ Varun Jani

Description: This program asks us to create or implement four files (charstack, doublestack, charlist, doublelist) 
and then convert infix to postfix and then evaluate the value of the postfix expression. 
Once all the test cases are passed it will show congratulations, all the test cases are passed


This program has to be compiled using all the files listed below and can be compiled on a terminal on Linux or a GNU supporting IDE on Windows

The command to compile the program is as follows:

g++ -ansi -pedantic -Wall doublelist.cxx doublestack.cxx charlist.cxx charstack.cxx calculator.cxx operator_string.o -o calculator

./calculator

charlist -> CharNode()
            ~CharList()
            IsEmpty()
            GetHead()
            GetTail()
            AddToHead()
            AddToTail()
            HasLast()
            RemoveLast()
            RemoveHead()
            RemoveTail()

doublelist -> DoubleNode()
              ~DoubleList()
              IsEmpty()
              GetHead()
              GetTail()
              AddToHead()
              AddToTail()
              HasOne()
              RemoveLast()
              RemoveHead()
              RemoveTail()

charstack -> IsEmpty()
             Push()
             Top()
             Pop()
             Clear()

doublestack -> IsEmpty()
               Push()
               Top()
               Pop()
               Clear()

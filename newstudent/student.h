#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;
class student
{

public:
    string school_name;
    string location;
    string name;
    int standard;
    student()
    {

    }
    student(string A,string B, string C, int D)
    :name(A),school_name(B),location(C),standard(D)
    {

    }
};


#endif // STUDENT_H_INCLUDED

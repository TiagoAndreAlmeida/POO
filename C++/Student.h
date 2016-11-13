#include "Person.h"
#include <iostream>

using namespace std;

class Student : public Person {
    
    private:
        string _class;
    public:
        Student(string c, string n, int a);
};
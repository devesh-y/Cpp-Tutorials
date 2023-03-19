#include <iostream>
using namespace std;

class ClassB;

class ClassA 
{
    private:
        int numA;
        friend int add(ClassA, ClassB);
    public:
        ClassA() : numA(12) {}  
    
};

class ClassB 
{
    private:
        int numB;
        friend int add(ClassA, ClassB);
    public:
        ClassB() : numB(1) {}
    
};

int add(ClassA objectA, ClassB objectB) 
{
    return (objectA.numA + objectB.numB);
}

int main() 
{
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}
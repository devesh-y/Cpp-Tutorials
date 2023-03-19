#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=45;

    try{
        int x=453;
        throw x;       //if we write it as throw;     then it will terminate as a runtime error 
    // if we are not throwing anything eg. we are not writing the line throw 45;    it's ok 
        cout<<"hello\n";//after we throw something the lines after it will not execute
    }
    //int x=56;          i cannot write anything between try and catch blocks
    catch(int e){
        cout<<"the value of e is "<<e<<" \n";//after we match the first one --other catch will not execute
    }
    catch(...){           //There is a special catch block called ‘catch all’ catch(…) that can be used to catch all types of exceptions
        cout<<"it will catch everything\n";
    }
}
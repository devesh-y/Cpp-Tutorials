#include<bits/stdc++.h>
using namespace std;
void foo(){
    try {
        // Some code that throws an exception
        int x = 5, y = 0;
        if(y==0)
            throw overflow_error("Divide by zero exception");
        int z = x / y;
        cout << z << endl;
    } 
    catch (exception& e) {
        cout << "Caught exception: " << e.what() << endl;
        throw;  // re-throw the exception to be caught by an outer catch block
    }
}
int main() {
    try{
        foo();
    }
    catch(...){
        cout<<"another exception caught if comes";
    }
    return 0;
}
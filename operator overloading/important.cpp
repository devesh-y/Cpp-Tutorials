#include<bits/stdc++.h>
using namespace std;

class hello{
    int y;
    public:
        hello(){
            y=0;
        }
        hello(int p){
            y=p;
        }
        void operator ++(){
            y++;
            
        }
        hello operator++(int){
            return hello(y++);
        }
        void print(){
            cout<<y<<" ";
        }
};

int main(){
    hello p;
    
    ++p;
    ++p;
    ++p;
    p.print();
    (p++).print();
    p.print();


}
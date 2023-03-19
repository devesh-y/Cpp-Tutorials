#include<bits/stdc++.h>
using namespace std;

class base{
    private:
        int a,b;
    public:
        base(){
            cout<<"base constructor zero\n";
        }
       base(int a, int b):a(a),b(b){
            cout<<"base 2 argument consturctor\n";
       } 
       ~base(){
         cout<<"base destructor\n";
       }
};
class derived:public base{
    private:
        int c,d;
    public:
    derived(){
        cout<<"derived zero constructor\n";
    }
    derived(int c,int d){
        cout<<"derived consturctor 2 argument\n";
        c=34;
    }
    ~derived(){
        cout<<"derived destructor\n";
    }
};
int main(){
    derived d(34,4);
}
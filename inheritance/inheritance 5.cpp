#include <iostream> 
#include <string> 
#include <cmath> 
#define ll long long int 
using namespace std;

class Acct
{
    string name; 
    ll acctno;
    protected:
    int balance;
    public:
        int acctType; 
        void getdata()
        {
            cout << "Enter the coustmer name :" << endl; 
            getline(cin >> ws, name);
            cout << "Enter the Account number :" << endl; 
            cin >> acctno;
            balance = 0;
        }
        void display()
        {
            cout << "Coustmer Name :" << name << endl; 
            cout << "Account Number :" << acctno << endl; 
            if (acctType == 1)
            {
                cout << "Saving Account" << endl;
            }
            else
            {
                cout << "Current Account" << endl;
            }
            cout << "total balance is Rs " << balance << endl;
        }
        void withdraw()
        {
            int out;
            cout << "Enter the amount to Withdraw" << endl; 
            cin >> out;
            if (out <= balance)
            {
                balance -= out;
                cout << "Rs." << out << " is successfully withdrawl" << endl;
            }
            else
            {
                cout << "Sorry insufficient balance" << endl;
            }
        }
        void deposit()
        {
            int in;
            cout << "Enter the amount to be deposite" << endl; 
            cin >> in;
            balance += in;
            cout << "Rs." << in << " is sucessfully added to your Account" << endl;
        }
};
class SB_Acct : public Acct
{
    int time;
    float interestrate; 
    public:
        void getdata()
        {
            cout << "Enter the time period in years :" << endl; 
            cin >> time;
            interestrate = 0.05;
        }
        void compute()
        {
            float interest;
            float temp = pow((1 + interestrate), time); 
            interest = (float)balance * temp-balance;
            cout << "Interest for " << time << " years of amount Rs." << interest << " is added" << endl; 
            balance += interest;
        }
};
class curr_acct : public Acct
{
    int min_bal;
    int penalty;
    public:
        curr_acct() : min_bal(2000), penalty(100) {} 
        void check()
        {
            if (balance < min_bal)
            {
                balance -= penalty;
                cout << "Amount of Rs." << penalty << " is deducted as penalty"
                << "\n";
            }
        }
};
int si = 0; 
int ci = 0;
int main()
{
    Acct a[10]; 
    SB_Acct s[10]; 
    curr_acct c[10]; 
    int t;
    cout << "Enter no of queries " << endl; cin >> t;
    while (t--)
    {
        cout << "Enter 1 for saving account\n2 for current account :" << endl; 
        cin >> a[t].acctType;
        if (a[t].acctType == 1)
        {
    
            si++; s[si].Acct::getdata();
            s[si].getdata();
            s[si].Acct::deposit();
            s[si].compute();
            s[si].display();
            s[si].withdraw();
            s[si].display();
        }
        else if (a[t].acctType == 2)
        {
            ci++; c[ci].Acct::getdata();
            c[ci].deposit();
            c[ci].check();
            c[ci].display();
            c[ci].withdraw();
            c[ci].check();
            c[ci].display();
        }
    }
    return 0;
}

//this code is written by Devesh 2K20/IT/40
#include<iostream>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
class account
{
    protected:
        char cust_name[20];
        int accno;
        char type;
        int bal;
    public:
        account()
        {
            strcpy(cust_name," ");
            accno=0;
            type=' ';
            bal=0;
        }
        void input()
        {
            cout<<"Enter customer name=";cin>>cust_name;
            cout<<"Enter account number= ";cin>>accno;
            fflush(stdin);
    
        }
        void display()
        {
            cout<<"\n Customer Name= "<<cust_name;
            cout<<"\n Account Number= "<<accno;
            cout<<"\n Balance= "<<bal;
        }
        void deposit()
        {
            int amount;
            cout<<"\n Enter the amount to deposit";
            cin>>amount;
            bal=bal+amount;
        }
};
class sav_acct:public account
{
    private:
        int interest;
    public:
    
    int comp_int()
    {
        int time1,rate1;
        rate1=10;
        cout<<"\n Enter time";cin>>time1;
        interest=bal*pow(1+rate1/100.0,time1)-bal;
        return interest;
    }

    void update_bal()
    {
        bal=bal+comp_int();
    }

    void withdrawal()
    {
        int amount;
        cout<<"\n Enter amount to withdrawn";
        cin>>amount;
        if(bal>=amount){
            bal=bal-amount;
        }
        else{
            cout<<"\n required amount cannot be withdrawn";
        }
    }
};
class cur_acct:public account
{
    private:
        int penalty;
    public:
        int min_bal()
        {
            int min1=1;
            if(bal<=1000)
            {
                penalty=100;
                bal=bal-penalty;
                min1=0;
            }
            else{
                cout<<"\n No penalty charged";
            }
            return min1;
        }
        void withdrawal()
        {
            int amount;
            cout<<"\n Enter the amount to withdrawn";
            cin>>amount;
            int temp=min_bal();
            if(amount>bal)
            {
                cout<<"amount not available\n";
                
            }
            if(temp==1)
            {
                if(bal>=amount)
                bal=bal-amount;
            }
            else
            {
                cout<<"\n The amount cannot be withdrawn";
            }
        }
   };
int main()
{
    
    cur_acct c1;
    sav_acct s1;
    while(1)
    {
        cout<<"choose type of your account: "<<endl<<"1. saving accout"<<endl<<"2. current account"<<"\n3. exit\n";
        int option;
        cin>>option;
        switch(option)
        {
            case 1:
                s1.input();
                s1.deposit();
                s1.update_bal();
                s1.display();
                s1.withdrawal();
                s1.display();
                
                break;
            case 2:
                c1.input();
                c1.deposit();
                c1.display();
                c1.withdrawal();
                c1.display();
                break;
            case 3:
                exit(0);


        }
    }
    return 0;  
}
 /*
    sav_acct s1;
    cur_acct c1;
    while(1)
    {
        cout<<"choose type of your account: "<<endl<<"1. saving accout"<<endl<<"2. current account"<<"\n3. exit\n";
        int option;
        cin>>option;
        
        switch(option)
        {
            case 1:
                s1.input();
                cout<<"what do yoy want to do"<<endl<<
                "1. display account details"<<endl<<"2. deposit amount"
                <<endl<<"3. withdraw money";
                int option1;
                cin>>option1;
                switch(option1)
                {
                    case 1:
                        s1.display();
                    case 2:
                       
                        s1.deposit();
                        s1.update_bal();

                }



        }
    }
      */
#include<iostream>
#include<list>
#include<numeric> //for accumulate()
using namespace std;
class airtime
{
    private:
        int hours; 
        int minutes; 
    public:
     
        airtime() : hours(0), minutes(0){ }
    
        airtime(int h, int m) : hours(h), minutes(m){ }
        void display() const //output to screen
        { 
            cout << hours << ':' << minutes; 
        }
        void get() 
        {
            char dummy;
            cout << "\nEnter airtime (format 12:59): ";
            cin >> hours >> dummy >> minutes;
        }
        
        //overloaded + operator
       
        airtime operator + (const airtime right) const
        { 
            int temph = hours + right.hours;
            int tempm = minutes + right.minutes;
            if(tempm >= 60) //check for carry
            { 
                temph++; tempm -= 60; 
            }
            return airtime(temph, tempm); //return sum
        }
        
        bool operator == (const airtime& at2) const
        { 
            return (hours == at2.hours) && (minutes == at2.minutes); 
        }
       
        bool operator < (const airtime& at2) const
        { 
            return (hours < at2.hours) || (hours == at2.hours && minutes < at2.minutes); 
        }
       
        bool operator != (const airtime& at2) const
        { 
            return !(*this==at2);
        }
        
        bool operator > (const airtime& at2) const
        { 
            return !(*this<at2) && !(*this==at2); 
        }

}; 

int main()
{
    char answer;
    airtime temp, sum;
    list<airtime> airlist; 
    do 
    { 
        temp.get();
        airlist.push_back(temp);
        cout << "Enter another (y/n)? ";
        cin >> answer;
    } while (answer != 'n');

    //sum all the airtimes
    sum = accumulate( airlist.begin(), airlist.end(), airtime(0, 0), plus<airtime>() );//third argument is the initial value
    cout << "\nsum = ";
    sum.display(); //display sum

    cout << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string name;
    int pop;
    string states[] = { "Wyoming", "Colorado", "Nevada", "Montana", "Arizona", "Idaho"};
    int pops[] = { 470, 2890, 2890, 787, 2718, 944 };

    map<string, int, less<string> > mapStates; //map
    map<string, int, less<string> >::iterator iter; 


    mapStates.insert(make_pair("Punjab",56));      //   insertion method 1


    mapStates.insert(pair<string,int>("Haryana",45)); //important    insertion method 2
 
    //we can insert elements from other map as mp2.insert(mp.begin(), mp.end()); iter1 to iter 2 all except iter2      insertion method 3 

    for(int j=0; j<6; j++)
    {
        name = states[j]; //get data from arrays             insertion method 4
        pop = pops[j];
        mapStates[name] = pop; //put it in map
    }
    cout << "Enter state: "; //get state from user
    cin >> name;
    pop = mapStates[name]; //find population
    cout << "Population: " << pop << ",000\n";
    cout << endl; //display entire map
    for(iter = mapStates.begin(); iter != mapStates.end(); iter++)
        cout << (*iter).first << ' ' << (*iter).second << ",000\n";  //important
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
//it is not working in mingw
struct comp{
    bool operator()(pair<string , int> a , pair<string , int> b){     
        if(a.second!=b.second)
          return (a.second > b.second);
        return a.first < b.first;
    }
  //set will now be ordered on the basis of the second elements i.e. marks in descending order.
};

int main(){
  set < pair < string , int > ,comp >s;
  
  //Insert student names in the set with marks obtained by them
  s.insert({"Ritu" , 85});
  s.insert({"Geeta" , 97});
  s.insert({"Aarti" , 67});
  s.insert({"Zara" , 96});
  s.insert({"Aarti" , 56});
  s.insert({"Zara" , 97});    //this pair already exists in the set
                              //this will only be printed once
  //We have defined our own ordering here --comp 
  //set is ordered on the basis of that
  
  set < pair < string , int > > :: iterator it;
    for(it=s.begin();it!=s.end();it++){
        cout<< it->first << " " << it->second <<endl;
    }
    return 0;
}

// output
// Geeta 97
// Zara 97
// Zara 96
// Ritu 85
// Aarti 67
// Aarti 56
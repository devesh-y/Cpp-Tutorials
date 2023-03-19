#include <bits/stdc++.h>
using namespace std;
int main()
{
	multiset<int> s;
	s.insert(12);
	s.insert(10);
	s.insert(2);
	s.insert(10); // duplicate added
	s.insert(90);
	s.insert(85);
	s.insert(45);
    s.insert(10);
	multiset<int>::iterator it, it1, it2;
	cout << "Multiset elements after sort\n";
	for (it = s.begin(); it != s.end(); it++)          //multisets contain same elements also (it added it also)
		cout << *it << ' ';	
	cout << '\n';

	it1 = s.find(10);//it will point to the last same element 
	it2 = s.find(90);


	s.erase(it1);//it will remove only first element of same elements
    //but s.erase(10);   it will erase all '10' elements
    
    //s.erase(it1,it2) will erase from it1 to it2 (it2 not included)

	cout << "Multiset Elements after erase:\n";
	for (it = s.begin(); it != s.end(); it++)
		cout << *it << ' ';	

	return 0;
}
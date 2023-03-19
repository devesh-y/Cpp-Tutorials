// C++ program to demonstrate vector of pairs
#include<bits/stdc++.h>
using namespace std;

int main()
{             
	vector< pair <int,int> > vect;

	int arr[] = {10, 20, 5, 40 };
	int arr1[] = {30, 60, 20, 50};
	int n = sizeof(arr)/sizeof(arr[0]);

	for (int i=0; i<n; i++)
		vect.push_back( make_pair(arr[i],arr1[i]) );  //important
                                            // we can make pair according to ourchoice
	for (int i=0; i<n; i++)
	{
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}
	/*
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=1;j++)                  //wrongg               
		{
			cout<<vect[i][j]<<" ";
		}
	}*/
	return 0;

	//this will also works

	//vector< pair <int,int> > vect={make_pair<int,int>(10,30),make_pair<int,int>(20,60)};
    //vector< pair <int,int> > vect={pair<int,int>(10,30),pair<int,int>(20,60)};
}

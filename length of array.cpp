#include <iostream>
using namespace std;
/* arr[5]={45,454,23,2,43}        here (&arr+1)= address to the    */
int main()
{
  int arr[5] = {10, 8, 1, 3, 45};
  unsigned len = *(&arr + 1) - arr;
  cout<<*(&arr);
  cout<<"\n"<<arr;
  cout<<"\n"<<&arr<<"\n";

  cout << "The length of the array is: " << len;
  cout << endl
       << (unsigned long long int)(&arr + 1);
  // cout<<endl<<(unsigned)(arr);
  // cout<<endl<<(unsigned long long int)(*(&arr+1));
  // cout<<endl<<**(&arr + 1);
  //   for(int i=0;i<=5;i++)
  // {
  //   cout<<endl<<(unsigned long long int)&arr[i];
  // }
  cout << endl
       << (unsigned long long int)(*(&arr + 1));
  return 0;
}
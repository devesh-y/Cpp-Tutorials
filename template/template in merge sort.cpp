//this code is written by Devesh 2K20/IT/40
#include<iostream>
using namespace std;
template<class T>
void bubblesort(T arr[], int n)
{
	for(int i=0;i<n-1;++i)
    {
		for(int j=0;j<n-i-1;++j)
        {
			if(arr[j]>arr[j+1])
            {
				T temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
template<class T>
void printarr(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n\n";
}
int main()
{
    int arr[] = { 45, 1 ,17 ,-56 ,0, 12 };
    int n = sizeof(arr) / sizeof(int);
    cout << "before sorting->> ";
    printarr(arr, n);
    bubblesort(arr, n);
    cout << "after sorting->> " ;
    printarr(arr, n);

}
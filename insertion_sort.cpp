#include <iostream>
using namespace std;
void InsertionSort(int a[] ,int n)
{
    int i,j,key;
    for(i=1;i<=n-1;i++)
    {
        key = a[i];
        j=i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    int arr[5] ={ 9,7,6,3,2};
    InsertionSort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout << arr[i] << " ";
    }
}
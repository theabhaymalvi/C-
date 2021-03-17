#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void DNFSort(int arr[], int n)   // DNF means Dutch National Flag(It has three color like three elements)
{                                // It can be used to sort only three elements in the array
    int low=0;                   // Time Complexity of DNF Sort is O(N)
    int mid=0;
    int high=n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr,mid,high);
            high--;
        }
    }
}

int main()
{
    int arr[]={1,2,0,0,2,1,1,0,2};
    DNFSort(arr,9);
    
    for(int i=0; i<9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
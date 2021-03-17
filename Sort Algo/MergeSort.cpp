#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define ld long double
#define PI pair<int, int>
#define Pb push_back
 
#define VI vector<int>
#define VUI vector<unsigned int>
#define VL vector<ll>
#define VB vector<bool>
#define VPI vector<PI>
 
#define VVI vector<VI>
#define VVL vector<VL>
 
#define ALL(XX) XX.begin(), XX.end()
#define READ(XX) do { for (auto& x139874: XX) { cin >> x139874; } } while (0)
#define SORT(XX) do { sort(XX.begin(), XX.end()); } while (0)

void merge(int arr[], int l, int mid, int r)
{
    int n1= mid-l+1;
    int n2= r-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0; i<n2; i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++; i++;
        }
        else
        {
            arr[k]=b[j];
            k++; j++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
        k++; i++;
    }

    while(j<n2)
    {
        arr[k]=b[j];
        k++; j++;
    }
}

void mergeSort(int arr[],int l, int r)
{
    if(l<r)
    {
        int mid= (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);

 int arr[]={5,4,3,2,1};
 mergeSort(arr,0,4);
 for(int i=0; i<5; i++)
 {
     cout << arr[i] << " ";
 }
  
return 0;
}
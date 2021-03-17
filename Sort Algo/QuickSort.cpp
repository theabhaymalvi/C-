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

void swap(int arr[], int i, int j)
{
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return;
}

int partition(int arr[], int l, int r)
{
    int pivot=arr[r];
    int i=l-1;

    for(int j=l; j<r; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quickSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pi= partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
    return;
}
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(nullptr);
 
  int arr[10]={4,1,5,3,10,9,100,56,32,73};
  quickSort(arr,0,9);
  for(int i=0; i<10; i++)
  {
      cout << arr[i] << " ";
  }
  cout << endl;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int k = 3;
   int arr[n];
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
   }

   for(int i=0;i<k;i++)
   {
        int num = arr[0];
        int j;
        for(j=0;j<n-1;j++)
        {
            arr[j] = arr[j+1];
        }
        arr[j] = num;
   }

   for(int i=0;i<n;i++)
   {
        cout<<arr[i]<<" ";
   }
}
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
      int m = arr[n-1];
      for(int j=n-1;j>0;j--)
      {
          arr[j]= arr[j-1];
      }
      arr[0] = m;
   }

   for(int i=0;i<n;i++)
   {
        cout<<arr[i]<<" ";
   }
}
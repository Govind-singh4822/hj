#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
        {
            return mid+1;
        }else if(arr[mid]>key){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return -1;
}
int main()
{
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;cin>>key;
	cout<<solve(arr,n,key);
}
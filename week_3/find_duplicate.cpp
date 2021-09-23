#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r)
{
	int pivot=arr[r];
	int i=l-1;
	int j;
	for(j=l;j<=r-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[r]);
	return (i+1);
}

void quicksort(int arr[],int l,int r)
{
	if(l<r)
	{
		int p=partition(arr,l,r);
		quicksort(arr,l,p-1);
		quicksort(arr,p+1,r);
	}
}
int main()
{
   int t;
   cout<<"Enter the test cases=";
   cin>>t;
   while(t--)
   {
   	  int n,i,l=0,r,mid,m=0;
   	  cout<<"Enter the length of array=";
   	  cin>>n;
   	  r=n-1;
   	  int arr[n];
   	  cout<<"Enter the elements of array=";
   	  for(i=0;i<n;i++)
   	  {
   	  	cin>>arr[i];
	  }
   	  
   	  quicksort(arr,l,r);
	  for(i=0;i<n;i++)
	  {
	  	if(arr[i]==arr[i+1])
	  	{
	  		cout<<"Yes"<<endl;
	  		m=-1;
	  		break;
		}
	  }
	  if(m==0)
   	  cout<<"No"<<endl;
   }	
} 

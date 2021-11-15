#include<iostream>
using namespace std;
int comp=0,swp=0;
int partition(int arr[],int l,int r)
{
	int i=l-1;
	int pivot=arr[r];
	
	for(int j=l;j<=r-1;j++)
	{
		comp++;
		if(arr[j]<pivot)
		{
			i++;
			swap(arr[i],arr[j]);
			swp++;
		}
	}
	swap(arr[i+1],arr[r]);
	swp++;
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
	   int i,l=0,n;
	   comp=0,swp=0; 
	   cout<<"Enter the length of array=";
	   cin>>n;
	   int r=n-1;
	   int arr[n];
	   cout<<"Enter the element of array=";
	   for(i=0;i<n;i++)
	   {
	   	 cin>>arr[i];
	   }
	   	quicksort(arr,l,r);
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"comparison="<<comp<<endl;
		cout<<"swap="<<swp;
		cout<<endl;
   	}
}

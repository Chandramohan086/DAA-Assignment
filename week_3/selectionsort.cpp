#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"Enter the test cases=";
	cin>>t;
	while(t--)
	{
      int i,j,n,temp=0,s=0,min,comp=0,min_idx;
      cout<<"enter the length of array=";
	   cin>>n;
	   int a[n];
	   cout<<"Enter the element of array=";
	   for(i=0;i<n;i++)
	   {
	   	cin>>a[i];
	   }
	   for(i=0;i<n-1;i++)
	   {
	   	    min=a[i];
	   	  min_idx=i;
	     for(j=i+1;j<n;j++)
	     {
	     	comp++;
	   	   	if(min>a[j])
	     	{
	     		min=a[j];
	     		min_idx=j;
	     	}
		 }
		 temp=a[i];
		 a[i]=min;
		 a[min_idx]=temp;
		 s++;
	   }
	   for(i=0;i<n;i++)
	   {
	   	cout<<a[i]<<" ";
	   }
	   cout<<"\n"<<"comparison="<<comp<<"\n";
	   cout<<"swap="<<s<<"\n";
	}
	
}

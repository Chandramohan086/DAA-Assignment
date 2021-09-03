#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"Enter the test cases=";
	cin>>t;
	while(t--)
	{
      int i,j,n,current=0,s=0,min,comp=0;
      cout<<"enter the length of array=";
	   cin>>n;
	   int a[n];
	   cout<<"Enter the element of array=";
	   for(i=0;i<n;i++)
	   {
	   	cin>>a[i];
	   }
	   for(i=1;i<n;i++)
	   {
	   	  current=a[i];
	   	  j=i-1;
	   	  comp++;
	   	  while(a[j]>current && j>=0)
	   	  {
	   	  	a[j+1]=a[j];
	   	  	j--;
	   	  	s++;
	   	  	comp++;
	   	  }
	   	  a[j+1]=current;
	   	 
	   }
	   for(i=0;i<n;i++)
	   {
	   	cout<<a[i]<<" ";
	   }
	   cout<<"\n"<<"comparison="<<comp<<"\n";
	   cout<<"swap="<<s<<"\n";
	}
	
}

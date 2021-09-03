#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"enter the test cases=";
	cin>>t;
	while(t--)
	{
		int n,i,j,m=0,c=0,key;
		cout<<"enter the length of array=";
		cin>>n;
		int a[n];
		cout<<"enter the elements of array=";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<"Enter the key element=";
		cin>>key;
		for(i=n-1;i>=1;i--)
		{
			for(j=n-2;j>=0;j--)
			{
			   if(a[i]-a[j]==key)
				{
				   c++;
				   m=-1;
				}
			}
		}
		if(m==0)
		cout<<"No Sequence Found ";
		cout<<c<<endl;
		
	}
	return 0;
}		

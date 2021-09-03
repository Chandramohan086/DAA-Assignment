#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"enter the test cases=";
	cin>>t;
	while(t--)
	{
		int n,i,j,k,m=0;
		cout<<"enter the length of array=";
		cin>>n;
		int a[n];
		cout<<"enter the elements of array=";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-2;i++)
		{
			for(j=i+1;j<n-1;j++)
			{
				for(k=j+1;k<n;k++)
				{
					if(a[i]+a[j]==a[k])
					{
					   cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
					   m=-1;
					}
				}
			}
		}
		if(m==0)
		cout<<"No Sequence Found"<<endl;
	}
	return 0;
}		

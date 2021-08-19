#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k,t;
	cout<<"enter the test cases=";
	cin>>t;
	cout<<endl;
	while(t--)
	{
		cout<<"Enter length of array=";
		cin>>n;
		int a[n];
		cout<<"enter the elements of array=";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>k;
		for(i=0;i<n;i++)
		{
			if(k==a[i])
			{
			  cout<<"YES"<<endl<<"No. of comparisons="<<i+1;
			  break;
		    }
		}
		cout<<endl;
		if(i==n)
		{
			cout<<"NO"<<endl<<"No. of comaprisons="<<n;
			
		}
    }
	return 0;
}

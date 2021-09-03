#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"enter the test cases=";
	cin>>t;
	while(t--)
	{
		int n,i,j,k,m=0,c=0;
		cout<<"enter the length of array=";
		cin>>n;
		int a[n];
		cout<<"enter the elements of array=";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}	
		cout<<endl;
		cout<<"enter the key element=";
		cin>>k;
		c++; 
		if(a[0]==k)
		{
		  cout<<"Present"<<" "<<c<<endl;
	    }
	    else
	    {
			i=1;
			while(i<n && a[i]<=k )
			{
				i*=2;
				c++;
			}
			for(j=i/2;j<n;j++)
			{
				c++;
				if(a[j]==k)
				{
				 cout<<"Present "<<c<<endl;
				 m=-1;
				 break;
			    }
			}
			if(m==0)
			cout<<"Not Present "<<c<<endl;
	    }
   }
   
   return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"enter the test cases=";
	cin>>t;
	while(t--)
	{
		int n,i,key,m,c=0,l=0,r,x=0;
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
		cin>>key;
		m=sqrt(n);
		r=m;
		while(l<r)
		{
		  if(key>=a[l] && key<=a[r-1])
		  {
		  	for(i=l;i<r && key>=a[i];i++)
		  	{
		  		c++;
		  		if(key==a[i])
		  		{
		  		  cout<<"Present"<<" ";
					x=-1;
					
				}
			}
		  }
		    l=r;
		    r+=m;
			if(r>=n)
			r=n;
			c++;
		}
		if(x==0)
		cout<<"Not present";
		cout<<c-1<<endl;
	}
    return 0;
}

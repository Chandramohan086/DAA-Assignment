#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"enter the test cases=";
	cin>>t;
	while(t--)
	{
		int n,i,k,l=0,r,mid=0,c=0;
		cout<<"enter the length of array=";
		cin>>n;
		int a[n];
		cout<<"enter the elements of array=";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
			sort(a,a+n);
		cout<<"enter the key element=";
		cin>>k;
		r=n-1;

		while(l<=r)
		{
		    mid=(l+r)/2;
		    
		    if(k==a[mid])
		    {
		      cout<<"Present"<<" ";
		      c++;
		      break;
		    }
		    
		    else if(k>a[mid])
		    {
		    	l=mid+1;
		    	c++;
		    }
			else
			{
				r=mid-1;
				c++;
			}
	    }
	    if(l>r)
	    cout<<"Not Present"<<" ";
	    cout<<c<<endl;
	    
   }
}

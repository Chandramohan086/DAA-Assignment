#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"enter the test cases=";
	cin>>t;
	while(t--)
	{
		int n,i,k,l=0,r,mid=0,c=0,s;
		cout<<"enter the length of array=";
		cin>>n;
		int a[n];
		cout<<"enter the elements of array=";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"enter the key element=";
		cin>>k;
		r=n-1;

		while(l<=r)
		{
		    mid=(l+r)/2;
		    
		    if(k==a[mid])
		    {
		      c++;
		      break;
		    }
		    
		    else if(k>a[mid])
		    {
		    	l=mid+1;
		    }
			else
			{
				r=mid-1;
			}
	    }
	    s=mid;
	    if(a[mid]==k)
	    {
		    while(a[mid+1]==k)
		    {
		    	mid++;
		    	c++;
			}
			while(a[s-1]==k)
			{
				s--;
				c++;
			}
		}
	    if(l>r)
	    cout<<"Not Present"<<" ";
	    cout<<key<<" "<<c<<endl;
	    
   }
}

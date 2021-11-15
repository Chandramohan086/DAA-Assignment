#include<bits/stdc++.h>
using namespace std;
int comp=0,inv=0;
void merge(int a[],int l,int m,int r)
{
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
		
	for(int i=0;i<n1;i++)
	L[i]=a[l+i];
	
	for(int i=0;i<n2;i++)
	R[i]=a[m+i+1];
	
	int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
	    
	   if(L[i]<R[j])
	   {
	   	  a[k++]=L[i++];
	   }
	   
	   else
	   {
	   	  inv++
	   	  a[k++]=R[j++];
	   }
	 comp++;	
	}
	while(i<n1)
	a[k++]=L[i++];
	
	while(j<n2)
	a[k++]=R[j++];
}

void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
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
		comp=0,inv=0;
		cout<<"Enter the length of array=";
		cin>>n;
		int r=n-1;
		int a[n];
		cout<<"Enter the element of array=";
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		mergesort(a,l,r);
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"comparison="<<comp<<" ";
		cout<<"inversion="<<inv;
		cout<<endl;
	}
}


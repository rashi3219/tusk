#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,n,ar[100000],dest[100000];
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        dest[i]=ar[i];
	    }
	    sort(dest,dest+n);
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if(ar[i]==dest[j])
	            {
	                cout<<j<<" ";
	            }
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}

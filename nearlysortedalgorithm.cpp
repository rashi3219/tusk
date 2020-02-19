#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i;
	    cin>>n>>k;
	    int ar[100000];
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    sort(ar,ar+n);
	    for(i=0;i<n;i++)
	    {
	        cout<<ar[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}

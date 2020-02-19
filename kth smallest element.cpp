#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
	int i,n,k,ar[100000];
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	cin>>k;
	sort(ar,ar+n);
	cout<<ar[k-1]<<"\n";
    }

	return 0;
}

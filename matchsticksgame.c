#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int n,m;
	    scanf("%lld",&n);
	    if(n%5==0)
	    printf("-1");
	    else
	    {
	        m=n%5;
	        printf("%lld",m);
	    }
	    printf("\n");

	}
	return 0;
}

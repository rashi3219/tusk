#include <stdio.h>
#include<math.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int a,b,pro=1,i,x,c;


	    scanf("%ld%ld%ld",&a,&b,&c);
	    for(i=0;i<b;i++)
	    {
	        x=(pro*a)%c;
	        pro=x;
	    }


	    printf("%ld",pro);
	    printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m,n,i,j,flag;
	    scanf("%d%d",&n,&m);
	    for(i=n;i<=m;i++)
	    {
	        flag=0;
	        for(j=1;j<=m;j++)
	        {
	            if(i%j==0)
	            {
	                flag++;

	            }

	        }
	        if(flag==2)
	        {
	        printf("%d ",i);

	        }
	    }
	    printf("\n");

	}
	return 0;
}

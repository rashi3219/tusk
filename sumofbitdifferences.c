#include <stdio.h>
int fun(int x)
{
    int count=0;
    while(x>0)
    {
        x=x&(x-1);
        count++;
    }
    return count;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,j,n,ar[100000],sum=0,temp;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&ar[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if(i==j)
	            continue;
	            temp=ar[i]^ar[j];
	            int k=fun(temp);
	            sum=sum+k;
	        }
	    }
	    printf("%d",sum);
	    printf("\n");
	}
	return 0;
}

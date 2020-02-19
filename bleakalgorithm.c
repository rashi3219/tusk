#include <stdio.h>
int countsetbits(int n)
{
    int count=0;
   while(n)
{
n=n&(n-1);
count++;
}
    return count;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int i,j,n,c=0,sum=0;
	   scanf("%d",&n);
	   for(i=1;i<=n;i++)
	   {

	           sum=i+countsetbits(i);
	           if(sum==n)
	           {
	              c=1;
	           }

	   }
	   if(c==0)
	   {
	   printf("1");
	   }
	   else
	   {
	   printf("0");
	   }
	   printf("\n");
	}
	return 0;
}

#include <stdio.h>
	int palindromic(int array[],int num1)
{
int i=0;
int j=num1-1;
int count=0;
while(i<=j)
{
if(array[i]==array[j])
{
i++;
j--;
}
else if(array[i]>array[j])
{
j--;
array[j]+=array[j+1];
count++;
}
else
{
i++;
array[i]+=array[i-1];
count++;
}
}
return count;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,ar[100000],i,cou;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        cou=palindromic(ar,n);
        printf("%d",cou);
        printf("\n");

    }

	return 0;
}

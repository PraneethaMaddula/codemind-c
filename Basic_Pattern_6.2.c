#include<stdio.h>
int main()
{
    int i,j,n,k=1,a;
    scanf("%d",&n);
    a=n;
    for(i=n;i>=1;i--)
    {
        for(j=i-1;j>=1;j--)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            printf("%d ",a);
        }
        printf("
");
        a--;
        k++;
    }
}
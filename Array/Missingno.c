#include<stdio.h>
int main()
{
    int n,a[10],sum=0,total,missing;

    printf("enter number=");
    scanf("%d",&n);

    printf("enter %d number=",n-1);

    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    total=n*(n+1)/2;

    missing=total-sum;

    printf("missing number = %d",missing);
    return 0;
}
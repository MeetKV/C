#include<stdio.h>
int main()
{
    int n,a[10],temp;
    printf("enter size=");
    scanf("%d",&n);

    printf("eneter elements :- ");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }

    printf("reversed number:-\n");

    for(int i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }

    return 0;
}
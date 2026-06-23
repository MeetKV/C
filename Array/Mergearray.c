#include<stdio.h>
int main()
{
    int n1,n2,a[10],b[11],c[100];

    printf("enter size of the first array:-");
    scanf("%d",&n1);

    for(int i=0;i<n1;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("enter size of the second array:-");
    scanf("%d",&n2);

    for(int i=0;i<n2;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
   
    for(int i=0;i<n1;i++)
    {
        c[i]=a[i];
    }

    for(int i=0;i<n2;i++)
    {
        c[n1+i]=b[i];
    }

    for(int i=0;i<n1+n2;i++)
    {
        printf("%d " ,c[i]);
    }
    return 0;
}
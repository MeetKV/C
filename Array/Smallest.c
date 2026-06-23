#include<stdio.h>
int main()
{
    int n,smallest,a[10];

    printf("enter number=");
    scanf("%d",&n);

    printf("enter elements=");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    smallest=a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("smallest=%d",smallest);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,a[10],key,found=0;

    printf("enter size of the arry=");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("enter key=");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("element found a[%d]=%d",i,a[i]);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("not found");
    }
return 0;
}

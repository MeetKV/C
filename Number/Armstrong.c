#include <stdio.h>
int main(){
    int a, sum=0, rev, temp;
    printf("Enter a no:");
    scanf("%d", &a);

    temp = a;
    
    while (a != 0)
    {
        rev = a%10;
        sum=sum+(rev*rev*rev);
        a = a/10;
    }
    if (temp==sum)
    {
        printf("Is an armstrong");
    }
    else
    {
        printf("Is not an armstrong");
    }
    return 0; 
}
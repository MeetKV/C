#include <stdio.h>
int main(){
    int a;
    printf("Enter a no:");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("No is Even");
    }
    else
    {
        printf("No is Odd");
    }
    return 0;    

}
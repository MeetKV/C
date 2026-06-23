#include <stdio.h>
int main(){
    int a,b, temp=0;
    printf("Enter a no a:");
    scanf("%d", &a);
    printf("Enter a no b:");
    scanf("%d", &b);

    temp=a;
    a=b;
    b=temp;

    printf("A is %d",a);
    printf("B is %d",b);

   
    return 0;    

}
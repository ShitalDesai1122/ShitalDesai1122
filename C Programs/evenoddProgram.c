#include<stdio.h>
#include<conio.h>

int main()
{
    int a;

    printf("Enter any number : ");
    scanf("%d",&a);

    if(a%2 == 0)
    {
        printf("%d is even no.");
    }
    else
    {
         printf("%d is odd no.");
    }
}

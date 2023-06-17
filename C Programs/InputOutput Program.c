#include<stdio.h>
#include<conio.h>

int main()
{
    int id;
    char name[20];
    char std[10];

    printf("Enter your id :");
    scanf("%d",&id);

    printf("Enter your name :");
    scanf("%s",name);

    printf("Enter your Class :");
    scanf("%s",std);

    printf("\n--------------------------------------------------\n\n");

    printf("your id is %d\n", id);
    printf("your name is %s\n", name);
    printf("your class is %s\n", std);
}

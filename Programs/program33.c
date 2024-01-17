/* Accept a number from the user and then give a choice to the user
1. square
2. Cube
3. exit
Based on the user’s choice, display the result. If the user enters invalid choice give appropriate message.*/

#include<stdio.h>
void Square(int num);
void Cube(int num);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int choice;
    printf("Enter a choice between 1 to 3\n");
    printf("1.Square");
    printf("2.Cube");
    printf("3.Exit");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                Square(num);
                break;
        case 2:
                Cube(num);
                break;
        case 3:
                printf("Exit the program\n");
                break;
        default :
                printf("Enter the valid choice (i.e. between 1 to 3");

    }
}
void Square(int num)
{
    int Sq=num*num;
    printf("Square=%d",Sq);
}
void Cube(int num)
{
    int Cu=num*num*num;
    printf("Square=%d",Cu);
}
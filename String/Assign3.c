/* Find the salted form of a password entered by user if the salt is "123" and added at the end*/
#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main()
{
    char password[100];
    puts("Enter a password");
    scanf("%s",password);
    salting(password); 
}
void salting(char password[])
{
    char salt[]="0342@";
    char newPass[200];
    strcpy(newPass,password);//newPass="test"
    strcat(newPass,salt);//newPass="test" + "0342@" 
    printf("new password=%s",newPass);
}
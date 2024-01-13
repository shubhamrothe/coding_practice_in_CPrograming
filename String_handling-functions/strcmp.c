/* compare two strings - case considered */
// Logic 1: using strcmp()
// #include<stdio.h>
// #include<string.h>
// void main()
// {
// 	char str1[] = "hello ";
// 	char str2[] = "Hello";
// 	printf("%d\n",strcmp(str1,str2));
// }

// Logic 2: without using strcmp()
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10];
	char str2[10];
  fgets(str1,9,stdin);
  fgets(str2,9,stdin);
    for(int i=0;str1[i]!=0;i++)
    {
       if( str1[i]<str2[i]){
        printf("-1"); 
        return 0;
        }
       else if(str1[i]>str2[i]){
        printf("1"); 
        return 0;
        }
      //  else if( str1[i]==str2[i])
      //  {
      //    continue;
      //  }
    }
    printf("0");
    return 0;
}
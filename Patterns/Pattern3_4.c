/*
      ABCDEF
       BCDEF
        CDEF
         DEF
          EF
           F
           F
          EF
         DEF
        CDEF
       BCDEF
      ABCDEF

*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the size");
    scanf("%c", &ch);
    for (char i = 'A'; i <= ch; i++)
    {
        for (int s = i; s >= 'A'; s--)
            printf(" ");
        for (char j = i; j <= ch; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    /*
               F
              EF
             DEF
            CDEF
           BCDEF
          ABCDEF*/
    for (char i = ch; i >= 'A'; i--)
    {
        for (int s = i; s >= 'A'; s--)
            printf(" ");
        for (char j = i; j <= ch; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}
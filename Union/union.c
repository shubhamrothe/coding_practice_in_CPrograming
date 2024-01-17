#include <stdio.h>
union emp
{
    int num;
    char ch;
};
int main()
{
    union emp e1;
    printf("%d\n", sizeof(e1));//size of largest  member is considered (memory) 

    e1.ch = 'A';
    printf("%c\n", e1.ch);

    e1.num = 200;
    printf("%d\n", e1.num);
}
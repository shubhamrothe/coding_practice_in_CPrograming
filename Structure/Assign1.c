/* Enter address(house no,lock,city,state) of 5 people.*/
#include <stdio.h>
struct address
{
    char name[20];
    int house_no;
    int block;
    char city[30];
    char state[30];
};
void printAddress(struct address person);

int main()
{
    struct address person[5];
    printf("Enter info of 1st person\n");
    scanf("%s", &person[0].name);
    scanf("%d", &person[1].house_no);
    scanf("%d", &person[2].block);
    scanf("%s", &person[3].city);
    scanf("%s", &person[4].state);

    printf("Enter info of 2nd person\n");
    scanf("%s", &person[0].name);
    scanf("%d", &person[1].house_no);
    scanf("%d", &person[2].block);
    scanf("%s", &person[3].city);
    scanf("%s", &person[4].state);

    printf("Enter info of 3rd person\n");
    scanf("%s", &person[0].name);
    scanf("%d", &person[1].house_no);
    scanf("%d", &person[2].block);
    scanf("%s", &person[3].city);
    scanf("%s", &person[4].state);

    printf("Enter info of 4rth person\n");
    scanf("%s", &person[0].name);
    scanf("%d", &person[1].house_no);
    scanf("%d", &person[2].block);
    scanf("%s", &person[3].city);
    scanf("%s", &person[4].state);

    printf("Enter info of 5th person\n");
    scanf("%s", &person[0].name);
    scanf("%d", &person[1].house_no);
    scanf("%d", &person[2].block);
    scanf("%s", &person[3].city);
    scanf("%s", &person[4].state);

    printAddress(person[0]);
    printAddress(person[1]);
    printAddress(person[2]);
    printAddress(person[3]);
    printAddress(person[4]);

    return 0;
}
void printAddress(struct address person)
{
    printf("Address of person: \n");
    printf("Address is: %s,%d,%d,%s,%s\n", person.name, person.house_no, person.block, person.city, person.state);
}
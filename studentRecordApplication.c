#include <stdio.h>

struct student {
      char name[50];
      int rollNo;
      float mark;
      char city[50];
      char dream[50];
};

void read(struct student s[],int n){
    int i;
    for (i=0;i<n;i++){
        printf("\nEnter student's name:");
        scanf("%s",s[i].name);
        printf("Enter student's roll no:");
        scanf("%d",&s[i].rollNo);
        printf("Enter the student's mark in 12th standard:");
        scanf("%f",&s[i].mark);
        printf("Enter student's native city:");
        scanf("%s",s[i].city);
        printf("Write the Dream/Aim in One word:");
        scanf("%s",s[i].dream);
        printf("Your response for student %s is successfully recorded as %dth student\n",s[i].name,i);
    }
    
}
void write(struct student s[],int n){
    int i;
    for (i=0;i<n;i++){
        printf("\nstudent details of index %d",i);
        printf("\nname:%s",s[i].name);
        printf("\nroll no:%d",s[i].rollNo);
        printf("\nmark:%.2f",s[i].mark);
        printf("\ncity:%s",s[i].city);
        printf("\ndream:%s\n",s[i].dream);
    }
}
int main()
{
    struct student s[100];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("Invalid number of students!\n");
        return 1;
    }
    read(s, n);
    write(s, n);
    return 0;
}
#include<stdio.h>
struct student
{
    int rno;
    char name[30];
    double marks;
};
void sort(int n,struct student s[], struct student t)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (s[j].marks < s[j+1].marks)
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
}
void display(int n, struct student s[])
{
    int i;
    printf("MERIT NO.\tROLL NO.\tNAME\tMARKS\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t",i+1,s[i].rno);
        puts(s[i].name);
        printf("\t%lf",s[i].marks);
        printf("\n");
    }
}
void main()
{
    int i,n,j;
    struct student s[10];
    struct student t;
    printf("Enter the no. of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter roll no: ");
        scanf("%d",&s[i].rno);
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter marks: ");
        scanf("%lf",&s[i].marks);
    }
    void sort(n,s,t);
    void display(n,s);
}

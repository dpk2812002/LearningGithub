#include<stdio.h>
struct date{
		int day;
		int month;
		int year;
	};
struct student{
	char name[20];
	int roll;
	float marks;
	date dob;
};
int main()
{
	student s1;
	gets(s1.name);
	scanf("%d",&s1.roll);
	scanf("%f",&s1.marks);
	scanf("%d%d%d",&s1.dob.day,&s1.dob.month,&s1.dob.year);
	
	printf("Name\tRoll\tMarks\tDOB\n");
	printf("%s",s1.name);
	printf("\t");
	printf("%d\t",s1.roll);
	printf("%.2f\t",s1.marks);
	printf("%d/%d/%d",s1.dob.day,s1.dob.month,s1.dob.year);
}

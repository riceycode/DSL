#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct
{
    int day;
    int *month;
    int year;
}DOB;

typedef struct
{
    int reg_no;
    char *name;
    char address[50];
}STU_INFO;

typedef struct
{
    char *college_name;
    char university_name[50];
}COLLEGE;

typedef struct 
{
    DOB d;
    STU_INFO si;
    COLLEGE c;
}STUDENT;

int main()
{
    char ch;
    STUDENT *student;
	student = (STUDENT *) calloc(1, sizeof(STUDENT));
	student->d.month = (int *) calloc(1, sizeof(int));
	student->si.name = (char *) calloc(50, sizeof(char));
	student->c.college_name = (char *) calloc(50, sizeof(char));

    printf("Enter the Student's Name, Reg No., Home Address: \n");
    fgets(student->si.name, 50, stdin);
	scanf("%d", &(student->si.reg_no));
    scanf("%c", &ch);
    fgets(student->si.address, 50, stdin);
	
	printf("Enter DOB in dd/mm/yyyy format: \n");
	scanf("%d %d %d", &(student->d.day), student->d.month, &(student->d.year));
	printf("Enter College and University: \n");
    scanf("%c", &ch);
    fgets(student->c.college_name, 50, stdin);
    fgets(student->c.university_name, 50, stdin);

	printf("----------------\n");

	printf("Student: %sRegistration number: %d\nAddress: %s\n", student->si.name, student->si.reg_no, student->si.address);
	printf("Student's DOB: %02d/%02d/%02d\n", student->d.day, *student->d.month, student->d.year);
    printf("Current College: %s", student->c.college_name);
	printf("University: %s", student->c.university_name);

	return 0;
}
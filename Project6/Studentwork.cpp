#include <iostream>
#include <time.h>
#include "Studentstruc.h"
using namespace std;

void generationDate(Date* date)
{
	date->day = 0 + rand() % 30;
	date->month = 1 + rand() % 12;
	date->year = 1970 + rand() % 30;
}

void generationName(char* name)
{
	for (int i = 0;i < 10;i++)
	{
		name[i] = 97 + rand() % 25;
	}
}

Gender generationGender()
{
	return (Gender)(0 + rand() + 2);
}

void generationSubject(subject* sub)	
{
	for (int i = 0;i < 3;i++)
	{
		sub->names[i] = 97 + rand() % 25;
	}
	sub->ball = 1 + rand() % 5;
}
void generationStudent(Student* student)
{
	for (int i = 0;i < 10;i++)
	{
		generationName(student->fname);
		generationName(student->name);
		generationName(student->lname);
		student->date;
		
	}
}
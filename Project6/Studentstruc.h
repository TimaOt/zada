struct Date
{
	int day;
	int month;
	int year;
};

struct subject
{
	char names[20];
	int ball;
};

enum Gender { male = 0, female = 1 };

struct Student
{
	char fname[20];
	char name[20];
	char lname[20];
	Date date;
	Gender gen;
	subject sub;
};
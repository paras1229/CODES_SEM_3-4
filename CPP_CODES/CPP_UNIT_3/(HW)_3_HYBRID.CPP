/* 3)Write a program to perform hybrid inheritance.
     class: student(rollno,name), test(test1,test2),
	        score(test1+test2), total
	 NOTE: void function and get values by user */

#include <iostream.h>
#include <conio.h>
class Student
{
	public:
    int rno;
    char name[20];

    void getStudent()
	{
        cout << "Enter Roll Number: ";
        cin >> rno;
        cout << "Enter Name: ";
        cin >> name;
    }
    void displayStudent() 
	{
        cout << "Roll Number: " << rno << endl;
        cout << "Name: " << name << endl;
    }
};
class Test : public Student
{
	public:
    int mark1, mark2;
    char sub1[10], sub2[10];
    void getTest()
	{
        getStudent();
        cout << "Enter Subject 1 Name: ";
        cin >> sub1;
        cout << "Enter Mark of Subject1: ";
        cin >> mark1;
		cout << "Enter Subject 2 Name: ";
		cin >> sub2;
		cout << "Enter Mark of Subject2: ";
		cin >> mark2;
    }
    void displayTest()
	{
        displayStudent();
        cout << "Subject1 Name: " << sub1 << endl;
        cout << "Mark: " << mark1 << endl;
		cout << "Subject2 Name: " << sub2 << endl;
		cout << "Mark: " << mark2 << endl;
    }
};
class Score
{
	public:
    int score;

    void getScore()
	{
        cout << "Enter Score: ";
        cin >> score;
    }

    void displayScore()
	{
        cout << "Score: " << score << endl;
    }
};
class Total : public Test, public Score
{
	public:
    int total;

    void getTotal()
	{
        getTest();
        getScore();
        total = mark1 + mark2 + score;
    }
    void displayTotal()
	{
        displayTest();
        displayScore();
        cout << "Total Score: " << total << endl;
    }
};
void main()
{
    clrscr();
    Total t;
    t.getTotal();
    cout << "\nStudent Details:" << endl;
    t.displayTotal();
    getch();
}

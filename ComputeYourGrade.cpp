//Chaston Davis
//Compute Your Grade

#include <iostream>
using namespace std;
void menu();
int displaygrade_func(double grade, int numberofhomeworkquizzes, int homeworkquiz, int numberofexams, int exam, int finalexam);
bool exip = false;
bool exik = true;
int homeworkquiz_func(int numberofhomeworkquizzes);
int exam_func(int numberofexams);
int finalexam_func(int finalexam);

int homeworkquiz_func(int numberofhomeworkquizzes)
{
    int total_points = 0;
    int homeworkquiz;
    

    for (int i=1; i < numberofhomeworkquizzes + 1; i++){
    cout<<"Enter your score for homework or quiz "<< i <<endl;
    cin>>homeworkquiz;
    while(homeworkquiz < 0 || homeworkquiz > 10)
    {
        cout<<"Error: You can't have "<<homeworkquiz<<" points"<<endl;
            cout<<"Enter your score for homework or quiz "<< i <<endl;
            cin>>homeworkquiz;
    
    }  
    total_points += homeworkquiz;
}
    return total_points;
}



void menu(){
while (exip == false && exik == true)
    {
    int homeworkquiz, numberofhomeworkquizzes;
    int exam, numberofexams;
    int finalexam;
    int grade;
    int decision;
    
    cout<<"*****Welcome to the Grade Checking Calculator*****"<<endl;
    cout<<"Enter your score for each of he following:"<<endl;
    cout<<"1) Homework or Quiz (10 Points Each)"<<endl;
    cout<<"2) Exam (50 Points Each)"<<endl;
    cout<<"3) Final Exam (100 Points)"<<endl;
    cout<<"4) Show Grade"<<endl;
    cout<<"5) Exit Program"<<endl;
    cout<<"***********************************************"<<endl;
    cin>>decision;

if (decision == 1)
{
    cout<<"How many homeworks or quizzes do you have?"<<endl;
    cin>>numberofhomeworkquizzes;
    homeworkquiz = homeworkquiz_func(numberofhomeworkquizzes);
    cout<<"Your total points for homework and quiz is:"<< homeworkquiz <<endl;

}
else if (decision == 2)
{
    cout<<"How many exams have you taken?"<<endl;
    cin>>numberofexams;
    exam = exam_func(numberofexams);
    cout<<"Your total points for the exam is:"<< exam <<endl;
}
else if (decision == 3)
{
    cout<<"Enter your score for the final exam"<<endl;
    cin>>finalexam;
    finalexam = finalexam_func(finalexam);
    cout<<"Your total points for the final exam is:"<< finalexam <<endl;
}
else if (decision == 4)
{
    grade = displaygrade_func(grade, numberofhomeworkquizzes, homeworkquiz, numberofexams, exam, finalexam);
}
else if (decision == 5)
{
    cout<<"Have a nice day!"<<endl;
    exip = true;
}
else
{
    cout<<"Error: Invalid Input"<<endl;
    cin>>decision;
}
}
}

int main()
{
    menu();
}


int exam_func(int numberofexams) 
{
    int total_points = 0;
    int exam;

    for (int i=1; i<numberofexams+1; i++){
        cout<<"Enter your score for exam "<<i<<endl;
        cin>>exam;
        while (exam < 0 || exam > 50)
        {
            cout<<"Error: You can't have"<<exam<<"points"<<endl;
            cout<<"Enter your score for exam "<< i <<endl;
            cin>>exam;
        }
        total_points += exam;
    }
        return total_points;
}

int finalexam_func(int finalexam)
{
    int total_points = 0;

    if(finalexam < 0 || finalexam > 100)
    {
        cout<<"Error: You can't have "<<finalexam<<" points"<<endl;
        cout<<"Enter your score for final exam"<<endl;
            cin>>finalexam;
    }
     total_points += finalexam;
    return total_points;
}

int displaygrade_func(double grade, int numberofhomeworkquizzes, int homeworkquiz, int numberofexams, int exam, int finalexam)
{
    char gradeletter;
grade = static_cast<double>(homeworkquiz + exam + finalexam) / (numberofhomeworkquizzes * 10 + numberofexams * 50 + 100);
    
        gradeletter = 'F';
        if (grade >= 0.60)
        {
            gradeletter = 'D';
        }
        if (grade >= 0.70)
        {
            gradeletter = 'C';
        }
        if (grade >= 0.85)
        {
            gradeletter = 'B';
        }
        if (grade >= 0.95)
        {
            gradeletter = 'A';
        }

    cout<<"Your points:"<<endl;
    cout<<"Homeworks or Quizzes:"<<numberofhomeworkquizzes<<"Homeworks and Quizzes, Total Points is:"<<homeworkquiz<<endl;
    cout<<"Exams:"<<numberofexams<<"Exams, Total Points is:"<<exam<<endl;
    cout<<"Final Exam: Total Points is:"<<finalexam<<endl;
    cout<<"Your overall grade is:"<<grade<<endl;
    cout<<"Letter Grade:" <<gradeletter<<endl;

return 0;
}

/* Sample Run:
*****Welcome to the Grade Checking Calculator*****
Enter your score for each of he following:
1) Homework or Quiz (10 Points Each)
2) Exam (50 Points Each)
3) Final Exam (100 Points)
4) Show Grade
5) Exit Program
***********************************************
1
How many homeworks or quizzes do you have?
3
Enter your score for homework or quiz 1
10
Enter your score for homework or quiz 2
9
Enter your score for homework or quiz 3
8
Your total points for homework and quiz is:27

*****Welcome to the Grade Checking Calculator*****
Enter your score for each of he following:
1) Homework or Quiz (10 Points Each)
2) Exam (50 Points Each)
3) Final Exam (100 Points)
4) Show Grade
5) Exit Program
***********************************************
2
How many exams have you taken?
2
Enter your score for exam 1
45
Enter your score for exam 2
50
Your total points for the exam is:95

*****Welcome to the Grade Checking Calculator*****
Enter your score for each of he following:
1) Homework or Quiz (10 Points Each)
2) Exam (50 Points Each)
3) Final Exam (100 Points)
4) Show Grade
5) Exit Program
***********************************************
3
Enter your score for the final exam
85
Your total points for the final exam is:85

*****Welcome to the Grade Checking Calculator*****
Enter your score for each of he following:
1) Homework or Quiz (10 Points Each)
2) Exam (50 Points Each)
3) Final Exam (100 Points)
4) Show Grade
5) Exit Program
***********************************************
4

Your points:
Homeworks or Quizzes:3Homeworks and Quizzes, Total Points is:27
Exams:2Exams, Total Points is:95
Final Exam: Total Points is:85
Your overall grade is:0.823529
Letter Grade:B
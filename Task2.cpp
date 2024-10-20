#include<iostream>
using namespace std;
float Percentage(int,int,int,int,int);
string CalculateGrade(float);
main()
{
    int E,M,C,S,B;
    string name,grade;
    float percent;
    cout<<"Enter student name";
    cin>>name;
    cout<<"Enter marks for English";
    cin>>E;
    cout<<"Enter marks for Mathematics";
    cin>>M;
    cout<<"Enter marks for Chemistry";
    cin>>C;
    cout<<"Enter marks for Social Science";
    cin>>S;
    cout<<"Enter marks for Biology";
    cin>>B;
    percent=Percentage(E,M,C,S,B);
    grade= CalculateGrade(percent);
    cout<<"Name: "<<name<<endl;
    cout<<"Percentage "<<percent <<endl;
    cout<<"Grade: "<<grade <<endl;

}
float Percentage(int E,int M,int C,int S,int B)
{
    int total;
    float percent;
    total=E+M+C+S+B;
    percent=(total*100)/500;
    return percent;
}
string CalculateGrade(float percent)
{
    string c;
    if(percent>=90 && percent<=100)
     c="A+";
     else if(percent>=80)
     c="A";
     else if(percent>=70)
     c="B+";
     else if(percent>=60)
     c="B";
     else if(percent>=50)
     c="C";
     else if(percent>=40)
     c="D";
     else
     c="F";
     return c;
}
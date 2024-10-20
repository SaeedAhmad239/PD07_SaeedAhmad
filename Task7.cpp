#include<iostream>
using namespace std;
int time(int,int,int,int);
string situation(int);
main()
{
    int Arrival_Hour, Arrival_Minute, Exam_Start_Hour, Exam_Start_Minute,t;
    cout<<"Enter Start of exams in hours";
    cin>>Exam_Start_Hour;
    cout<<"Enter exam start in minutes";
    cin>>Exam_Start_Minute;
    cout<<"Enter student arrival time in hours";
    cin>>Arrival_Hour;
    cout<<"Enter student arrival time in minutes";
    cin>>Arrival_Minute;
    t=time(Arrival_Hour, Arrival_Minute, Exam_Start_Hour, Exam_Start_Minute);


}
int time(int Arrival_Hour, int Arrival_Minute, int Exam_Start_Hour, int Exam_Start_Minute)
{
       unsigned int submin=Exam_Start_Minute-Arrival_Minute;
        if(Arrival_Hour==Exam_Start_Hour)
          if(submin>=30 && Exam_Start_Minute<Arrival_Minute)
          cout<<"Late";
        if (Arrival_Hour>Exam_Start_Hour)
        cout<<"Late";

        if(Arrival_Minute==Exam_Start_Minute && Arrival_Hour==Exam_Start_Hour)
        cout<<"On Time";
        if(Arrival_Hour==Exam_Start_Hour && submin>30 && Exam_Start_Minute>Arrival_Minute)
           cout<<"Early";
        else if( Arrival_Hour<Exam_Start_Hour)
           cout<<"Early";
}

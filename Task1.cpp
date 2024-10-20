#include<iostream>
using namespace std;
string DecideActivity(string , string);
main()
{
    string temp, humidity,play;
    cout<<"Enter temperature (warm,cold)";
    cin>>temp;
    cout<<"Enter humidity(dry,humid)";
    cin>>humidity;
    play=DecideActivity(temp,humidity);
    cout<<""<<play;
}
string DecideActivity(string temperature, string humidity)
{
    string a;
    if(temperature=="warm")
     if(humidity=="dry")
      a=="Play Tennis";
      else
       a=="swim";
    else if(temperature=="cold")
     if(humidity=="dry")
     a="Play Basketball";
     else
     a=="Humid";
     return a;
}
#include <iostream>
using namespace std;
float ApartmentPrice(string,int);
float StudioPrice(string, int);
int main() 
{
  string month;
  int days;
  cout << "Enter the month: ";
  cin >> month;
  cout << "Enter the number of days: ";
  cin >> days; 
  float apartmentPrice=ApartmentPrice(month,days);
  float studioPrice = StudioPrice(month,days);
  cout << "Apartment: " << apartmentPrice << "$." << endl;
  cout << "Studio: " << studioPrice << "$." << endl;
  return 0;

}
float ApartmentPrice(string month, int days)
{
     float ApartmentPrice;
    if (month == "May" || month == "October")
    ApartmentPrice = 65*days;
    else if (month == "June" ||  month == "September")
    ApartmentPrice = 68.70*days;
    else
    ApartmentPrice = 77*days;

  if (days > 14)
    ApartmentPrice *= 0.9;
    return ApartmentPrice;

}
float StudioPrice(string month, int days)
{
  float studioPrice;
     if (month == "May" || month == "October")
     studioPrice = 50*days;
     else if (month == "June" || month == "September")
     studioPrice=75.20*days;
     else 
     studioPrice = 76*days;

     if (days > 7)
      studioPrice =studioPrice-(studioPrice*10)/100;
    else if (days > 14)
      studioPrice =studioPrice-(studioPrice*30)/100;
    else if (month == "June" || month == "September") 
      studioPrice = 75.20*days;
    if (days > 14)
      studioPrice =studioPrice-(studioPrice*20)/100; 
}
#include<iostream>
using namespace std;
float price(string, string, int);
main()
{
    string day,fruit;
    int quantity;
    cout<<"Enter day";
    cin>>day;
    cout<<"Enter fruit name";
    cin>>fruit;
    cout<<"Enter quantity";
    cin>>quantity;
    float TotalPrice=price(day,fruit,quantity);
    cout<<"Total payable amount is "<<TotalPrice;
}
float price(string day, string fruit, int quantity)
{
    float amount;
    if(fruit=="Banana")
       if(day=="Sunday")
       amount=quantity*2.70;
       else
       amount=quantity*2.50;
    else if(fruit=="Apple")
       if(day=="Sunday")
       amount=quantity*1.25;
       else
       amount=quantity*1.20;
    else if(fruit=="Orange")
       if(day=="Sunday")
       amount=quantity*0.90;
       else
       amount=quantity*0.85;
    else if(fruit=="Grapefruit")
       if(day=="Sunday")
       amount=quantity*1.60;
       else
       amount=quantity*1.45;
    else if(fruit=="kiwi")
       if(day=="Sunday")
       amount=quantity*3.00;
       else
       amount=quantity*2.70;
   else if(fruit=="pineapple")
       if(day=="Sunday")
       amount=quantity*5.60;
       else
       amount=quantity*5.50;
    else if(fruit=="Grapes")
       if(day=="Sunday")
       amount=quantity*4.20;
       else
       amount=quantity*3.85;
       return amount;
}
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout <<"enter number ";
    cin >> num;
    
    int year = num / 365;
    int m = num % 365;
    int moun = m / 30;
    int day = m % 30;
    
    cout <<"year:"<<year<<"\nmounth:"<<moun<<"\nday:"<<day;
    
    
    return 0;
}
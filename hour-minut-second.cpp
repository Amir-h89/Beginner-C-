#include<iostream>
using namespace std;

void x()
{
int num = 0;
cout <<"enter number: ";
cin >> num;

int hour = num / 3600;
int b = num % 3600;
int minut = b / 60;
int second = b % 60;
cout <<hour<<" hour\n"<<minut<<" minut \n"<<second<<" Second ";
}

int main()
{

x();
    
    return 0;
}
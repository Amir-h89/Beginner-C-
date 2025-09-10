#include <iostream>

using namespace std;

int main()
{
    float a,b,c;

    cout <<"enter 3 number: "<<endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a >= b && a >= c){cout<<a <<" is max";}

    if(b >= a && b >= c){cout << b <<" is max";}
    else
        cout<<c<<" is max";
    return 0;
}

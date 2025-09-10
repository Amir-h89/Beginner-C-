#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter number";
    cin >> n;

    if( 14 <= n && n < 16){cout<<"c";}
    else if(16 <= n && n < 18){cout<<"b";}
    else if(18 <= n && n <= 20){cout<<"a";}

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "enter number: ";
    cin >> n;

    int x = n % 2;
    if( x == 0){cout<<"zoj"<<endl;}
    else
        cout<<"fard";

    return 0;
}

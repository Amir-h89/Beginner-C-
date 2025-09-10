#include <iostream>

using namespace std;

void area(int ,int );

int main()
{
    int l;
    int w;

    cout << "enter width:" << endl;
    cin >> w;
    cout << "enter length: "<<endl;
    cin >> l;

    area(l,w);

    return 0;
}
    void area(int w, int l)
    {
        cout<<"perimeter = "<< (w + l) * 2<<endl;
        cout<<"area = " << w * l;
    }


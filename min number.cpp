#include <iostream>

using namespace std;
void small(int n1,int n2,int n3)
{
    int min1 = min(n1,n2);
    int min2 = min(n3,min1);
    cout<<"smallest number = "<<min2;
}

int main()
{
    int n1,n2,n3;

    cout << "enter 3 number:"<<endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;

    small(n1,n2,n3);

    return 0;
}

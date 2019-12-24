#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a1,a2,a3;
    cout<<"Введите число"<<endl;
    cin>>a1;
    a2=a1*a1;
    a3=a1*a2;
    a3=a3*a2;
    a1=a3*a3;
    a2=a1*a3;
    cout<<a2<<endl;
    system("pause");
    return 0;
}

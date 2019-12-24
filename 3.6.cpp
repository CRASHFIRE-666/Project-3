#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float a,A;
    cout<<"Введите число"<<endl;
    cin>>A;
    A=A*A;
    a=A*A;
    a=a*a;
    cout<<a<<endl;
    system("pause");
    return 0;
}

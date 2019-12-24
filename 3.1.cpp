#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите числа"<<endl;
    float a, b, c;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"A="<<a<< ", B="<<b<<endl;
    system("pause");
    return 0;
}

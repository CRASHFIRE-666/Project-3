#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    float x,a,b,c;
    cout<<"Введите числа"<<endl;
    cin>>a>>b>>c;
    x=a;
    a=b;
    b=c;
    c=x;
    cout<<"A="<<a<<", B="<<b<<", C="<<c<<endl;
    system("pause");
    return 0;
}

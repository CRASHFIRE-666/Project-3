#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    cout<<"Введите число"<<endl;
    cin>>x;
    cout<<"Y="<<(3*pow(x,6))-(6*pow(x,2))-7<<endl;
    system("pause");
    return 0;
}

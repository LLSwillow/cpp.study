#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    *p=50;
    cout << a<<endl;
    cout << p<<endl;
    return 0;
}
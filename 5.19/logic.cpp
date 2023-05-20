#include<iostream>
using namespace std;
int main()
{
    //逻辑运算符
    int a=2;
    cout <<!a<<endl;
    cout <<!!a<<endl;
    int b=0;
    cout <<(a&&b)<<endl;//同真为真
    cout <<(a||b)<<endl;//一真为真 全假为假
    system("pause");
    return 0;
}
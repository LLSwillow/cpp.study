//常量引用： 可理解为既不能改变引用指向，也不能改变其指向单元中的内容，既const * const.
#include<iostream>
using namespace std;
void print(const int &a)//加const 防止误操作修改了主函数中变量的值
{
    //a=10;
    cout<<a<<endl;
}
int main()
{
    int a=10;

    const int &b=10;
    //加了const之后 编译器的操作是 int temp=10； int &b=temp; 且不可修改

    int num=100;
    print(num);
    cout<<num<<endl;//形参误操作修改了变量的值
    return 0;
}
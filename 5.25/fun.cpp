//函数默认参数
#include<iostream>
using namespace std;
void sum(int a,int b=20,int c=20)//可以赋初始值 如果有传过来的参数那么使用传过来的 如果没有 那就使用其默认值
{
    cout<<a+b+c<<endl;
}
int main()
{
    sum(10,1);
    return 0;
}
/*默认值注意事项：    1. 从开始有默认值的形参开始，往后，的形参都要设置默认值
               2.函数声明的参数有默认值，那么函数实现不能有默认值。声明和实现有一个有默认值即可
         函数的声明就是告诉编译器我有写了这个函数，只不过不一定写在了main之前。
         这样函数的具体实现就可以选择是写在main之前还是main之后了*/
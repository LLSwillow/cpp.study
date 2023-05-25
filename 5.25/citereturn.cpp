#include<iostream>
using namespace std;
int& fun()
{
    //不要 返回局部变量的引用  非法操作 

    static int a=10;//此时a为局部变量  放在栈区 函数调用结束就会释放 导致返回值非法操作
    //所以要在其前面加static 使其存在全局区里
    return a;
}
int main()
{
    int & b=fun();
    cout <<b<<endl;

    //函数的调用可以作为左值

    fun()=20;//函数返回的值 是 a 本身的值（因为return a）其作为左值相当于 给a重新赋值
    cout <<b<<endl;//而这里 b就是a的小名 所以b值改变
    return 0;
}
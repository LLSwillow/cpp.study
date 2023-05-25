// 函数重载    避免歧义 让编译器知道什么时候调用什么

// 函数重载条件：同一个作用域；函数名称相同；函数参数类型/个数/顺序不同
//  函数的返回值不可以作为函数 重载的条件

// 函数默认参数要注意 可能会引起歧义 不能当作函数重载了

#include <iostream>
using namespace std;
// 写在main函数外的都是全局作用域
void fun()
{
    cout << "null" << endl;
}
/*void fun(int a) // 个数
{
    cout << "a" << endl;
}
*/
void fun(double a, int b) // 类型
{
    cout << "a b" << endl;
}
void fun(int b, double a) // 顺序
{
    cout << "b a" << endl;
}
void fun(int &a) // 可读可写  传过来的不能是数字 eg：int &a=10 前面讲过这是不合法的
{
    cout << "&a" << endl;
}
void fun(const int &a) // 不可更改   const int &a=10 正确的
{
    cout << "const int &a" << endl;
}
int main()
{
    fun();

    // fun(1);

    fun(2.0, 2);
    fun(4, 3.12);
    int a = 10;
    fun(a);
    fun(10); // 想要调用常量引用 应该传过去数字
    return 0;
}
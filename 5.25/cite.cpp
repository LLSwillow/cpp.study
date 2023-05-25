/*引用语法： 数据类型 &别名 = 原名       他们本身就是操纵着同一个数据 所以改变其中任意一个都会使其值改变
  注意事项：  引用必须初始化 赋初值  且初始化之后不可更改 （你一开始确定他当谁的别名 就不可以在当别人的小名）


  引用可以理解为指针常量：能修改地址的数据但是不能改变指向

  引用的本质就 是指针常量，编译器把他翻译成了int* const ref

  int &b=a 相当于 指针常量 int* const p=&a;
  给你起的小名突然给别人不可以的
  */
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a; // 编译器读取到这行代码的时候 将其转化为 int*const b=&a
    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << &b << endl;

    b = 30; // 证明值可以改变

    cout << a << endl;
    cout << b << endl;

    int d = 5;
    // &b=d;                     证明地址指向不能改变  不能变成别人的小名

    b = d; // 这个属于 赋值操作
    cout << b << " " << a << endl;

    cout << endl;
    // 指针常量
    int *const p = &a; // 值可以被改变 指向的变量不可以改变
    cout << p << endl;
    int c = 2;
    // p=&c;
    *p = 2;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}
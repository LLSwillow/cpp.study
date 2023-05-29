/*我写了有参构造 编译器不再提供无参构造 会提供拷贝构造（可以使用拷贝构造函数） 如果写了拷贝 编译器不在提供
编译器提供的是浅拷贝函数  浅拷贝带来的问题 堆区的内存重复释放*/

#include <iostream>
using namespace std;
class stu
{
public:
    int a;
    int *my_height;
    stu()
    {
        cout << " " << endl;
    }
    stu(int age, int height)
    {
        a = age;
        my_height = new int(height);
    }

    stu(const stu &s)
    {
        a = s.a;
        // my_height=s.my_height;//编译器默认执行的 会导致重复释放
        // 深拷贝
        my_height = new int(*s.my_height); // 堆区开辟一份新的空间
        cout << "s" << endl;
    }
    ~stu() // 析构函数
    {
        if (my_height != NULL) // 释放堆区开辟的数据
        {
            delete my_height;
            my_height = NULL;
        }
        cout << "end" << endl;
    }
};
void test()
{
    // 1.使用先前创建过的 拷贝给 新的对象
    stu s(10, 150);
    stu s1(s);
    cout << "s" << s.a << endl;
    cout << "s1" << s1.a << endl;
    stu s2;
}
// 2.值传递相当于Person p = p 拷贝构造函数隐式写法
void dowork(stu s)
{
}
void test2()
{
    stu s;
    dowork(s);
}
// 作为返回值 vscode两个地址一样的，没用到拷贝构造函数
stu dowork1()
{
    stu s;
    return s;
}
void test3()
{
    stu s = dowork1();
}
void test4()
{
    stu s(19, 160);
    cout << "s" << s.a << " " << *s.my_height << endl;
    stu s1(s);
    cout << "s1" << s1.a << " " << *s1.my_height << endl;
}
int main()
{
    // test();
    // test2();
    // test3();
    test4();
    return 0;
}
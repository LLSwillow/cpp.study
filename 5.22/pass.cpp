#include <iostream>
#include <string>
using namespace std;
struct stu
{
    string name;
    int age;
};
void print1(stu s) // 这里是 值传递 形参改变 实参不变
{
    cout << s.age << " "
         << s.name << endl;
}
void print2(stu *p) // 址传递 可以在函数中修改 主函数中结构体变量的值
{
    cout << p->age << " "
         << p->name << endl;
}
int main()
{
    stu s1;
    s1.age = 19;
    s1.name = "zhangsan";
    print1(s1);
    print2(&s1);
    return 0;
}
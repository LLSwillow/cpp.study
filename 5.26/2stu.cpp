// 结构体中都是属性，类中包含行为

#include <iostream>
#include <string>
using namespace std;
// 类中的函数全部叫作方法，方法是面向对象的东西
class stu
{
public:
    string _name;
    string _id;

    void setname(string name)
    {
        _name = name;
    }
    void setid(string id)
    {
        _id = id;
    }

    void display()
    {
        cout << _name << endl;
        cout << _id << endl;
    }
};
int main()
{
    stu s1;
    // s1.name="zhangsan";
    // s1.id="123";
    s1.setname("zhangsan"); // 函数调用
    s1.setid("123");

    s1.display();
    return 0;
}
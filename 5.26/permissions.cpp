/* 访问权限
1.公共权限： public 类内（class内）类外均可访问
2.保护权限：protected 类外不可访问
3.私有权限：private 类外不可访问

结构体（默认共有） 和 类（默认私有） 区别是 默认访问权限不同
 class是在堆区里的，struct实在栈区里的

成员属性经常设置为私有 1.可以自己控制读写权限 2.对于写的权限可以检测数据有效性

*/
#include<iostream>
using namespace std;

class stu
{
public:
    string name;
    //设置id  只写
    void setid(string id)
    {
        my_id=id;
    }
    //获取id  只读
    string getid()
    {
        return my_id;
    }

    //获取姓名 只读
    string getname()
    {
        name="zhangsan";
        return name;
    }
    //设置年龄
    void setage(int age)
    {
        if(age<0 || age>100)
        {
            cout <<"error"<<endl;
            age=0;
        }
        my_age=age;
    }
    //获取年龄
    int getage()
    {
        return my_age;
    }
private:

    string my_id;

    string my_name;

    int my_age;
};
struct stu2
{
    int age;
};
int main()
{
    stu s1;
    //s1.id=5;//默认不可访问

    s1.setage(190);//调用函数
    cout<<s1.getage()<<endl;

    s1.setid("456");
    cout <<s1.getid()<<endl;

    stu2 s2;
    s2.age=15;
    return 0;
}
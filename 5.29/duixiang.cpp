/*p107
对象的构造和清理  构造 析构 函数

重载：就是参数不同，函数名字相同

构造函数： 名称与类名相同 可以有参数 没有返回值且不需要写void  自动调用 只调一次
有参 无参（默认 调用函数的时候不要加（）否则编译器会认为他是函数的声明而不调用执行）普通 拷贝

匿名函数： 单独拿出来，它是没有名字的  当前所在行执行完就被回收（匿名对象，总比没有对象好 hhhhh
        匿名对象可以作为函数入参，不过对应的形参如果是引用则必须为const
        “不要在匿名对象里，创建拷贝构造函数” 编译器会认为是对象声明 person（p2）==person p2

析构函数 名称与类名相同且名称前要加~ 不可以有参数 没有返回值且不需要写void 自动调用 只调一次
   程序在创建对象时自动调用构造函数  怎么感觉像 python的init  学完java听这个会好更多*/

#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    // 构造函数 我写了它会调用的写的 我不写 编译器也会帮我写一个空的函数作为构造函数 编译器我哭死
    person() // 自动调用 主函数中创建一个对象之后 就会自动执行这个函数
    {
        cout << "The call to the constructor  houzaohanshu " << endl;
    }
    person(int a)
    {
        age=a;
        cout<<"youcan"<<endl;
    }
    int age;
    person(const person &p)//拷贝构造函数 写法 
    //拷贝（之所以用引用是为了防止递归调用，不用引用内存里又创建了Person对象p，又调用Person的构造函数了）
    //只要参数为(person *p)的都为拷贝 但是用常量引用 更加的标准而已
    {
        //将传入的数据拷贝到当前对象身上
        age=p.age;

    }
    void setname(string name)
    {
        m_name = name;
    }
    string getname()
    {
        return m_name;
    }
    void setid(string id)
    {
        m_id = id;
    }
    string getid()
    {
        return m_id;
    }
    void setage(int age)
    {
        m_age = age;
    }
    int getage()
    {
        return m_age;
    }
    ~person()
    {
        cout << "The call to the destructor  xigouhanshu " << endl;
    }

private:
    string m_name;
    string m_id;
    int m_age;
};

void test()
{
    //括号法 调用函数
    person p;//默认构造函数的调用
    person p1(1);//有参函数的调用
    person p2(p1);
    cout<<"p1 age="<<p1.age<<endl;
    cout<<"p2 age="<<p2.age<<endl;
    //显示法
    person a;
    person a1=person(10);//有参构造
    person a2=person(a1);//拷贝构造
    cout<<"a1 age="<<a1.age<<endl;
    cout<<"a2 age="<<a2.age<<endl;
    //隐式转换法
    person b=10;//有参构造 自动转化为 person b =person(10)  
    person c=b;//拷贝构造
}

int main()
{
    //person p;
    test();
    // p.getage(19);
    return 0;
}
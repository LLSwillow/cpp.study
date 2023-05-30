//初始化列表相当于（直接声明一个有初始值的类型），省略了赋值操作
/* stu(int a,int b,int c):m_n1(a),m_n2(b),m_n3(c)  更灵活的初始化
现在这个写法相当于在 有参构造函数后面加上了了初始化  
这个方法可以用在类嵌套中 直接对类中类进行赋值 只需要调用一次函数实现 多个类不同属性初始化
真正的初始化发生在构造函数语句前，即初始化列表处 所以用传统方法需要一次初始化和一次拷贝（赋值）的开销
对于大的对象成员（下一节），这种开销会影响程序性能 
这个写法主要的好处是可以使用默认值和占位参数，使初始化更灵活*/
#include<iostream>
using namespace std;
class stu
{
public:
//传统初始化方式
    // stu(int n1,int n2,int n3)
    // {
    //     m_n1=n1;
    //     m_n2=n2;
    //     m_n3=n3;
    // }
//初始化列表 初始化属性
    //stu():m_n1(1),m_n2(20),m_n3(30)//注意书写格式 这时初始化值是固定的
    stu(int a,int b,int c):m_n1(a),m_n2(b),m_n3(c)
    {

    }
    int m_n1,m_n2,m_n3;
};
void test()
{
    //stu s(10,2,3);
    stu s(2,5,9);//更灵活的初始化值
    cout<<s.m_n1<<endl;
    cout<<s.m_n2<<endl;
    cout<<s.m_n3<<endl;
}
int main()
{
    test();
    return 0;
}
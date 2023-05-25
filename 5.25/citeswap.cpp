#include<iostream>
using namespace std;


//值传递
void swap1(int a,int b)
{
    int tmp=a;
    a=b;
    b=tmp;
}
//址传递
void swap2(int *p1,int *p2)
{
    int tmp=*p1;
    *p1=*p2;
    *p2=tmp;
}
//引用
void swap3(int &x,int &y)//这里用&x &y来接收两个变量 说明让这个&x &y来当这两个变量的小名了！！所以其指向的是同一份数据
{
    int tmp=x;
    x=y;
    y=tmp;
}
int main()
{
    int a=10;
    int b=20;
    swap1(a,b);
    cout<<a<<" "<<b<<endl;//值传递不改变主函数中的变量值
    swap2(&a,&b);
    cout<<a<<" "<<b<<endl;//址传递
    swap3(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
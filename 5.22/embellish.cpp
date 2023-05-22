#include<iostream>
using namespace std;
int main()
{
    //const 后跟的谁 谁不能改变  *p表示值  p表示地址

    int a=10;
    int b=20;
    const int *p=&a;//注意const的位置

    //就是说你无法直接改变你的女朋友，但是你可以换一个女朋友

    //常量指针   其指向的变量可以改变 但其值不会改变

    p=&b;
    //*p=10; 不能修改值
    cout <<*p<<endl;

    //指针常量

    int c=50;
    int d=40;
    int * const p1=&c;
    //指针指向的地址 不可改变 
    *p1=60;
    //p1=&d;//不可以修改 指向的地址

    cout<<*p1<<endl;

    const int * const p2=&d;// 值和址 均不可更改
    
    return 0;
}
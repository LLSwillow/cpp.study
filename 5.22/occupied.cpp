#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout <<sizeof(p)<<endl;//64位操作系统 不管什么数据类型 指针大小都是8个字节
    cout <<sizeof(int *)<<endl;
    return 0;
}
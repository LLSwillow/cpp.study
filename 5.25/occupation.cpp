//函数占位参数       不写变量名 只写一个数据类型
//比如两个同名函数，用到相同类型与个数的形参，功能不同，用占位来区分?????还是不理解（doge
#include<iostream>
using namespace std;
void fun(int a=10,int =2)//      格式（类型 变量（可以有默认值），类型（也可以直接=默认值。不写变量名）） 
{
    cout<<"Use it another day"<<endl;
}
int main()
{
    fun(10);//当函数参数 没有 默认值的时候，有几个形参（包括占位参数） 就必须传递几个数据。
    return 0;
}
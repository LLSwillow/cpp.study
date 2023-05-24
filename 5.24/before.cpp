//c++万物皆可对象，然而我却没对象。。哇呜
//天天面向对象还没对象？

//运行前：代码区 全局区 程序运行后生成： 堆区 栈区

//代码区： 共享：防止多开小号；只读：防止作弊


/*全局区 ：全局变量（在主函数外定义的变量） 和 静态变量 （static修饰的变量）  和  常量：字符串常量 和 其他常量
          全局常量 （在主函数外定义全局变量的时候 前面加了const 那么此时属于 常量区数据）
          经测试const修饰的静态变量也在全局区
除了以上的数据 局部变量（在主函数外定义的变量） 和 局部常量（在主函数内 用const 修饰的变量） 都不属于全局区
 该区域数据 在程序结束后 由操作系统释放 
 */
#include<iostream>
#include<string>
using namespace std;
int quan_a=2;//全局变量
const int c=5;//全局常量

int main()
{
    int a=10;//局部变量
    cout <<&a<<endl;
    cout <<endl;
    cout <<&quan_a<<endl;
    cout<<endl;
    static int b=3;//静态变量
    cout <<&b<<endl;
    cout <<endl;
    //string s="hello";//字符串常量
    cout <<&"hello"<<endl;//           ！！!当 定义 出字符串的时候 这个字符串常量就不是放在全局区了
    cout <<endl;
    cout <<&c<<endl;//全局常量
    cout <<endl;
    const int d=8;
    cout <<&d<<endl;//局部常量
    cout <<endl;
    return 0;
}
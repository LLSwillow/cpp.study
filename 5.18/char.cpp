#include<iostream>
using namespace std;
int main()
{
    char ch='c';
    cout <<ch<<endl;

    float c=3e5;
	cout << "c=" << c <<endl; 

    cout <<"hello\n";

    cout <<"\\"<<endl;//想输出一个斜杠 

    cout <<"asd\tble"<<endl;//\t 水平制表符 与\t之前的东西共同占八个字符的位置 空格个数取决于其前面占了几个字符
    cout <<"asdvSccnxzdc\tble"<<endl;
    cout <<"a\tble"<<endl;
    //\t水平制表符 效果就是在水平制表符后面的内容 上下有对其的效果
    return 0;
}
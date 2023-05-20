#include<iostream>
#include<string>
using namespace std;
int main()
{
    //数据类型
    //1.整型
    int a=0;
    cin>>a;
    cout <<a<<endl;
    //2.浮点型
    double b=0;
    cin>>b;
    cout<<b<<endl;
    //3.字符型
    char c='0';
    cin>>c;
    cout<<c<<endl;
    //4.字符串型
    string ch="world";
    cin>>ch;
    cout<<ch<<endl;
    //5.布尔类型
    //因为布尔类型本质是整形，只能依靠整数转换，你输入的0.1被在编译时会被直接去掉小数点，即0.1变0。
    bool e=1;
    cin>>e;
    cout <<e<<endl;

    system("pause");
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

//你要明白结构体变量的含义是  创建一种新的数据类型
struct stu
{
    string name;
    int age;
};

int main()
{
    stu stuarr[2]={
        {"zhangs",19},
        {"lisi",18}
    };
    for(int i=0;i<2;i++)
    {
        cout << stuarr[i].name <<" "
             << stuarr[i].age <<" "<<endl;//竟然可以这种形式直接打印出来换行啊
    }
    return 0;
}
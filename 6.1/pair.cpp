#include<iostream>
using namespace std;

pair<string,int> p;//pair可以一个 类型 携带两个数据  eg：坐标
int main()
{
    p.first="hello";
    p.second=5;
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    return 0;
}
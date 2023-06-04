#include <iostream>
using namespace std;

#include <bits/stdc++.h>
#include<algorithm>//算法库

vector<int> v; // 数组  要么v后不写（） 要么写括号初始化数组容量大小

int main()
{
    v.push_back(1);
    v.push_back(2);
    v.push_back(8);
    cout << v.size() << endl;

    v.pop_back(); // 弹出（删除）最后一个元素
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] ;
    }
    cout<<endl;
    // v.resize(20);
    cout << v.size() << endl;
    
    v.resize(5);
    cout << v.size() << endl;
    // 在vector里初始化了数组的空间大小之后 在主函数中定义新的元素 会开辟新的空间？？？？

    // v.resize(2);//重新定义空间大小 小于之前的空间大小 会删除大于后来空间的部分

    // 迭代器 是一个内存地址(存储 指针变量的数组 伪连续)  迭代器的加减
    // 格式： 名称.begin（）  头迭代器 名称.begin()+1

    vector<int>::iterator p = v.begin();

    for (; p!=v.end();p++)//v.end 表示 个数
    {
        cout << *p ;
    }
    cout<<endl;
    cout<<v.back()<<endl;

    v.insert(v.begin()+2,5);
    for(p=v.begin();p!=v.end();p++)
    {
        cout<<*p;
    }
    cout<<endl;
    cout << v.size() << endl;
    //括号里第一个元素表示从哪个元素位置插入 第二个元素表示插入的元素是什么 插入之后其他元素位置全部向后平移
    v.erase(v.begin()+1);//删除元素 括号里有一个元素时 只删除该元素 如果有两个元素 那么删除的是一个区间内的数据（左闭右开）
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    cout << v.size() << endl;

    vector<int> s={1,2,8,8,8,6,6,3,3,5};
    //unique 函数返回的是 全部不同元素个数的 后一个元素的地址
    s.erase(unique(s.begin(),s.end()),s.end());//实现去重
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}
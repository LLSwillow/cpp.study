//栈和队列 
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    stack<int> m;
    m.push(5);
    m.push(6);
    cout<<m.top()<<endl;
    m.pop();//删除一个元素
    cout<<m.top()<<endl;//说明栈先进后出

    priority_queue<string> n;
    n.push("ksdn");
    n.push("sdsaf");
    cout<<n.top()<<endl;
    n.pop();
    cout<<n.top()<<endl;

    return 0;
}
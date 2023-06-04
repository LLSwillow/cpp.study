#include <iostream>
#include <set>
#include <unordered_set> //不自动排序
using namespace std;

set<int> a;           // set容器 自动去重 且自动排序
unordered_set<int> b; // 不排序
int main()
{
    a.insert(4);
    a.insert(4);
    a.insert(9);
    a.insert(1);
    for (int x : a)
    {
        cout << x;
    }
    cout << endl;
    b.insert(4);
    b.insert(4);
    b.insert(40);
    b.insert(42);
    b.insert(8);
    for (int x : b)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << *(a.end()) << endl;   // 名称.end()表示的是 当前容器内元素个数
    cout << *(a.find(2)) << endl; // find查找 找不到的时候就返回元素个数
    cout << *(a.find(9)) << endl;
    cout << a.empty() << endl;  // empty 判断是否为空
    cout << a.count(4) << endl; // count()括号内的元素 是要统计的元素个数的元素
    // lower_bound() 小于括号内元素的第一个元素 upper_bound() 大于....
    // set< int,greater<int> > 表示 按从大到小的顺序排序 注意书写格式
    return 0;
}
#include <iostream>
#include <map>
using namespace std;

map<string, int> m; // 需要定义两种类型 键值对 下标类型 元素类型
int main()
{
    m["gdf"] = 5;
    cout << m.size() << endl;
    cout << m["gdf"] << endl;
    // 键值对 插入
    m.insert(make_pair("asc", 8)); // 需要用到函数
    cout << m.size() << endl;

    map<int,int> n;
    cout<<n.size()<<endl;
    n[3]=7;
    cout<<n[3]<<endl;
    cout<<n.size()<<endl;
    return 0;
}
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
vector<int> p = {1, 5, 8, 4};
int main()
{
    // 排序  m默认从小到大排序
    int arr[] = {3, 5, 6, 9, 8, 7, 2};
    sort(arr, arr + 7); // 首尾地址
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    sort(p.begin(), p.end());
    for (auto x : p)
    {
        cout << x << " ";
    }
    cout << endl;
    // 最大公因数函数
    cout << __gcd(15, 2) << endl;
    // 最大值函数 max 最小值 min
    // 头文件 math.h 绝对值 abs 浮点数绝对值 fabs
    // 交换函数swap

    // 反转函数 reverse 反转容器或数组
    int a[] = {4, 8, 6, 4, 2};
    reverse(a, a + 5);
    for (int x : a)
    {
        cout << x << " ";
    }
    // 全排列函数 next_permutation 两个参数 （需要全排列的范围） 返回一个全新的排列序列
    do
    {
        for (auto x : p)
            cout << x << " ";
        cout << endl;
    } while (next_permutation(p.begin(), p.end()));

    // lower_bound() 小于括号内元素的第一个元素 upper_bound() 大于....  使用的时候必须是有序的

    return 0;
}
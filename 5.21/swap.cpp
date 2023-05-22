#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;

    cout << a << " " << endl;
    cout << b << " " << endl;

    // 这里只是把a和b的值传递给函数swap，但在main函数里，没有实际交换
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
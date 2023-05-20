#include <iostream>
using namespace std;
int main()
{
    // 二维数组
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    cout << "二维数组所占空间大小为 " << sizeof(arr) << endl;
    cout << "二维数组一行元素所占空间大小为 " << sizeof(arr[0]) << endl;
    cout << "二维数组每个元素所占空间大小为 " << sizeof(arr[0][0]) << endl;
    cout << "二维数组一行的元素个数为(列数) " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    cout << "二维数组行数为 " << sizeof(arr) / sizeof(arr[0]) << endl;

    // 二维数组地址
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    return 0;
}
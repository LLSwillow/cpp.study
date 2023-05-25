// new返回的是同类型的指针 格式是 （类型）* （指针变量名称）= new 类型（初始值） eg：int *p=new int(10)

// 关键字delete释放堆区数据 （啊？不是在讲new这个关键字么）禁止套娃！！（bushi）哈哈哈配套使用

/*堆区元素的释放：如果是二维数组的话，得去遍历数组的第二维（不知道这么写正不正确）并释放
                然后再把第一维的所有数组释放（先for循环delete[]，再delete[]这个数组）
               delete arr操作只会释放第一个地址指向的空间，数组后的空间没有被释放。所以要用delete[].*/

#include <iostream>
using namespace std;

// 堆区开辟变量
int *fun()
{
    int *p = new int(2);
    return p;
}
// 堆区开辟数组
void fun2()
{
    int *arr = new int[10]; // int [10]其实是数组的类型
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }
    // 数组名称和指针是同一个东西，都能用[i]
    // 这里的arr就看成一个指针，arr[ i ]表示数组元素

    // 不是每一个数据都需要有名称的，这里直接用指针来接受了定义数据的地址，名称也就多此一举了

    delete[] arr; // 释放堆区数组
}
int main()
{
    int *p = fun();
    cout << *p << endl;
    cout << *p << endl;

    delete p; // 释放堆区数据

    // 内存泄漏就是这块数据已经不需要了，但是没有将这块数据清除，就会一直占用内存

    cout << *p << endl; // 非法访问

    fun2();

    return 0;
}
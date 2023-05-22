#include<iostream>
using namespace std;
int main()
{
    //指针访问数组元素
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr;
    for(int i=0;i<10;i++)
    {
        cout << *p <<" ";
        p++;//地址++ 
    }
    cout <<endl;
    return 0;
}
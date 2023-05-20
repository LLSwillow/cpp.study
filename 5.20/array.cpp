#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    cout <<"数组所占空间大小为  "<<sizeof(arr)<<endl;
    cout <<"数组中每个元素所占空间大小为  "<<sizeof(arr[0])<<endl;
    cout <<"数组中共有"<<sizeof(arr)/sizeof(arr[0])<<"个元素"<<endl;
    int i;
    for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout <<&arr[i]<<endl;
        //arr++;
    }
    return 0;
}
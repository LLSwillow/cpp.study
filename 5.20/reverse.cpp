#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,5,6,9,8,3};
    int i=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++)
    {
        cout <<arr[i]<<"  ";
    }
    cout <<endl;
    //起始和末尾下标
    int start=0;
    int end=len-1;
    while(start<end)
    {
        int tmp=arr[start];
        arr[start]=arr[end];
        arr[end]=tmp;
        start++;
        end--;
    }
    cout <<"after reverse"<<endl;
    for(i=0;i<len;i++)
    {
        cout <<arr[i]<<"  ";
    }
    return 0;
}
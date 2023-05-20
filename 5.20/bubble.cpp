#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,2,8,0,5,7,1,3,9};
    int i=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++)
    {
        cout <<arr[i]<<"  ";
    }
    cout <<endl;
    int j=0;
    for(i=0;i<len-1;i++)
    {
        int flag=1;
        for(j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag=0;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    for(i=0;i<len;i++)
    {
        cout <<arr[i]<<"  ";
    }
    cout <<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int num;
    int count =0;
    for(num=1;num<=100;num++)
    {
        if(num%7==0 || num%10==7 || num/10==7)
        {
            cout <<"Knock on the table"<<endl;
            count++;
        }
        else
        {
            cout <<num<<endl;
        }
    }
    cout <<count<<endl;
    return 0;
}
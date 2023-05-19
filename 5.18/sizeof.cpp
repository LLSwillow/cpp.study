#include<iostream>
using namespace std;
int main()
{
    int a=1;
    cout <<"a 所占的空间大小是"<<sizeof(a)<<"个字节"<<endl;
    cout <<"long 所占的空间大小是"<<sizeof(long)<<"个字节"<<endl;
    float b=3.14f;//加个f表明是单精度 
    cout <<"b="<<b<<endl;

    float c=3e5;
	cout << "c=" << c <<endl; 

    char ch='c';
    cout <<ch<<endl;
    return 0;
}
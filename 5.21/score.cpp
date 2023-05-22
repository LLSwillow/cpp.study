#include<iostream>
#include<string>
using namespace std;
int main()
{
    int score[3][3]={
        {90,80,88},
        {80,76,70},
        {90,60,70}
    };
    string names[3]={"张三","里斯","王五"};
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum += score[i][j];
        }
        cout << names[i]<<"的成绩是"<<sum<<endl;

    }
    return 0;
}
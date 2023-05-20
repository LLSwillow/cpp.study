#include<iostream>

#include<ctime>

using namespace std;
int main()
{
    //真随机数 
	srand((unsigned int)time(NULL));
    int num=rand()%100+1;//生成 0+1 ~ 99+1 的随机数  伪随机数
    //玩家猜测
    int guess=0;
    //while((cin>>guess)!=num)
    while(1)
    {
        cin>>guess;
        
        if(guess>num)
        {
            cout <<"猜大了"<<endl;
        }
        else if(guess<num)
        {
            cout <<"猜小了"<<endl;
        }
        else
        {
            cout <<"猜对了"<<endl;
            break;
        }
    }
    return 0;
}
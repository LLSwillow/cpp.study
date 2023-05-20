#include<iostream>
using namespace std;
int main()
{
    int i=100,ge,ten,hun;
    while(i<1000)
    {
        ge=i%10;
        ten=i/10%10;
        hun=i/100;
        if(ge*ge*ge+ten*ten*ten+hun*hun*hun==i)
        {
            cout <<i<< endl;
        }
        i++;
    }

    return 0;
}
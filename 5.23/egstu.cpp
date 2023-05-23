#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct stu
{
    string name;
    int score;
};
struct tea
{
    string name;
    stu s[5];
};
void input(tea t[], int len) //  emm通过赋值输入
{
    // srand((unsigned int)time(NULL));
    int i = 0;
    for (i = 0; i < len; i++)
    {
        string q = "ABC";
        t[i].name = "teacher";
        t[i].name += q[i];
        // cin>>t[i].name;
        int j = 0;
        for (j = 0; j < 5; j++)
        {
            string num = "12345";
            // cout <<"stu name"<<j+1;
            // cin>>t[i].s->name>>t[i].s->score;
            t[i].s[j].name = "student";
            t[i].s[j].name += num[j];
            t[i].s[j].score = rand() % 61 + 40;
        }
        cout << endl;
    }
}
void print(tea t[], int len)
{
    for (int i = 0; i < 3; i++)
    {
        cout << t[i].name << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "\t" << t[i].s[j].name << " " << t[i].s[j].score;
        }
        cout << endl;
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    tea t[3];
    int len = sizeof(t) / sizeof(t[0]);
    input(t, len);
    print(t, len);
    return 0;
}
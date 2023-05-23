#include <iostream>
#include <string>
using namespace std;

struct hero
{
    string name;
    int age;
    string sex;
};
void bubble(struct hero arr[], int l)
{
    for (int i = 0; i < l - 1; i++)
    {
        int flag = 1;
        for (int j = 0; j < l - 1 - i; j++)
        {
            if (arr[j].age > arr[j + 1].age)
            {
                struct hero temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
}
void print(struct hero arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].sex << endl;
    }
}
int main()
{
    struct hero heroarr[5] = {
        {"liub", 23, "nan"},
        {"guanyu", 22, "nan"},
        {"zhangfei", 20, "nan"},
        {"zhaoyun", 21, "nan"},
        {"diaochan", 19, "nv"}};
    int len = sizeof(heroarr) / sizeof(heroarr[0]);
    bubble(heroarr, len);
    print(heroarr, len);
    return 0;
}
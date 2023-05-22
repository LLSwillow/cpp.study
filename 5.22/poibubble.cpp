#include <iostream>
using namespace std;
void bubble(int *p, int len)
{
    int i = 0;
    for (i = 0; i < len - 1; i++)
    {
        int flag = 0;
        int j = 0;
        for (j = 0; j < len - 1 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                int tmp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = tmp;
                // 这里用的是数组元素的指针下标表示法，即*（p+i）=p【i】
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
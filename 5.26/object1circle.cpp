/*面向对象： 封装 继承 多态
 */
#include <iostream>
using namespace std;
const double p = 3.14;

// 封装
class circle
{
    // 权限
public:
    // 属性（变量
    int r;
    // 行为（函数
    double c()
    {
        return 2 * p * r;
    }
};
int main()
{
    // 通过类 创建具体的对象 实例化
    circle c1;
    c1.r = 10;
    cout << c1.c() << endl;

    return 0;
}
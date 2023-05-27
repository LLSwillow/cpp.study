// 求立方体的面积和体积
#include <iostream>
using namespace std;

class cube
{
public:
    /*
        int set_s(int w,int l,int h)
        {
            int s;
            s=2*(w*l+l*h+h*w);
            return s;
        }
        int v(int w,int l,int h)
        {
            int v;
            v=w*l*h;
            return v;
        }
        */
    // 由于属性是私有的 要分别设置长宽高 控制其 读写

    void set_l(int l) // 写
    {
        my_length = l;
    }
    int get_l() // 读
    {
        return my_length;
    }

    void set_w(int w)
    {
        my_wide = w;
    }
    int get_w()
    {
        return my_wide;
    }
    void set_h(int h)
    {
        my_height = h;
    }
    int get_h()
    {
        return my_height;
    }
    int s()
    {
        return 2 * (my_height * my_length + my_height * my_wide + my_length * my_wide);
    }
    int v()
    {
        return my_height * my_length * my_wide;
    }

    // 用成员函数判断是否一样
    bool _same(cube &c) // 只传一个参数  因为是通过一个已知的立方体 调用第二个立方体
    {
        if (my_height == c.get_h() && my_length == c.get_l() && my_wide == c.get_w())
        {
            return true;
        }
        else
            return false;
    }

private:
    int my_wide;
    int my_length;
    int my_height;
};

// 全局函数判断两个立方体是否一样
bool same(cube &c1, cube &c2) // 通过引用可以节省空间
{
    if (c1.get_h() == c2.get_h() && c1.get_l() == c2.get_l() && c1.get_w() == c2.get_w())
    {
        return true;
    }
    else
        return false;
}
int main()
{
    cube c1;
    c1.set_h(10);
    c1.set_l(10);
    c1.set_w(10);

    cout << c1.s() << endl;
    cout << c1.v() << endl;

    cube c2;
    c2.set_h(10);
    c2.set_l(10);
    c2.set_w(10);

    bool ret = same(c1, c2);
    if (ret)
    {
        cout << " q:yes" << endl;
    }
    else
    {
        cout << " q:no" << endl;
    }

    ret = c1._same(c2);
    if (ret)
    {
        cout << " c:yes" << endl;
    }
    else
    {
        cout << " c:no" << endl;
    }

    return 0;
}
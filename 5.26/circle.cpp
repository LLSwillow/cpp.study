#include <iostream>
using namespace std;

// 判断点和圆的位置关系，涉及到两个不同类的对象，所以创建两个类

class point
{
public:
    void setx(int x)
    {
        my_x = x;
    }
    int getx()
    {
        return my_x;
    }
    void sety(int y)
    {
        my_y = y;
    }
    int gety()
    {
        return my_y;
    }

private:
    int my_x;
    int my_y;
};

class circle
{
public:
    void setr(int r)
    {
        my_r = r;
    }
    int getr()
    {
        return my_r;
    }
    void setd(point d)
    {
        my_center = d;
    }
    point getd()
    {
        return my_center;
    }

private:
    int my_r;
    point my_center; // 可以套娃
};

void relation(circle &c, point &d)
{
    int dis = (c.getd().getx() - d.getx()) * (c.getd().getx() - d.getx()) + (c.getd().gety() - d.gety()) * (c.getd().gety() - d.gety());
    int rdis = c.getr() * c.getr();
    if (rdis == dis)
    {
        cout << "above" << endl;
    }
    else if (rdis < dis)
    {
        cout << "out" << endl;
    }
    else
    {
        cout << "in" << endl;
    }
}

int main()
{
    // 点和圆的位置关系

    // 创建圆
    circle c1;
    c1.setr(10);
    point d;
    d.setx(10);
    d.sety(0);
    c1.setd(d);
    // 创建点
    point p1;
    p1.setx(10);
    p1.sety(10);
    relation(c1, p1);
    point p2;
    p2.setx(10);
    p2.sety(9);
    relation(c1, p2);
    point p3;
    p3.setx(10);
    p3.sety(11);
    relation(c1, p3);
    return 0;
}
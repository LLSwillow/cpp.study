#include <iostream>

#include <string>

#include <sstream>

#include <bits/stdc++.h> //万能头文件

using namespace std;

// 定义全局变量 不赋初值的话会自动初始化为0  局部变量不初始化的时候 自动初始化为一个随机值
// 如果全局变量和局部变量名称相同的话 会先用局部变量 就近原则

// 模板化 通用类型 template
template <class T>

bool add(T a, T b) // 不限制比较的类型  T会自动识别类型
// 可以通过 add<int>(10,20);  规定他为 某一种类型也是可以的 注意格式
{
    return a < b;
}

int main(int argv, char *argc[])
{
    // 自动转换机制 1.由小的字节范围 转到 大的字节范围2.类型不一致 会直接触发
    cout << 5.0 / 2 << endl; // 5.0是double类型 8个字节 2是整形 4个字节 所以2 ->2.0

    int a = 5.0; // 5.0 前省略了（int） 强制类型转换
    cout << a << endl;

    /*printf:1. 舍入规则 四舍六入五成双
    2.域宽：宽度补全 %5d 数字前多空格。当数字小于宽度时才补全，大于宽度时不变 %-5d 表示 右侧补全*/

    printf("%.3lf\n", 1.25863);
    printf("%7.2lf\n", 2.65489);
    printf("%05d\n", 5); // 0是自定义补全符号
    cout << argv << endl;

    // 斐波那契数列   数组实现 动态规划？？？
    int arr[100];
    arr[1] = 1;
    arr[2] = 1;
    for (int i = 3; i <= 30; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("%d", arr[30]);

    // new操作符

    char asd[1024];
    cin.getline(asd, 1024); // c++的录入函数 （名称，限制）  cin和scanf一样不会读入空格及其之后的字符
    cout << asd << endl;

    /*c语言 string.h 函数库 strlen计算字符串长度不包含\0
           strcpy(a,b)字符串拷贝 b复制到a
           strcmp(a,b) 字符串比较 ASCII码的比较 a>b 1 a=b 0 a<b -1
           strcat(a,b) 字符串拼接 有扩容功能   -> c++中 一个+号搞定*/

    // fgets 能录入 空格 回车 \0 ...

    // string s(6,"c");两种初始化赋值操作
    string s("hello "); // string 是字符数组
    s = "no1." + s + "world";
    cout << s << endl;
    cout << s.empty() << endl; // 可以直接用.后的函数
    cout << s.size() << endl;
    s.replace(2, 3, "1234", 2, 2);
    cout << s << endl;
    // 字符串替换 ：从下标为2的元素开始向后替换3个字符，从“”中的下标为2的元素开始替换2个字符。有时候后两个参数也可以不要
    s.erase(3, 1); // 删除 从下标为3的位置往后部分全部删除 增加一个参数表示向后删几位
    cout << s << endl;

    /*字符数组 与 string 的转换
    char arr[]="sheme";
    string brr=arr;
    cout<<brr<<endl;
    char* p=(char*)brr.c_str();//string不能直接转换为字符数组 只能转化为 const char*
    cout<<p<<endl;*/

    // 字符串中的东西转化为相应类型 头文件sstream
    string str = "hello 24 1.026 c";
    istringstream is(str);
    string s1;
    int x;
    double y;
    char z;

    is >> s1 >> x >> y >> z;

    cout << s1 << endl;
    cout << x << " " << y << " "
         << " " << z << endl;

    // 这些不同类型的东西重新转化为一个字符串
    ostringstream os;
    os << s1 << x << y << z;
    cout << os.str() << endl;

    // for each 语句：遍历
    int crr[] = {1, 2, 3, 4, 5};
    for (int &yuan : crr) // 定义相应类型的变量 存放需要遍历的东西
    // 加了引用符号 取小名 改变了原数组中的值 不加的时候 不会改变
    {
        yuan = 2;
    }

    // auto 自适应类型
    //&引用 共用一份空间 小名
    for (auto yuan : crr)
    {
        cout << yuan << endl;
    }

    // static 程序不倒我不倒  延长生命周期

    cout << add<int>(10, 20) << endl;
    cout << add('a', 'b') << endl;

    return 0;
}
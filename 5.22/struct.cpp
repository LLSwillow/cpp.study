#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    int age;
    string id;
};
int main()
{
    student s1={"zhangsan",19,"20221413"};
    // c++中关键字 struct可以省略    省了typedef
    cout << s1.name<<" "<<s1.age<<" "<<s1.id<<endl;
    return 0;
}
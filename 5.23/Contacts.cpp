#include <iostream>
#include <string>

#define max 1000

using namespace std;

struct contacts
{
    string name;
    string sex;
    int age;
    string tel;
    string address;
};
struct addressbooks
{
    struct contacts person[max];
    int sum;
};
void menu()
{
    cout << "########################" << endl;
    cout << "## 1.Add a contact    ##" << endl;
    cout << "## 2.display Contact  ##" << endl;
    cout << "## 3.Delete a contact ##" << endl;
    cout << "## 4.Find contacts    ##" << endl;
    cout << "## 5.Modify a contact ##" << endl;
    cout << "## 6.qing kong contact##" << endl;
    cout << "## 0.Quit Contacts    ##" << endl;
    cout << "########################" << endl;
}
void addperson(struct addressbooks *book)
{
    if (book->sum == max)
    {
        cout << "The address book is full" << endl;
        cout << "Whether to charge money to expand?" << endl;
        return; // 无返回值
    }
    else
    {
        cout << "name:  ";
        string name;
        cin >> name;
        book->person[book->sum].name = name;
        cout << "sex:  ";
        string sex;
        cin >> sex;
        book->person[book->sum].sex = sex;
        cout << "age:  ";
        int age;
        cin >> age;
        book->person[book->sum].age = age;
        string tel;
        cout << "tel:  ";
        cin >> tel;
        book->person[book->sum].tel = tel;
        string address;
        cout << "address:  ";
        cin >> address;
        book->person[book->sum].address = address;

        book->sum++; // 通讯录中确实实在的增加了一个人

        cout << "succeed" << endl;
        system("pause");
        system("cls");
    }
}
void display(addressbooks *book)
{
    if (book->sum == 0)
    {
        cout << "NULL" << endl;
    }
    else
    {
        for (int i = 0; i < book->sum; i++)
        {
            cout << "name:\t" << book->person[i].name << " ";
            cout << "sex: \t" << book->person[i].sex << " ";
            cout << "age: \t" << book->person[i].age << " ";
            cout << "tel: \t" << book->person[i].tel << " ";
            cout << "address:\t" << book->person[i].address << endl;
        }
    }
    system("pause");
    system("cls");
}
void Delete(addressbooks *book) // 按照姓名删除
{
    cout << "Please enter the name you want to delete" << endl;
    string name;

    // 查找有没有这个人

    int mark = 0;
    int flag = 1;
    while (flag)
    {
        cin >> name;
        for (int i = 0; i < book->sum; i++)
        {
            if (name == book->person[i].name)
            {
                flag = 0;
                mark = i;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "The contact does not exist" << endl;
            // cout << "Please re-enter" << endl;
            break;
        }
    }

    // 以上代码用到多次

    for (int j = mark; j < book->sum; j++)
    {
        book->person[j] = book->person[j + 1];
    }
    book->sum--;
    cout << "succeed" << endl;
    system("pause");
    system("cls");
}
void find(addressbooks *book)
{
    cout << "Please enter the name you want to find" << endl;
    string name;
    int mark = 0;
    int flag = 1;
    while (flag)
    {
        cin >> name;
        for (int i = 0; i < book->sum; i++)
        {
            if (name == book->person[i].name)
            {
                flag = 0;
                mark = i;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "The contact does not exist" << endl;
            // cout << "Please re-enter" << endl;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "name:\t" << book->person[mark].name << " ";
        cout << "sex: \t" << book->person[mark].sex << " ";
        cout << "age: \t" << book->person[mark].age << " ";
        cout << "tel: \t" << book->person[mark].tel << " ";
        cout << "address:\t" << book->person[mark].address << endl;
    }
}
void modify(addressbooks *book)
{
    cout << "Please enter the name you want to modify" << endl;
    string name;
    int mark = 0;
    int flag = 1;
    while (flag)
    {
        cin >> name;
        for (int i = 0; i < book->sum; i++)
        {
            if (name == book->person[i].name)
            {
                flag = 0;
                mark = i;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "The contact does not exist" << endl;
            // cout << "Please re-enter" << endl;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Please enter the information you want to modify" << endl;
        cout << " 1 name 2 age 3 sex 4 tel 5 address";
        int num;
        cin >> num;
        switch (num)
        {
        case 1:
        {
            string n_ame;
            cin >> n_ame;
            book->person[mark].name = n_ame;
            break;
        }
        case 2:
        {
            int a_ge;
            cin >> a_ge;
            book->person[mark].age = a_ge;
            break;
        }
        case 3:
        {
            string sex;
            cin >> sex;
            book->person[mark].sex = sex;
            break;
        }
        case 4:
        {
            string tel;
            cin >> tel;
            book->person[mark].tel = tel;
            break;
        }
        case 5:
        {
            string address;
            cin >> address;
            book->person[book->sum].address = address;
            break;
        }
        default:
        {
            cout << "error" << endl;
            break;
        }
        }
    }
    cout << "succeed" << endl;
    system("pause");
    system("cls");
}
void clean(addressbooks *book)
{
    book->sum = 0;
    cout << "succeed" << endl;
    system("pause");
    system("cls");
}
void test()
{
    // 创建通讯录并初始化
    addressbooks book1;
    book1.sum = 0;
    // menu();
    int input;
    do
    {
        menu();
        cin >> input;
        switch (input)
        {
        case 1:
        {
            addperson(&book1); // 注意是 传 地址
            break;
        }
        case 2:
            display(&book1);
            break;
        case 3:
            Delete(&book1);
            break;
        case 4:
            find(&book1);
            break;
        case 5:
            modify(&book1);
            break;
        case 6:
            clean(&book1);
            break;
        case 0:
        {
            cout << "Welcome to use it next time" << endl;
            break;
        }
        default:
        {
            cout << "Input error, please re-enter" << endl;
            break;
        }
        }
    } while (input);
}
int main()
{
    // menu();
    test();
    return 0;
}
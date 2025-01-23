#include <iostream>
#include <string>
using namespace std;

// 自定义的数据类型
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    struct Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    Student *p = &s1;
    p->age = 10;
    cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
    system("pause");
    return 0;
}
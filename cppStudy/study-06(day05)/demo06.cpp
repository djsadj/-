#include <iostream>
#include <string>
using namespace std;

// �Զ������������
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    struct Student s1;
    s1.name = "����";
    s1.age = 18;
    s1.score = 100;
    Student *p = &s1;
    p->age = 10;
    cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
    system("pause");
    return 0;
}
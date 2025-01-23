#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;
};

int main()
{
    teacher t;
    t.age = 30;
    t.name = "Ğ¡ÃÀ";
    t.id = 1001,
    t.stu.name = "Ğ¡¸Õ";
    t.stu.age = 18;
    t.stu.score = 99;
    system("pause");
    return 0;
}
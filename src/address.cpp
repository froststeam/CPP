#include<iostream>
#include<string>
using namespace std;

class Person {
public:

    Person(int age) {
        this->age = age;
    }

    //若返回类型不是引用链式编程将失败
    Person& PersonAddAge(Person &p) {
        cout << this->age <<endl;
        this->age += p.age;
        return *this;
    }

    int age; 
};

int main() {

    Person p1(10);
    Person p2(10);

    //链式编程
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2 的年龄为:" << p2.age <<endl;
    return 0;
}
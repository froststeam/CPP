#include<iostream>
#include<string>
using namespace std;

class Person {
public:

    Person(int age) {
        this->age = age;
    }

    //���������Ͳ���������ʽ��̽�ʧ��
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

    //��ʽ���
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2 ������Ϊ:" << p2.age <<endl;
    return 0;
}
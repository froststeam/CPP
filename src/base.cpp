#include<iostream>
using namespace std;

void variableExample() {

    //�����Ķ���
    int a = 10;
    cout << "a = " << a << endl;
}

#define day 7
void constExample() {

    cout << "һ�����ܹ��� " << day << " ��" << endl;
    // day = 8; // �����곣���������޸�

    //2��const���γ���
    const int week = 1;
    cout <<"���ǵ� " << week << " ��" << endl;
}

void sizeofExample(){
    int age = 7;
    cout << "short ������ռ�ڴ�ռ�Ϊ: " << sizeof(short) << endl;
    cout << "int ������ռ�ڴ�ռ�Ϊ: " << sizeof(int) << endl;
    cout << "age ������ռ�ڴ�ռ�Ϊ: " << sizeof(age) << endl;
    cout << "long ������ռ�ڴ�ռ�Ϊ: " << sizeof(long) << endl;
    cout << "long long ������ռ�ڴ�ռ�Ϊ: " << sizeof(long long) << endl;
}


int main() {

    variableExample();
    constExample();
    sizeofExample();

    return 0;
}
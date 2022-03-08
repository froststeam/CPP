#include<iostream>
using namespace std;

void variableExample() {

    //变量的定义
    int a = 10;
    cout << "a = " << a << endl;
}

#define day 7
void constExample() {

    cout << "一周里总共有 " << day << " 天" << endl;
    // day = 8; // 报错，宏常量不可以修改

    //2、const修饰常量
    const int week = 1;
    cout <<"这是第 " << week << " 周" << endl;
}

void sizeofExample(){
    int age = 7;
    cout << "short 类型所占内存空间为: " << sizeof(short) << endl;
    cout << "int 类型所占内存空间为: " << sizeof(int) << endl;
    cout << "age 类型所占内存空间为: " << sizeof(age) << endl;
    cout << "long 类型所占内存空间为: " << sizeof(long) << endl;
    cout << "long long 类型所占内存空间为: " << sizeof(long long) << endl;
}


int main() {

    variableExample();
    constExample();
    sizeofExample();

    return 0;
}
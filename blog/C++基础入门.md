# C++基础入门
## 初识
### 注释
  1. 单行注释: `` // 描述信息 ``
  2. 多行注释: `` /* 描述信息 */ ``

### 变量
**作用**: 给一段指定的内存空间命名，方便操作这段代码

**语法**: `` 数据类型 变量名 = 初始值; ``

**示例**:
```c++
#include<iostream>
using  namespace std;

int main(){

    //变量的定义
    int a = 10;
    cout << "a = " << a << endl;
    system("pause);
    return 0;
}
```

### 常量
**作用**: 记录程序中不可更改的数据
C++定义常量的两种方式
1. #define 宏常量: ``#define 常量名 常量值``, 通常定义在文件上方
2. const修饰的变量: ``const 数据类型 常量名 = 常量值``, 通常用于修饰变量

**示例**
```c++
//1、宏常量
#define day 7

int main() {

    cout << "一周里总共有 " << day << " 天" << endl;
    // day = 8; // 报错，宏常量不可以修改

    //2、const修饰常量
    const int week = 1;
    cout <<"这是第 " << week << " 周" << endl;

    return 0;
}
```

### 关键字
**作用**: 关键字是C++中预先保留的单词(标识符)，在**定义变量或常量**时，**禁止使用关键字命名**

C++ 关键字如下:

|asm|do|if|return|typedef|
|-|-|-|-|-|
|auto|double|inline|short|typeid|
|bool|dynamic_cast|int|signed|typename|
|break|else|long|sizeof|union|
|case|enum|mutable|static|unsigned|
|catch|enum|mutable|static|unsigned|
|char|export|new|struct|virtual|
|class|extern|operator|switch|void|
|const|false|private|template|volatile|
|const_cast|float|protected|this|wchar_t|

### 标识符命名规则
**作用**: C++规定给标识(变量、常量)按一定的规则命名
 * 标识符不能使关键字
 * 标识符只能由字母、数字、下划线组成
 * 第一个字符必须为字母或下划线
 * 标识符中字母区分大小写

## 数据类型
C++ 规定在创建一个变量或者常量时，必须要指出相应的数据类型，否则无法给变量分配内存
### 整型
**作用**: 整形变量表示的是整数类型的数据
C++ 中能够表示的整型类型有以下几种方式，区别在于所占内存不同:
|数据类型|占用空间|取值范围|
|-|-|-|
|short(短整型)| 2字节 |-2^15~2^15-1|
|int(整型)| 4字节 |-2^31~2^31-1|
|long(长整型)| win-4字节 linux-4字节 or 8字节 |-2^31~2^31-1|
|long long(长长整型)| 8字节 |-2^63~2^32-1|

### sizeof关键字
**作用**: 利用sizeof关键字可以统计数据类型所占内存大小
**语法**: ``sizeof(数据类型 / 变量)``
**示例**:
```c++
int main(){

    cout << "short 类型所占内存空间为: " << sizeof(short) << endl;
    cout << "int 类型所占内存空间为: " << sizeof(int) << endl;
    cout << "long 类型所占内存空间为: " << sizeof(long) << endl;
    cout << "long long 类型所占内存空间为: " << sizeof(long long) << endl;

    return 0;
}
```

### 实型(浮点型)
**作用**: 用于表示小数
浮点型变量分为两种:
1. 单精度float
2. 双精度double
这两者区别在于表示的数字范围不同

|数据类型|占用空间|有效数字范围|
|-|-|-|
|float|4字节|7位有效数字|
|double|8字节|15-16位有效数字|

**示例**:
```c++
int main(){

    float f1 = 3.14f;
    double d1 = 3.14;

    // 默认显示6位有效数字
    cout << f1 << endl;
    cout << d1 << endl;

    // 科学计数法
    float f2 = 3e-2;
    cout << f2 << endl;

    return 0;
}
```

### 字符型
**作用**: 字符型变量用于显示单个字符

**语法**: ``char ch = 'a';``

> 注意1: 在显示字符变量时，用单引号将字符括起来，不要用双引号

> 注意2: 单引号只能有一个字符，不可以是字符串

* C 和 C++ 中字符型变量只占用**1个字节**
* 字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元

示例:
```c++
int main() {

    // int('a') 为 97、int('A') 为 65
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;

    return 0;
}
```

### 转义字符
**作用**: 用于表示一些不能显示出来的ASCII字符

|转义字符|含义|ASCII码值|
|-|-|-|
|\n|换行(LF)|010|
|\t|水平制表(HT)|009|
|\\\\ |代表'\'字符|092|

**示例**:
```c++
int main() {

    cout << "\n" << endl;
    cout << "\\" << endl;
    cout << "Hello\t World!" << endl;
    cout << "Love\t World!" << endl;

    return 0;
}

```

### 字符串型
**作用**: 用于表示一串字符

**两种风格**
1. **C风格**: ``char 变量名[] = "字符串值"``
2. **C++风格**: ``String 变量名 = "字符串值"``
   
```c++
#include<string>

int main(){

    char str1[] = "Love World!"
    string str2 = "Hello World!"

    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}
```

### 布尔类型bool
**作用**: 布尔数据类型代表真或假的值

bool 类型只有两个值:
   * true
   * false

**bool类型占1个字节大小**

示例:
```c++
int main() {
    
    bool flag = true;
    cout << flag << endl;

    flag = false;
    cout << flag << endl;

    cout << "size of bool = " << sizeof(1) << endl;

    return 0;
}
```

### 数据的输入
**作用**: 用于从键盘获取数据

**关键字**: cin

**语法**: ``cin >> 变量``

示例:
```c++
int main() {

    //整型输入
    int a = 0; 
    cout << "请输入整型变量: " << endl;
    cin >> a;
    cout << a << endl;

    //浮点型输入
    double d = 0; 
    cout << "请输入浮点型变量: " << endl;
    cin >> d;
    cout << d << endl;

    //字符型输入
    char ch = 0; 
    cout << "请输入字符型变量: " << endl;
    cin >> ch;
    cout << ch << endl;

    //字符串输入
    string s = ""; 
    cout << "请输入字符串变量: " << endl;
    cin >> s;
    cout << s << endl;

    return 0;
}
```
## 运算符
**作用**: 用于执行代码的运算

|运算符|术语|运算符|术语|
|-|-|-|-|
|+|加|%|模|
|-|减|++|递增|
|*|乘|--|递减|
|/|除|！|非|
|&&|与|\| \||或|

## 程序结构
### 选择结构
```c++
int main(){

    // if else 语句
    int score = 600;
    if (score >= 550) {
        cout << "成功上岸！" << endl;
    } else if (score > 400) {
        cout << "稍有遗憾" << endl;
    } else {
        cout << "无法录取" << endl;
    }

    // 三元运算符
    int flower = 5;
    int love = (flower > 3 ? 3 : 2);
    cout << flower << " : " << love <<endl;

    (flower > love ? flower : love) = 100;
    cout << flower << " : " << love <<endl;

    // switch 语句
    switch(flower){

        case 1: love = 9; break;
        case 2: love = 8; break;
        case 3: love = 7; break;
        default: love = 0; break;
    }
    
    return 0;
}
```
### 循环结构
```c++
int main() {

    // while 循环结构
    int trees = 10;
    while(trees) {
        if (trees == 5) {
            continue;
        }
        cout << trees << endl;
        --trees;
    }

    // do...while 语句
    int football = 0;
    do {
        if (football == 1){
            goto FLAG;
        }
        cout << football << endl;
        football++；
    } while(football < 10)
    FLAG;

    // for 语句
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
        if (i == 5) {
            break;
        }
    }

    return 0;
}
```

## 数组
```c++
#include<string>

int main() { 

    int score[10];
    // 剩余值会用 0 填充
    int award[10] = {10, 9, 8, 7}
    // 会自动定义长度
    string students[] = {"Sand", "Jame"}

    for (int i = 0; i < 10; i++) {
        score[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        cout << award[i] << endl;
        cout << score[i] << endl;
    }

    cout << "score 数组元素首地址: " << (int)&score << endl;

    // 错误赋值，数组变量为常量不可赋值
    // award = 100 

    // 二维数组
    int arr1[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    int arr2[2][3] = {1, 2, 3, 4, 5, 6};
    int arr4[][3] = {1, 2, 3, 4, 5, 6};


    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            ++arr1[i][j];
            cout << arr1[i][j] << endl;
        }
    }



    return 0;
}

```

## 函数
```c++
//函数声明
int add(int num1, int num2);

int main() {

    int a = 0, b = 4;
    cout << add(a, b) <<endl;

    return 0;
}

// 函数定义
int add(int num1, int num2) {

    int sum = num1 + num2;

    return sum;
}
```
### 函数的分文件编写
1. 创建.h头文件
2. 创建.cpp源文件
3. 在头文件写函数声明
4. 在源文件写函数定义

示例:
```c++
//swap.h文件
#include<iostream>
using namespace std;

// 实现两个数字交换的函数声明
void swap(int a, int b);

```

```c++
//swap.cpp文件
#include "swap.h"

void swap(int a, int b) {

    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
```

## 指针
```c++
int main() {

    // &表示变量地址， *解引用为变量
    int a = 10;
    int * p;
    p = &a;
    cout << "a的地址为: " << &a << endl;
    cout << "指针p为: " << p << endl;

    *p = 1000;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;

    return 0;
}
```

### 指针所占内存空间
```c++
int main() {

    // 在32位操作系统下，指针占用4个字节
    // 在64位下占用8个字节
    int a = 10;    
    int *p = &a;

    cout << *p << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;

    return 0;
}
```

### 空指针和野指针
**空指针**: 指针变量指向内存中编号为0的空间

**用途**: 初始化指针变量

**注意**: 空指针指向的内存是不可以访问的

```c++
int main() {

    //指针变量p指向内存地址编号为0的空间
    int * p = NULL;

    //访问空指针报错
    //内存编号0~255为系统占用内存，不允许用户访问
    cout << *p << endl;

    return 0;
}
```

**野指针**: 指针变量指向非法的内存空间
```c++
int main() {

    //指针变量p指向内存地址编号
    //在程序中尽量去避免野指针
    int * p = (int *)0x1100;

    cout << *p << endl;

    return 0;
}
```
### const修饰指针
const修饰指针有三种情况:
   * const修饰指针 -- 常量指针
   * const修饰常量 -- 指针常量
   * const同时修饰指针和常量
```c++
int main() {

    int a = 10;
    int b = 10;
    
    //const修饰的是指针，指针指向可以改，指针指向的值不可以更改
    const int * p1 = &a;
    p1 = &b;
    //*p1 = 100; 错误

    //const修饰的是常量，指针指向不可以改，指针指向的值可以更改
    int * const p2 = &a;
    //p2 = &b; //错误
    *p2 = 100

    //const修饰指针和常量
    const int * const p3 = &a;
    //p3 = &b; //错误
    //*p3 = 100; 错误
}
```

### 指针和数组
**作用**: 利用指针访问数组中元素
```c++
int main() {

    int arr[] = {1, 2, 3, 4, 5, 6}
    int * p = arr; //指向数组的指针

    cout << "第一个元素： " << arr[0] << endl;
    cout << "指针访问第一个元素： " << *p << endl;

    for (int i = 0; i < 10; i++) {
        //利用指针遍历数组
        cout << *p << endl;
        ++p;
    }

    return 0;
}
```

### 指针和函数
**作用**: 利用指针作为函数参数，可以修改实参的值
```c++
//值传递, 形参改变不了实参
void swap1(int a, int b) {
    
    int temp = a;
    a = b;
    b = temp;
}

//地址传递，引用改变了实参
void swap2(int * p1, int * p2) {

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    
    int a = 10,
    int b = 100;

    swap1(a, b);
    cout << "a的值为: " << a <<endl;
    cout << "b的值为: " << b <<endl;

    swap2(&a, &b);
    cout << "a的值为: " << a <<endl;
    cout << "b的值为: " << b <<endl;

    return 0;
}
```

## 结构体
**结构体**是属于用户自定义的数据类型，允许用户存储不同的数据类型

**语法**: ``struct 结构体名 {结构体成员列表};``

通过结构体创建变量的方式有三种:
  *  struct 结构体名 变量名
  * struct 结构体名 变量名 = {成员1, 成员2...}
  * 定义结构体时顺便创建变量

```c++
//结构体定义
struct student {

    //成员列表
    string name;
    int age;
    float score;
}s3;

int main() {

    //struct 关键字可以省略
    struct Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 96.6;

    cout << "姓名: " << s1.name << " 年龄: " << s1.age << " 分数: " << s1.score << endl;

    struct Student s2 = {"李四", 32, 87.2};
    cout << "姓名: " << s2.name << " 年龄: " << s2.age << " 分数: " << s2.score << endl;

    s3.name = "王五";
    s3.age = 14;
    s3.score = 91.6;
    cout << "姓名: " << s3.name << " 年龄: " << s3.age << " 分数: " << s3.score << endl;
}
```

### 结构体数组
**作用**: 将自定义的结构体放入到数组中方便维护

**语法**: ``struct 结构体名 数组名[元素个数] = { {},{},...{}}``

```c++
//结构体定义
struct student {

    //成员列表
    string name;
    int age;
    int score;
};

int main() {

    //结构体数组
    struct student arr[3] = {

        {"张三", 18, 65},
        {"李四", 11, 61},
        {"王五", 18, 62},
    }

    arr[2].name = "赵六";
    arr[2].age = 25;
    arr[2].score = 99;

    for (int i = 0; i < 3; i++) {

        cout << arr[i].name << arr[i].age << arr.score << endl;
    }
}
```


### 结构体指针
**作用**: 通过指针访问结构体中的成员

**语法**: 利用操作符``->``可以通过结构体指针访问结构体属性

```c++
//结构体定义
struct student {

    //成员列表
    string name;
    int age;
    int score;
};

int main() {

    //结构体数组
    struct student stu = {"张三",18,100};

    struct studnet * p = &stu;

    cout << p -> name << p -> age << p -> score << endl;

    return 0;
}
```

### 结构体嵌套
**作用**: 结构体中的成员可以使另一个结构体

```c++
//结构体定义
struct student {

    //成员列表
    string name;
    int age;
    int score;
};

struct teacher {

    //成员列表
    int id;
    string name;
    int age;
    struct student stu;
};

int main() {

    //结构体数组
    struct student stu = {"张三",18,100};
    struct teacher tea = {"001", "张丽", 34, stu};

    struct studnet * p = &stu;
    struct teacher * q = &tea;

    cout << p -> stu -> name << p -> stu -> age << p -> stu -> score << endl;

    return 0;
}
```

### 结构体做函数参数
**作用**: 将结构体作为参数向函数中传递

传递方式有两种:
 * 值传递
 * 地址传递

```c++
//结构体定义
struct student {

    //成员列表
    string name;
    int age;
    int score;
};

void printStudent(student stu) {

    stu.age = 28;
    cout << "printStudent函数中打印: " << stu.name << stu.age << stu.score << endl;
}


//使用指针减小函数运行所需空间
//若函数内不应改写数据则用const修饰
//const student *stu
void printStudent_(student * stu) {

    stu -> age = 28;
    cout << "printStudent_函数中打印: " << stu -> name << stu -> age << stu -> score << endl;
}

int main() {

    //结构体数组
    struct student stu = {"张三",18,100};

    printStudent(stu);

    cout << "main函数中打印: " << stu.name << stu.age << stu.score << endl;

    printStudent_(&stu);

    cout << "main函数中打印: " << stu.name << stu.age << stu.score << endl;

    return 0;
}
```


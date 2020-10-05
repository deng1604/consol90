#pragma once
#include <iostream>
using namespace std;
const int MAX_SIZE = 100; // 栈的最大长度

template <class DataType>
class Stack
{
private:
    int size;      
    int top;        
    DataType* data; 
public:
    /* 异常内部类 */
    class Full {};
    class Empty {};

    Stack();
    Stack(int size);
    ~Stack();
    void push(DataType ch);
    DataType pop();
    DataType getTop();
    bool isEmpty();
    bool isFull();
    void setNull();
};

/**
 * 为了保证模板类可以在其他cpp文件中使用,
 * 需要在源文件的末尾显示地实例化想用的版本
 * (相当于为每个类型的模板定义了一个类型)
 */
typedef Stack<char> charStack;
typedef Stack<double> doubleStack;

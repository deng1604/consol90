#include <iostream>
#include "Stack.h"
using namespace std;

/* 无参构造函数 */
template <class DataType>
Stack<DataType>::Stack()
{
    size = MAX_SIZE;
    top = -1;
    data = new DataType[MAX_SIZE];
}

/* 有参构造函数 */
template <class DataType>
Stack<DataType>::Stack(int size)
{
    if (size < MAX_SIZE)
    {
        this->size = size;
        top = -1;
        data = new DataType[size];
    }
    else
    {
        cout << "您输入的值过大, 栈的容量最大为: " << MAX_SIZE << endl;
        this->size = MAX_SIZE;
        top = -1;
        data = new DataType[MAX_SIZE];
    }
}

/* 析构函数 */
template <class DataType>
Stack<DataType>::~Stack()
{
    delete[] data;
}

/* 入栈 */
template <class DataType>
void Stack<DataType>::push(DataType ch)
{
    if (isFull())
    {
        throw Stack<DataType>::Full();
    }
    else
    {
        top++;
        data[top] = ch;
    }
}

/* 出栈并返回栈顶元素 */
template <class DataType>
DataType Stack<DataType>::pop()
{
    if (isEmpty())
    {
        throw Stack<DataType>::Empty();
    }
    else
    {
        return data[top--];         // 先返回栈顶元素, 再top减1
    }
}

/* 获得栈项元素(不出栈) */
template <class DataType>
DataType Stack<DataType>::getTop()
{
    if (isEmpty())
    {
        throw Stack<DataType>::Empty();
    }
    else
    {
        return data[top];
    }
}

/* 判断栈是否为空 */
template <class DataType>
bool Stack<DataType>::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* 判断栈是否已满 */
template <class DataType>
bool Stack<DataType>::isFull()
{
    if (top + 1 == size)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* 将设置栈为空 */
template <class DataType>
void Stack<DataType>::setNull()
{
    top = -1;
}


/**
 * 在.cpp文件中显示地声明要使用的模板类实例
 */
template class Stack<char>;
template class Stack<double>;
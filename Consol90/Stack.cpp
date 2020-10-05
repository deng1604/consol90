#include <iostream>
#include "Stack.h"
using namespace std;

/* �޲ι��캯�� */
template <class DataType>
Stack<DataType>::Stack()
{
    size = MAX_SIZE;
    top = -1;
    data = new DataType[MAX_SIZE];
}

/* �вι��캯�� */
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
        cout << "�������ֵ����, ջ���������Ϊ: " << MAX_SIZE << endl;
        this->size = MAX_SIZE;
        top = -1;
        data = new DataType[MAX_SIZE];
    }
}

/* �������� */
template <class DataType>
Stack<DataType>::~Stack()
{
    delete[] data;
}

/* ��ջ */
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

/* ��ջ������ջ��Ԫ�� */
template <class DataType>
DataType Stack<DataType>::pop()
{
    if (isEmpty())
    {
        throw Stack<DataType>::Empty();
    }
    else
    {
        return data[top--];         // �ȷ���ջ��Ԫ��, ��top��1
    }
}

/* ���ջ��Ԫ��(����ջ) */
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

/* �ж�ջ�Ƿ�Ϊ�� */
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

/* �ж�ջ�Ƿ����� */
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

/* ������ջΪ�� */
template <class DataType>
void Stack<DataType>::setNull()
{
    top = -1;
}


/**
 * ��.cpp�ļ�����ʾ������Ҫʹ�õ�ģ����ʵ��
 */
template class Stack<char>;
template class Stack<double>;
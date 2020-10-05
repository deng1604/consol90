#pragma once
#include <iostream>
using namespace std;
const int MAX_SIZE = 100; // ջ����󳤶�

template <class DataType>
class Stack
{
private:
    int size;      
    int top;        
    DataType* data; 
public:
    /* �쳣�ڲ��� */
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
 * Ϊ�˱�֤ģ�������������cpp�ļ���ʹ��,
 * ��Ҫ��Դ�ļ���ĩβ��ʾ��ʵ�������õİ汾
 * (�൱��Ϊÿ�����͵�ģ�嶨����һ������)
 */
typedef Stack<char> charStack;
typedef Stack<double> doubleStack;

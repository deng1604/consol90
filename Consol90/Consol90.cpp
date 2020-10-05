#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    charStack myStack(2);
    myStack.push('a');
    myStack.push('b');

    cout << myStack.isFull() << endl; // 1
    cout << myStack.getTop() << endl; // b
    cout << myStack.pop() << endl;    // b
    cout << myStack.pop() << endl;    // a
    cout << myStack.isEmpty() << endl;// 1

    /* 异常处理 */
    try
    {
        myStack.push('1');
        myStack.push('2');
        myStack.push('3');
    }
    catch (charStack::Full)
    {
        cout << "Stack Full!!!" << endl;
    }

    try
    {
        cout << myStack.pop() << endl;
        cout << myStack.pop() << endl;
        cout << myStack.pop() << endl;
    }
    catch (charStack::Empty)
    {
        cout << "Stack Empty!!!" << endl;
    }

    /* double类型的栈 */
    doubleStack myStack_2(2);
    myStack_2.push(333);
    myStack_2.push(666);

    cout << myStack_2.isFull() << endl; // 1
    cout << myStack_2.getTop() << endl; // 666
    cout << myStack_2.pop() << endl;    // 666
    cout << myStack_2.pop() << endl;    // 333
    cout << myStack_2.isEmpty() << endl;// 1

    /* 异常处理 */
    try
    {
        myStack_2.push(123);
        myStack_2.push(456);
        myStack_2.push(789);
    }
    catch (doubleStack::Full)
    {
        cout << "Stack Full!!!" << endl;
    }

    try
    {
        cout << myStack_2.pop() << endl;
        cout << myStack_2.pop() << endl;
        cout << myStack_2.pop() << endl;
    }
    catch (doubleStack::Empty)
    {
        cout << "Stack Empty!!!" << endl;
    }

    return 0;
}

/**
 * @Author: Avinash Kadimisetty <avinash>
 * @Date:   2019-01-19T16:35:03-06:00
 * @Email:  kavinash366@gmail.com
 * @Project: Elements of Programming Interviews
 * @Filename: stack.cpp
 * @Last modified by:   avinash
 * @Last modified time: 2019-01-19T16:42:04-06:00
 * @License: MIT License
 */

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

void print_stack(stack<int> s) {
    while (!s.empty()) {
        cout<<"\t"<<s.top();
        s.pop();
    }
    cout<<endl;
}

int main() {

    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);
    print_stack(s);
    cout<<"The top of the stack is "<<s.top()<<endl;
    cout<<"The emtpy state of the stack is "<<s.empty()<<endl<<"The size of the stack is "<<s.size()<<endl;
    return 0;
}

/**
 * @Author: Avinash Kadimisetty <avinash>
 * @Date:   2019-01-19T16:18:29-06:00
 * @Email:  kavinash366@gmail.com
 * @Project: Elements of Programming Interviews
 * @Filename: lists.cpp
 * @Last modified by:   avinash
 * @Last modified time: 2019-01-19T16:34:17-06:00
 * @License: MIT License
 */
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void print_list(list<int> l) {
    for(auto it = l.begin(); it != l.end(); ++it) {
        cout<<*it << " ";
    }
    cout <<endl;
}

int main() {

    list<int> l1, l2;
    for(int i=0; i<10;i++) {
        l1.push_back(i*2);
        l2.push_back(i*3);
    }

    print_list(l1);
    print_list(l2);

    cout<<"The fron of l1 is "<<l1.front()<<endl;
    cout<<"After popping front of l1 "<<endl;
    l1.pop_front();
    print_list(l1);

    l2.reverse();
    print_list(l2);

    l2.sort();
    print_list(l2);

    l1.merge(l2);
    print_list(l1);

    l1.swap(l2);
    print_list(l1);
    print_list(l2);

    return 0;
}

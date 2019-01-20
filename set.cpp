/**
 * @Author: Avinash Kadimisetty <avinash>
 * @Date:   2019-01-19T16:42:37-06:00
 * @Email:  kavinash366@gmail.com
 * @Project: Elements of Programming Interviews
 * @Filename: set.cpp
 * @Last modified by:   avinash
 * @Last modified time: 2019-01-19T16:51:55-06:00
 * @License: MIT License
 */

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(5);
    for(auto it = s.begin(); it != s.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    return 0;
}

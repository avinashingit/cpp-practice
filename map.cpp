/**
 * @Author: Avinash Kadimisetty <avinash>
 * @Date:   2019-01-19T17:07:16-06:00
 * @Email:  kavinash366@gmail.com
 * @Project: Elements of Programming Interviews
 * @Filename: map.cpp
 * @Last modified by:   avinash
 * @Last modified time: 2019-01-19T17:12:32-06:00
 * @License: MIT License
 */

#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {
    map<int, int> m;
    m.insert(pair<int, int>(1, 40));
    m.insert(pair<int, int>(2, 30));
    m.insert(pair<int, int>(3, 60));
    m.insert(pair<int, int>(4, 20));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(6, 50));
    m.insert(pair<int, int>(7, 10));

    map<int, int>::iterator itr;
    cout << "\nThe map m is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = m.begin(); itr != m.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    if(m.find(1) != m.end()) {
        cout<<"Key exists"<<endl;
        cout<<m[1]<<endl;
    }
    return 0;
}

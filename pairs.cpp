/**
 * @Author: Avinash Kadimisetty <avinash>
 * @Date:   2019-01-17T23:41:00-06:00
 * @Email:  kavinash366@gmail.com
 * @Project: Elements of Programming Interviews
 * @Filename: pairs.cpp
 * @Last modified by:   avinash
 * @Last modified time: 2019-01-17T23:50:51-06:00
 * @License: MIT License
 */

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> v;
    for(int i=0;i<10;i++) {
        v.push_back(make_pair(i,i));
    }
    return 0;
}

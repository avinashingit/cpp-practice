/**
 * @Author: Avinash Kadimisetty <avinash>
 * @Date:   2019-01-19T16:55:04-06:00
 * @Email:  kavinash366@gmail.com
 * @Project: Elements of Programming Interviews
 * @Filename: unique_triangles.cpp
 * @Last modified by:   avinash
 * @Last modified time: 2019-01-19T17:00:08-06:00
 * @License: MIT License
 */

#include <iostream>
#include <set>
#include <algorithm>
#include <utility>

using namespace std;

struct triangle {
    int a, b, c;
};

int sort(int &a, int &b, int &c) {
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
}

int main() {
    struct triangle arr[] = {{3, 2, 2}, {3, 4, 5}, {1, 2, 2},
                             {2, 2, 3}, {5, 4, 3}, {6, 4, 5}};
   set<pair<int, pair<int, int>>> s;
   for(int i=0;i<6;i++) {
       sort(arr[i].a, arr[i].b, arr[i].c);
       s.insert({arr[i].a, {arr[i].b, arr[i].c}});
   }
   cout<<s.size()<<endl;
    return 0;
}

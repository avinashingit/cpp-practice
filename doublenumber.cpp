/**
 * @Author: Avinash Kadimisetty <avinash>
 * @Date:   2019-01-17T20:18:09-06:00
 * @Email:  kavinash366@gmail.com
 * @Project: Elements of Programming Interviews
 * @Filename: doublenumber.cpp
 * @Last modified by:   avinash
 * @Last modified time: 2019-01-17T20:20:13-06:00
 * @License: MIT License
 */



#include <iostream>
using namespace std;

int doubleit(int x) {
    return 2*x;
}

int main() {
    int x;
    cin>>x;
    cout<<doubleit(x)<<endl;
    return 0;
}

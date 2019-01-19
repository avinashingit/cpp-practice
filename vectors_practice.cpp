/**
 * @Author: Avinash Kadimisetty <avinash>
 * @Date:   2019-01-19T16:02:32-06:00
 * @Email:  kavinash366@gmail.com
 * @Project: Elements of Programming Interviews
 * @Filename: vectors_practice.cpp
 * @Last modified by:   avinash
 * @Last modified time: 2019-01-19T16:16:10-06:00
 * @License: MIT License
 */



#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_vector(vector<vector<int>> v) {
    for(int i=0;i<v.size();i++) {
        for(int j=0;j<v[i].size();j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}

bool sortcol(vector<int>&v1, vector<int>&v2) {
    return v1[1] < v2[1];
}

int main() {
    vector<int> v;
    for(int i=10; i >= 0; i--) {
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector< vector<int> > vect{{1, 2, 3},
                              {6, 9, 4},
                              {9, 6, 7}};

    print_vector(vect);
    // Sort each row
    // for(int i=0;i<vect.size();i++) {
    //     sort(vect[i].begin(), vect[i].end(), 0);
    //
    // }
    sort(vect.rbegin(), vect.rend(), sortcol);
    print_vector(vect);

    return 0;


}

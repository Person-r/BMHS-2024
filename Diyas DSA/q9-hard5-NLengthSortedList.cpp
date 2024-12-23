// You are given one larger list of numbers. you must return a sorted list of the Nth largest numbers

// EXAMPLE 1:

// N = 3 
// l = [1,2,3,4,5]

// ANSWER:
// [3,4,5]

// EXAMPLE 2:
// N = 1
// l = [100,2,5,6]

// ANSWER:
// [100]

// Restrictions

// 1 < N < 10
// 1 < l < 100
// 1 < sizeof(l) < 20
// The list will contain no duplicates

// >> CHALLENGE <<
// Complete this problem without using any pre made sorting algorithms 
// ex: .sorted, natsort

// Suggested Approaches:
// Stack
using namespace std;
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>

vector<int> nthlargestnumbers(int N,int list[]) {
    return vector<int>{1,2,3,4};
    
    
}













































































vector<int> myanswer(int n, int list[]) {
    vector<int> newlist = {};
    vector<int> list2 = {};
    // int temp = sizeof(list)/sizeof(list[0]);
    // copy(list,list+temp,list2);
    for (int i = 0; i < n; i++) {
        newlist.insert(newlist.begin(),0);
    }

    int max = sizeof(list)/sizeof(list[0]);
    
    for (int i = 0; i < max; i++) {
        list2.push_back(list[i]);
    }

    int i = 0;
    int nlp = 0;
    while (i != max) {
        if (list[0+i] > newlist.at(nlp)) {
            list2.push_back(newlist.at(nlp));
            newlist.at(nlp) = list[i];
            max++;
            i++;
            nlp = 0;
            continue;
        }
        else if (list[i] <= newlist.at(nlp)) {
            nlp++;
            if (nlp == n) {
                nlp = 0; 
                i++;
            }
        }
    }


    return newlist;
}








void check() {
    int x[][7][20] = {
        {
            {10},
            {5,1,2,6,3,7,8,9,12,10,15,21,16,20,17}
        },
        {
            {1},
            {1}
        },
        {
            {3},
            {1,2,3,4,5}
        },
        {
            {2},
            {100,2,5,6}
        },
        {
            {6},
            {30,4,29,32,37,19,31,21,29}
        },
        {
            {7},
            {33,27,9,2,6,26,38,49,13,4,17,13}
        },
        {
            {3},
            {20,9,3,18,34,14}
        }
    };

    int z = 0;
    int* N = 0;
    int* list;
    int y = sizeof(x)/sizeof(x[0]);
    for (int i = 0; i < y; i++) {
        z+=1;
        N = &x[i][0][0];
        list = &x[i][1][0]; // oh yes this works because lists are linked lists. Not mutable though
        if (myanswer(*N,list) != nthlargestnumbers(*N,list)) {
            cout << "Failed Testcase" << i << endl;
        }
    }

    cout << "You passed!" << endl;
}




int main() {
    check();
}
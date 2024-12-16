// Imagine you are the CEO of apple. They're telling you that you're running in the red what do you do??!?!?!?
// well instead of making 5$ less than the 5k you make an hour you're going to LAY OFF SOME PROGRAMMERS!!!!

// You are given two lists

// The list pay is a list of how much each programmer is paid
// The list budget is how much you can afford to pay each programmer without losing your ability to buy your third yacht this year

// The list budget is split into segments because uhh... budget reasons okay
// You must return how many of the programmers you can afford to keep.
// You must retain the ones with the greatest value because if they're paid more than surely they're useful for something

// EXAMPLE 1:

// Pay [5,10,3,4]
// Budget [3,6,2]

// Answer = 2 

// EXAMPLE 2:

// Pay [20,5,2,6,4,3]
// Budget [9,12,15,1]

// Answer = 5



// > CHALLENGE <
// Achieve O(N Log N + N + M) Time complexity 
// Where N is the length of the pay list and M is the length of the budget list

#include <algorithm>
#include <string>
#include <iostream>



int corporateGreed(int Pay[], int Budget[]) {
    return 0;
}





































































int mysolution(int pay[], int budget[]) {
    int b = 0;

    for (int i = 0; i < sizeof(budget); i++) {
        b += budget[i];
    }

    std::sort(pay, sizeof(pay)/sizeof(pay[0]) + pay);
    int a = 0;

    for (int i = 0; i < sizeof(pay); i++) {
        b += -pay[i];
        if (b > 0) {
            a += 1;
        }
        else {
            break;
        }
    }

    return a;
}


void check() {
    // int testcases[[[int],[int]]] {
    //     {{5,6,9,2,4},{5,15,25}},
    //     {{5,10,3,4},{3,6,2}},
    //     {}
    // }
}




void main() {
    std::cout << check << std::endl;
}
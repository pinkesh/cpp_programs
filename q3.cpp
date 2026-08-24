#include <iostream>
using namespace std;

struct Stack {
    int*  data;   // heap-allocated array
    int   top;    // index of next free slot
    int   cap;    // current capacity new line
};
//comment 1
void  init223   (Stack& s, int capacity){
   cout << "hi";
}

void  push   (Stack& s, int val){

}

bool  pop    (Stack& s, int& out){

}

int   peek   (const Stack& s){

}

int  size   (const Stack& s){
    return s.top;
}

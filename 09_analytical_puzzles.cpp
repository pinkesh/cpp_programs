// 09_analytical_puzzles.cpp
// Five puzzles. Predict the output BEFORE running each section.
// Try to explain WHY before looking at the comments.

#include <iostream>
using namespace std;

// ─── Puzzle 1: p changes target ────────────────────────────────────────────
void puzzle1() {
    int a = 1, b = 2;
    int* p = &a;
    *p = 10;   // write to a through p
    p = &b;    // now p points to b
    *p = 20;   // write to b through p
    cout << "[Puzzle 1] a=" << a << " b=" << b << "\n";
    
}

// ─── Puzzle 2: two pointers, same target ───────────────────────────────────
void puzzle2() {
    int x = 5;
    int* p = &x;
    int* q = &x;   // p and q BOTH point to x
    *p = 9;
    cout << "[Puzzle 2] *q=" << *q << "\n";
    
}

// ─── Puzzle 3: pointer arithmetic ──────────────────────────────────────────
void puzzle3() {
    int arr[] = {1, 2, 3};
    int* p = arr + 1;   // points to arr[1]
    cout << "[Puzzle 3] " << *(p-1) << " " << *p << " " << *(p+1) << "\n";
    
}

// ─── Puzzle 4: pointer to pointer ──────────────────────────────────────────
void puzzle4() {
    int x = 99;
    int* p  = &x;
    int** pp = &p;   // pp -> p -> x
    **pp = 200;      // two dereferences to reach x
    cout << "[Puzzle 4] x=" << x << "\n";
    
}

// ─── Puzzle 5: const correctness ───────────────────────────────────────────
void puzzle5() {
    int x = 10, y = 20;
    const int* p = &x;   // pointer to const value
    // *p = 30;          // ← compile ERROR: cannot modify through const int*
    p = &y;              // BUT we CAN redirect the pointer itself
    cout << "[Puzzle 5] *p=" << *p << "\n";
    
}

int main() {
    puzzle1();
    puzzle2();
    puzzle3();
    puzzle4();
    puzzle5();
    return 0;
}

#ifndef STATE_H
#define STATE_H
#include <iostream>
#include <vector>


using namespace std;
int const DIM = 3;

struct State {
    State* parent;
    int mat[DIM][DIM][DIM]; // 3x3x3 array
    int x; // Depth
    int y; // Row
    int z; // Cols
    int cost; // Manhattan Distance Cost
    int level;
    char move;
};

#endif
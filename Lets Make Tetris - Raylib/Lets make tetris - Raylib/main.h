#pragma once
#include "raylib.h"

struct Piece {
	int x;
	int y;
	int z;
	int pieceSize;
	double gravity;
	double FFtime;
	int lowestposition;
	double lockdowntimer;
	int moves;
};


struct Board {
	int pieceSize;
	int rBound;
	int lBound;
	int uBound;
	int bBound; 
};
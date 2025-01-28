#pragma once
#include "raylib.h"

struct Piece {
	int x;
	int y;
	//Rectangle info; // things: piece.info.x, piece.info.y, piece.info.width, piece.info.height
	int z;
	int pieceSize;
	double gravity;
	double FFtime;
	int lowestposition;
	double lockdowntimer;
	int tetromino;
	int moves;
	Rectangle block1;
	Rectangle block2;
	Rectangle block3;
	Rectangle block4;
};


struct Board {
	int rBound;
	int lBound;
	int uBound;
	int bBound; 
};
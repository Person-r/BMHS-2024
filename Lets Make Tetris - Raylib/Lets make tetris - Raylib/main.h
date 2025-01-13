#pragma once
struct Piece{
	int x; // left and right 
	int y; // up and down
	int z; //rotation axis
	int piecesize;
	int tetromino; // I = 1
};

struct Board {
	int pieceSize;
	int rBound = pieceSize * 12;
	int lBound = pieceSize;
	int uBound = pieceSize;
	int bBound = pieceSize * 22;
};
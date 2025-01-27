#pragma once
struct Piece{
	int x; // left and right 
	int y; // up and down
	int z; //rotation axis
	// I just had a brain blast.. instead of like using xyz to mean the pixel
	// positions its to mean its position on the grid instead
	int piecesize;
	int tetromino; // I = 1
	double gravity; // amount of seconds it takes for the piece to move
	double FFtime; // time it takes to FF
	int lowestPosition;
	double lockdowntimer; // amount of time before the piece locks down
	int moves; // amount of moves before the lockdown timer is forced to activate
};

struct Board {
	int pieceSize;
	int rBound; /*= pieceSize * 12*/;
	int lBound /*= pieceSize*/;
	int uBound /*= pieceSize*/;
	int bBound; /*= pieceSize * 22*/;
};
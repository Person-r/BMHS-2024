#include <raylib.h>
#include "Gameplay.h"
#include <string>
#include <vector>
#include "main.h"
typedef enum Gamescreen {TITLE,CHOOSE,GAMEPLAY,GAMEOVER} Gamescreen;


int main(void) {

	const int screenWidth = GetScreenWidth();
	const int screenHeight = GetScreenHeight();
	const int maxarrow = 1;
	int arrowval = 0;
	int positions[] = { 60,100 };
	int vpr = 2;
	int vpmax = 2;
	int vpl = 0;
	int pieceSize = 50;
	std::vector<int> vqueue = {};
	Board board;
	Piece piece;
	piece.piecesize = pieceSize;
	piece.tetromino = 1;
	piece.x = board.rBound / 2;
	piece.y = board.uBound;
	
	Gamescreen currentscreen = TITLE;

	InitWindow(screenWidth, screenHeight, "Hello world");
	
	ToggleFullscreen();

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		switch (currentscreen) {
			case (TITLE): {
				if (IsKeyPressed(KEY_ENTER)) {
					currentscreen = CHOOSE;
				}break;
			}
			case (CHOOSE): {
				if (IsKeyPressed(KEY_UP)) {
					if (arrowval != 0) {
						arrowval += -1;
					}
				}
				if (IsKeyPressed(KEY_DOWN)) {
					if (arrowval != maxarrow) {
						arrowval += 1;
					}
				}
				if (IsKeyPressed(KEY_ENTER)) {
					if (arrowval == 1) {
						currentscreen = GAMEPLAY;
					}
				}
			}
			case (GAMEPLAY): {
				if (IsKeyPressed(KEY_LEFT)) {
					//Gameplayfunc(vqueue, &vpl, &vpr, &vpmax);	
				}
			}
		}

		BeginDrawing();
			ClearBackground(BLACK);
			switch (currentscreen) {
				case(TITLE): {
					DrawText("TETRIS", 20, 20, 32, WHITE);
					DrawText("Hit Enter to Start", 20, 60, 32, WHITE); break;
				}
				case(CHOOSE): {
					DrawText("CHOOSE YOUR MODE", 20, 20, 32, WHITE);
					DrawText("Marathon", 20, 60, 32, WHITE);
					DrawText("40L", 20, 100, 32, WHITE);
					DrawText("<", 300, positions[arrowval], 32, WHITE); break;
					DrawText(TextFormat("%02i", arrowval), 500, 500, 32, WHITE);
				}
				case(GAMEPLAY): {
					/*DrawText("hello world", 500, 500, 32, WHITE);
					DrawText(TextFormat("Queue: %i", vqueue), 200, 200, 32, WHITE);
				*/
					Makegrid(pieceSize);
					Makepiece(piece);
				}
			}
			DrawText("Made By The 2024-2025 BMHS Coding Club", GetScreenWidth() - 700, GetScreenHeight() - 50, 32, WHITE);
			
		EndDrawing();
	}

	CloseWindow();

	return 0;
}
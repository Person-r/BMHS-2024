//#include <raylib.h>
//#include "Gameplay.h"
//#include <string>
//#include <vector>
//#include <iostream>
//#include "oldmain.h"
//#include "timer.h"
//typedef enum Gamescreen {TITLE,CHOOSE,GAMEPLAY,GAMEOVER} Gamescreen;
//enum Lastheld {LEFT,RIGHT,DOWN,NONE};
//
//// ngl im deadass about to enter refactor hell with this one 
//int main(void) {
//	const int screenWidth = GetScreenWidth();
//	const int screenHeight = GetScreenHeight();
//	const int maxarrow = 1;
//	int arrowval = 0;
//	int positions[] = { 60,100 };
//	int pieceSize = 50;
//	std::vector<int> vqueue = {};
//	Board board;
//	Piece piece;
//	board.pieceSize = 50;
//	piece.piecesize = 50;
//	board.rBound = board.pieceSize * 12;
//	board.lBound = board.pieceSize;
//	board.uBound = board.pieceSize;
//	board.bBound = board.pieceSize * 22;
//	piece.tetromino = 1;
//	piece.x = board.rBound / 2;
//	piece.y = board.uBound;
//	piece.z = 1;
//	piece.gravity = 1;
//	int previousgravity = piece.gravity;
//	piece.FFtime = 0.5;
//	piece.lowestPosition = 0;
//	piece.lockdowntimer = 0.5;
//	piece.moves = 15;
//	Timer timer;
//	Timer lockdown;
//	StartTimer(&lockdown, 99999999999);
//	StartTimer(&timer, 99999999999);
//	//yeah ngl if you leave this game open for multiple years then you deserve for it to crash
//	
//	int beforeTime = 1; // time before last update
//	double currenttime = 0;
//
//	Timer fastForwardTimer; // timer before your piece starts to move faster
//	bool fastForward; // if your piece is fastforwarding or not 
//
//	Gamescreen currentscreen = TITLE;
//	Lastheld lastHeldKey = NONE;
//
//	InitWindow(screenWidth, screenHeight, "Hello world");
//	
//	ToggleFullscreen();
//
//	SetTargetFPS(60);
//
//	while (!WindowShouldClose()) {
//		switch (currentscreen) {
//			case (TITLE): {
//				if (IsKeyPressed(KEY_ENTER)) {
//					currentscreen = CHOOSE;
//				}break;
//			}
//			case (CHOOSE): {
//				if (IsKeyPressed(KEY_UP)) {
//					if (arrowval != 0) {
//						arrowval += -1;
//					}
//				}
//				if (IsKeyPressed(KEY_DOWN)) {
//					if (arrowval != maxarrow) {
//						arrowval += 1;
//					}
//				}
//				if (IsKeyPressed(KEY_ENTER)) {
//					if (arrowval == 1) {
//						currentscreen = GAMEPLAY;
//					}
//					if (arrowval == 0) {
//						OpenURL("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS_-4-SL59qwne5iTdsq7mx1Oz97BC2-kq0lFhby2ik8tjQQ5Ix6YPCJLRXgL8N-7UjStw&usqp=CAU");
//						CloseWindow();
//						// # trolled
//					}
//				}
//			}
//			case (GAMEPLAY): {
//				 piece.gravity = previousgravity;
//				if (IsKeyDown(KEY_LEFT)) {
//					if (lastHeldKey == LEFT && TimerDone(fastForwardTimer)) {
//						piece.x += -50;
//						lastHeldKey = LEFT;
//					}
//					else {
//						if (IsKeyPressed(KEY_LEFT)) {
//							// okay this is a good idea trust
//							// this should only count the thing when you press left as one input
//							// it works im never touching this again
//							// nevermind
//							piece.x += -50;
//							lastHeldKey = LEFT;
//							StartTimer(&fastForwardTimer,piece.FFtime);
//						}
//					}
//					if (!TimerDone(lockdown) && piece.moves > 0) { // if timer is NOT done 
//						piece.moves += -1;
//						StartTimer(&lockdown, piece.lockdowntimer);
//					}
//					 // 
//				}
//				// I know this is ugly im gonna move this to a function later
//				else if (IsKeyDown(KEY_RIGHT)) {
//					if (lastHeldKey == RIGHT && TimerDone(fastForwardTimer)) {
//						piece.x += 50;
//						lastHeldKey = RIGHT;
//					}
//					else {
//						if (IsKeyPressed(KEY_RIGHT)) {
//							// okay this is a good idea trust
//							// this should only count the thing when you press left as one input
//							// it works im never touching this again
//							piece.x += 50;
//							lastHeldKey = RIGHT;
//							StartTimer(&fastForwardTimer,piece.FFtime);
//						}
//					}
//				}
//				else if (IsKeyDown(KEY_DOWN)) {
//					previousgravity = piece.gravity;
//					piece.gravity = 0.2;
//				}
//				else if (IsKeyPressed(KEY_SPACE)) {
//
//				}
//				else {
//					lastHeldKey = NONE;
//				}
//				
//			}
//		}
//
//		BeginDrawing();
//			ClearBackground(BLACK);
//			switch (currentscreen) {
//				case(TITLE): {
//					DrawText("TETRIS", 20, 20, 32, WHITE);
//					DrawText("Hit Enter to Start", 20, 60, 32, WHITE); break;
//				}
//				case(CHOOSE): {
//					DrawText("CHOOSE YOUR MODE", 20, 20, 32, WHITE);
//					DrawText("Marathon", 20, 60, 32, WHITE);
//					DrawText("40L", 20, 100, 32, WHITE);
//					DrawText("<", 300, positions[arrowval], 32, WHITE); break;
//					DrawText(TextFormat("%02i", arrowval), 500, 500, 32, WHITE);
//				}
//				case(GAMEPLAY): {
//					currenttime = GetElapsed(timer);
//					/*DrawText("hello world", 500, 500, 32, WHITE);
//					DrawText(TextFormat("Queue: %i", vqueue), 200, 200, 32, WHITE);
//				*/
//					//piece.piecesize = 50;
//					// apparently reinterpret_cast just treats one datatype like its another one
//					// pointer to immutable character = treat reference to piece.piecesize as a pointer an immutable character
//					//char* datax = reinterpret_cast<char*>(&piece.piecesize); //convert to a char pointer
//					// apparently reinterpret_cast is dangerous because it can just change the value if it wants
//					/*std::cout << datax << std::endl;*/
//					Makegrid(board.pieceSize);
//					/*std::cout << currenttime << std::endl;*/
//					//std::cout << IsKeyDown(LEFT) << std::endl;
//					//std::cout << lastHeldKey << std::endl;
//					//std::cout << int(GetElapsed(timer)) << std::endl;
//					if (currenttime > beforeTime + piece.gravity) {
//						piece.y += 50;
//						beforeTime = int(currenttime);
//					}
//
//					getPieceLowestPosition(piece,&piece.lowestPosition);
//					
//					if (piece.lowestPosition == board.bBound - piece.piecesize) {
//						piece.y += -50;
//						StartTimer(&lockdown, piece.lockdowntimer);
//					}
//					if (piece.x == board.rBound - piece.piecesize) {
//						piece.x += -50;
//					}
//					if (piece.x == board.lBound - piece.piecesize) {
//						piece.x += 50;
//					}
//					
//					if (lastHeldKey == NONE && TimerDone(lockdown)) {
//						DrawText("Piece Locked Down", 900, 900, 32, WHITE);
//						std::cout << piece.moves << std::endl;
//					}
//					else if (!TimerDone(lockdown)) {
//						DrawText("Piece NOT Locked Down", 900, 900, 32, WHITE);
//					}
//					// I feel like I shouldnt work on locking down pieces right now
//
//					Makepiece(piece);
//
//
//					/*if (currenttime > beforeTime + piece.gravity) {
//						piece.y += 50;
//						beforeTime = int(currenttime);
//					}*/
//
//
//
//					
//					//DrawText(datax, 900, 900, 16, WHITE);
//
//				}
//			}
//			DrawText("Made By The 2024-2025 BMHS Coding Club", GetScreenWidth() - 700, GetScreenHeight() - 50, 32, WHITE);
//			
//		EndDrawing();
//	}
//
//	CloseWindow();
//
//	return 0;
//}
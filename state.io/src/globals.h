#ifndef __GLOBALS_H__
#define __GLOBALS_H__


typedef struct City {
	int x1;
	int x2;
	int y1;
	int y2;
	int theta;
	int flag;
	int soldiers_num;
} City;

typedef struct Coordination {
	double x;
	double y;
} Coordination;


const int SCREEN_WIDTH = 600 , SCREEN_HEIGHT = 600;
const int FPS = 60;
const int CENTER_R = 15 , SOLDIER_R = 3;
const int COLOR_SOLDIERS_MAX_NUM = 60;
const int ORDINARY_SOLDIERS_MAX_NUM = 10;

SDL_Color BLACK = { 0 , 0 , 0 , 255 };
SDL_Color WHITE = { 255 , 255 , 255 , 255 };

int mei , mej , enemyi , enemyj;
int mouseOnMe = 0 , isSendingSoldiers = 0 , isHoverStartGame = 0 , isHoverContinue = 0 , isTyping = 0;
int n;
char solNumStr[10] = {0} , username[30] = {};

City cities[4][6];

Coordination begin , dest;
Coordination mouse , soldier[100];
Coordination tmp = {0};



#endif
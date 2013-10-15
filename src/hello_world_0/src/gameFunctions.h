/*
 * gameFunctions.h
 *
 *  Created on: Sep 28, 2013
 *      Author: superman
 */

#ifndef GAMEFUNCTIONS_H_
#define GAMEFUNCTIONS_H_


#define R0W_SEP_HEIGHT 5

void drawSprite(unsigned int * framePointer, int x, int y, int width, int height, unsigned int color);
int getLowestAlien(int col);
int aliveRandomCol();
int isEven(int n);
int* takeRoll(int* arr);

void removeRedraw(unsigned int * framePointer, int positionChange);
void drawAlienBlock(unsigned int * framePointer, int positionChange);
void drawAlien(int x, int y, int alienType, unsigned int * framePointer);


void drawBunkerBlock(unsigned int * framePointer);
void drawTankBullet(unsigned int * framePointer);
void drawAlienBullets(unsigned int * framePointer);
void drawSpaceShip(unsigned int * framePointer);
void drawBannerBlock(unsigned int * framePointer);
void drawScoreBanner(unsigned int * framePointer);
void drawLivesBanner(unsigned int * framePointer);
void drawLives(unsigned int * framePointer);

void drawScore(unsigned int * framePointer, int value);

void drawAlienExplosion(unsigned int * framePointer, int x, int y);
void drawTankExplosion(unsigned int * framePointer, int x, int y, int z);

int determineBunkerHit(int x, int y);

void killAlien(int n);


#endif /* GAMEFUNCTIONS_H_ */
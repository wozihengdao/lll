#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void menu();
void board(char arr[ROW][COL], int row, int col);
void displayboard(char arr[ROW][COL], int row, int col);
void playermove(char arr[ROW][COL],int row,int col);
void computermove(char arr[ROW][COL], int row, int col);
char is_win(char arr[ROW][COL], int row, int col);
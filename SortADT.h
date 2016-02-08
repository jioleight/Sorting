#ifndef SortADT_H
#define SortADT_H

// standard includes
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "conio.h"
#include "windows.h"

// need ni para ma call sa main ang functions nga naa sa each .c file
#include "insertion.c"
#include "selection.c"
#include "merge.c"
#include "heap.c"
#include "bubble.c"
#include "radix.c"
#include "shell.c"
#include "bucket.c"
#include "comb.c"
#include "quick.c"

// doubly link list 
struct NODE{
	int val;
	struct NODE *prv;
	struct NODE *nxt;
};

/* 
 head meaning ang reference or diri ang start sa tanan, 
 unless mag insert ug data previous sa head. of course ang previous
 himoong head sad para di mawala ang reference. 
*/
struct NODE *head;

// sa array implementation 20 lang ang max. 
int arr[20];

// main functions do not edit
struct NODE *NEWNODE(int data);
void tmpDATA(int data);
void DataGen();
int displayLL(struct NODE *nodename, short x, short y);
int displayArr(int *arrname[], short x, short y);


// your functions here
void partition(int arr[],int low,int high);
void Merge(int arr[],int low,int mid,int high);
/* For Go To X and Y */
void gotoxy(short x, short y) 
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

#endif

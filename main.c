/*
	Name: Sorting Algorithms
	Copyright: GNU GPL v3
	Author: Bucad, Oji Leightton Vynn-Z
		Combate, Gene Carlo
		Aquino, Rhoyzyl
		Tan, Gerry
		Sanchez, Almar
	Date: 07/02/16 19:53
	Description: Different types of sorting 
			 	 algorithm in one program
*/
#include "SortADT.h"

main()
{
	// using char so we can use characters in switch
	char ch; 
	
	DataGen();
	
	// infinite loop unless return 0
	while(1)
	{
		system("cls");
		gotoxy(10, 4);  printf("Sorting Algorithms");
		gotoxy(10, 6);  printf("[0] Insertion");
		gotoxy(10, 7);  printf("[1] Selection");
		gotoxy(10, 8);  printf("[2] Merge");
		gotoxy(10, 9);  printf("[3] Heap");
		gotoxy(10, 10); printf("[4] Quick");
		gotoxy(30, 6);  printf("[5] Bubble");
		gotoxy(30, 7);  printf("[6] Shell");
		gotoxy(30, 8);  printf("[7] Comb");
		gotoxy(30, 9);  printf("[8] Bucket");
		gotoxy(30, 10); printf("[9] Radix");
		gotoxy(10, 12); printf("[d] Display");
		gotoxy(10, 13); printf("[x] Exit");
		gotoxy(30, 12); printf("Select: ");
		ch = getche();
		
		switch(ch)
		{
			case '0':
				Insertion();
				break;
			case '1':
				Selection();
				break;
			case '2':
				Merge();
				break;
			case '3':
				Heap();
				break;
			case '4':
				Quick();
				break;
			case '5':
				Bubble();
				break;
			case '6':
				Shell();
				break;
			case '7':
				Comb();
				break;
			case '8':
				Bucket();
				break;
			case '9':
				Radix();
				break;
			case 'd':
				gotoxy(10, 15);printf("Stored Data");
				gotoxy(10, 16);printf("Link List");
				displayLL(head, 10, 17);
				gotoxy(10, 18); printf("Array List");
				displayArr(arr, 10, 19);
				getch();
				break;
			case 'x':
				return 0;
				break;
			default:
				gotoxy(38, 12); printf("INVALID!");
				sleep(1);
				break;
		}
	}
}
// data generator for array and link list
void DataGen()
{
	int i = 0, r;
	// random values ang ma insert ani sa atong link list. 
	// insert front function ra ni. once ra ni ma call
	// para dili mag cge ilis ang data sa link list.
	while(i != 20)
	{
		r = rand() %100; // %100 ang max number sa pag randomize
		tmpDATA(r);// insert front function
		arr[i] = r;// insert to array for uniformity sa data
		i++;
	}
}

// temporary store data before inserting
struct NODE *NEWNODE(int data)
{
	struct NODE *newNODE = (struct NODE*)malloc(sizeof(struct NODE));
	
	newNODE->val = data;
	newNODE->nxt = NULL;
	newNODE->prv = NULL;
	return newNODE;
}
// insert front function
void tmpDATA(int data)
{	
	struct NODE *tmp = NEWNODE(data);
	
	if(head == NULL)
	{
		head = tmp;
		return;
	}
	head->prv = tmp;
	tmp->nxt = head;
	head = tmp;
}
// display function for link list
int displayLL(struct NODE *nodename, short x, short y)
{
	struct NODE *tmp = (struct NODE *)malloc(sizeof(struct NODE));
	tmp = nodename;
	
	gotoxy(x, y);
	
	while(tmp->nxt != NULL) tmp = tmp->nxt;
	while(tmp != NULL)
	{
		printf("%d ", tmp->val);
		tmp = tmp->prv;
	}
}
// display function for array
int displayArr(int *arrname[], short x, short y)
{
	int i = 0;
	gotoxy(x, y);
	for(i;i < 20; i++)
		printf("%d ", arrname[i]);
}

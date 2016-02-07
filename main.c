#include "SortADT.h"

main()
{
	char ch; // gamit character para magamit ang x which is exit
	int i = 0, r;
	
	// random values ang ma insert ani sa atong link list. 
	// insert front function ra ni. once ra ni ma call
	// para dili mag cge ilis ang data sa link list.
	printf("Stored data in Array and Link List\n");
	for(i; i <= 20; i++)
	{
		r = rand() %100; // %100 ang max number sa pag randomize
		tmpDATA(r); // insert front function
		arr[i] = r; // insert to array for uniformity sa data
		printf("%d ", r); // display to check values
	}
	getch();
	
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
		gotoxy(10, 12); printf("[x] Exit");
		gotoxy(30, 12); printf("Select: ");
		scanf("%c", &ch);
		
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

// wa man nako paman nako mahuman akong DLL mao tmp data lang sa.
struct NODE *NEWNODE(int data)
{
	struct NODE *newNODE = (struct NODE*)malloc(sizeof(struct NODE));
	
	newNODE->val = data;
	newNODE->nxt = NULL;
	newNODE->prv = NULL;
	return newNODE;
}

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

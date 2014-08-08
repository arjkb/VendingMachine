/*
	Program to simulate a vending machine.

	608H14 -- Arjun Krishna Babu
*/
#include<stdio.h>

int main()
{
	int choice;

	do	{
//		System("cls");
//		system("clear");

			
		printf("\n [WELCOME TO THE VENDING MACHINE!]\n");
		printf("\n 1: Cadburry\t\t$1.00");
		printf("\n 2: KitKat\t\t$1.00");
		printf("\n 3: Crispy\t\t$1.00");
		printf("\n 4: EXIT");

		printf("\n\n What's your favorite chocolate?: ");
			scanf("%d", &choice);

		switch(choice)	{
			case 1: printf("\n Enjoy your Cadburry!\n\n");
					break;
			case 2: printf("\n Enjoy your KitKat!\n\n");
					break;
			case 3: printf("\n Enjoy your Crispy!\n\n");
					break;
			case 4: printf("\n Thank You For Using This Program!\n\n");
					break;
		   default: printf("\n ERROR! Please try again!\n\n");
		   			break;
		}
	}while(choice != 4);

}

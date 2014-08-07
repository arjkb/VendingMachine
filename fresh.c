/*
	Program to simulate a chocolate vending machine

	507H14 -- Arjun Krishna Babu
*/
#include<stdio.h>

void menu(void);
void chocolate(void);
void price(void);
void change(void);
void end(void);

int choc[3]={0,1,2};


int main()
{
	int menuchoice, option, choice, money, payment, price;	
	do
	{
		e:
		menu();
		printf("\n Enter Your Choice: "); scanf("%d", &menuchoice);
		
		switch(menuchoice)	{
			case 1: w:
				printf("\n The Chocolates");
  				printf("\n1.Choose Chocolate");
	  			printf("\n2.View A Price To Be Paid");
  				printf("\n3.Back To Main Menu");
	
		  		printf("\nRules: Machine can only receive $1 only! \n\n\n");
		
		  		printf("\nEnter Your Option: ");
		  			scanf("%d",&option);
		  		printf("\n\n");	
		  		
		  		switch(option)	{
		  			case 1: //system("cls");
		  				//system("clear"); //use this if using LINUX-UBUNTU
						printf("Name list of chocolate: ");
				   			printf("\n\n");
			   			printf("1. Cadburry");          printf("\t$1.00\n");
   						printf("2. Kitkat");            printf("\t\t\t$1.00\n");
   						printf("3. Crispy");            printf("\t\t\t$1.00\n");
      						printf("\n\n");
	
						printf("Choose Chocolate: ");
		   						scanf("%d",&choice);
   						printf("\n\n");
	
		   				switch(choice)	{
    							case 0 : chocolate(); printf("You choose Cadbury \n\n");
								 goto w;
    							case 1 : chocolate(); printf("You choose Kitkat\n\n");
								 goto w;
    							case 2 : chocolate(); printf("You choose Crispy\n\n");
								 goto w;			
				
    							default: goto e;
					        }
						break;
					case 2: printf("View A Price To Be Paid: ");
  			 			scanf("%d",&choice);
   						printf("\n\n");
						switch(choice)	{
    							case 0 ://price(); 
										printf("$1.00\n\n");
						   		 		goto w;
    							case 1 ://price(); 
										printf("$1.00\n\n");
								 		goto w;
								case 2 ://price(); 
										printf("$1.00\n\n");
								 		goto w;  
		 		   				default:goto e;
						}
				} //end of inner switch
				break;	//end of case 1 of outer switch
				case 2:	printf("Enter your money: ");
		  			scanf("%d",&money);
					printf("\n\n");
					if(choice != 0 && choice != 1 && choice != 2)	{						
						printf("\n ERROR!");
						break;
					}
							
					printf("Your payment is $1");
					printf("\n\n");
		   			if(choice==0)	{
		    				choc[0]=payment;
		  			}	
		   			else if(choice==1)	{
		    				choc[1]=payment;
		   			}
   					else if(choice==2)	{
        			         	choc[2]=payment;
   					}		
			
					goto e;
					break;	//end of case 2 of outer switch
				case 3: change();
 					goto e;
 					break; //end of case 3 of outer swtch
 				case 4: printf("Enjoy it!");
	  				if(choice==0)   		{
    						printf("Thank you and enjoy your Cadbury !");
		    				printf("\n\n");
    						choc[0]=0;
    						goto e;
   					}
   					else if(choice==1)		{
		 		   		printf("Thank you and enjoy your Kitkat!");
    						printf("\n\n");
    						choc[1]=0;	
				    		goto e;		
		   			}
			 		if(choice==2)  		{
				    		printf("Thank you and enjoy your Crispy!");
		    				printf("\n\n");
		    				choc[2]=0;
		    				goto e;
		   			}
		   			break;	//end of case 3 of outer switch
			       default: printf("\n ERROR: You entered an invalid choice!");
			       		break;
			}	//end of outer switch
	}while(1);

}	       		


void menu(void)
{
	printf("|WELCOME TO CHOCOLATES VENDING MACHINE|\n\n");

	printf("1.The Chocolates\n");
	printf("2.Login To Your Account\n");
	printf("3.View Change\n");
	printf("4.Exit Vending Machine\n");
	printf("5.Exit Program\n\n");
}

void chocolate(void)
{
	int u[30];
	char o[30];
	FILE *choclot;
//	choclot=fopen("parking.txt","a");

	printf("Your Chocolate: ");
/*
	scanf("%s",o);
	printf("Total Price: ");
	scanf("%d",&u);
	fprintf(choclot,"Chocolate: %s Total Price: %d\n\n",o,u);
	fclose(choclot);
*/
}

void change(void)
{
	int i;
	printf("Your Balance: \n\n");
	for(i=0;i<10;i++)
 		printf("%d",choc[i]);
 	printf("\n\n\n\n");
}

void end(void)
{
	system("cls");
	printf("\t\t\tTHANK YOU FOR USING THIS SERVICES\n");
}
				

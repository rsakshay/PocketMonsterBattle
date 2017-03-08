#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#define MAX 100

typedef struct pokemon
{
	int hp;
	char name[MAX];
	char p1[MAX], p2[MAX], p3[MAX], p4[MAX];
}pokemon;

int growl=0;
int dt=0;

int ThunderShock()
{
	int hit=-1, hp=0;
	printf("\nPikachu used Thunder Shock\n");
	srand(time(NULL));
	hit=rand()%20;
	switch(dt)
	{
		case 0:
			if(hit>=0&&hit<10)
			{
				hp=20+rand()%10;
				printf("\nIt is a hit!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
			break;
			
		case 1:
			if(hit>=0&&hit<7)
			{
				hp=20+rand()%10;
				printf("\nIt is a hit!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
	}
	return hp;
}

int Growl()
{
	int hit=-1;
	printf("\nPikachu used Growl\n");
	srand(time(NULL));
	hit=rand()%20;
	if(hit>=0&&hit<15)
	{
		printf("\nIt is effective!\n\n");
		growl=1;
	}
	else
	{
		printf("\nBut it has no Effect!\n\n");
		growl=0;
	}
	return growl;
}

int TailWhip()
{
	int hit=-1, hp=0;
	printf("\nPikachu used Tail Whip\n");
	srand(time(NULL));
	hit=rand()%20;
	switch(dt)
	{
		case 0:
			if(hit>=0&&hit<12)
			{
				hp=5+rand()%10;
				printf("\nIt is a hit!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
			break;
			
		case 1:
			if(hit>=0&&hit<9)
			{
				hp=5+rand()%10;
				printf("\nIt is a hit!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
	}
	return hp;
}

int ThunderWave()
{
	int hit=-1, hp=0;
	printf("\nPikachu used ThunderWave\n");
	srand(time(NULL));
	hit=rand()%20;
	switch(dt)
	{
		case 0:
			if(hit>=0&&hit<5)
			{
				hp=40;
				printf("\nIt is super Effective!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
			break;
			
		case 1:
			if(hit>=0&&hit<2)
			{
				hp=40;
				printf("\nIt is super Effective!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
	}
	return hp;
}

int RazorLeaf()
{
	int hit=-1, hp=0;
	printf("\nBulbasaur used Razor Leaf\n");
	srand(time(NULL));
	hit=rand()%20;
	switch(growl)
	{
		case 0:
			if(hit>=0&&hit<10)
			{
				hp=20+rand()%10;
				printf("\nIt is a hit!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
			break;
			
		case 1:
			if(hit>=0&&hit<10)
			{
				hp=10+rand()%10;
				printf("\nIt is a hit!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
	}
	return hp;
}

int DoubleTeam()
{
	int hit=-1;
	printf("\nBulbasaur used Double Team\n");
	srand(time(NULL));
	hit=rand()%20;
	if(hit>=0&&hit<15)
	{
		printf("\nIt is effective!\n\n");
		dt=1;
	}
	else
	{
		printf("\nBut it has no effect!\n\n");
		dt=0;
	}
	return dt;
}

int VineGrip()
{
	int hit=-1, hp=0;
	printf("\nBulbasaur used Vine Grip\n");
	srand(time(NULL));
	hit=rand()%20;
	switch(growl)
	{
		case 0:
			if(hit>=0&&hit<12)
			{
				hp=5+rand()%10;
				printf("\nIt is a hit!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
			break;
			
		case 1:
			if(hit>=0&&hit<12)
			{
				hp=2+rand()%10;
				printf("\nIt is a hit!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
	}
	return hp;
}

int SolarBeam()
{
	int hit=-1, hp=0;
	printf("\nBulbasaur used Solar Beam\n");
	srand(time(NULL));
	hit=rand()%20;
	switch(growl)
	{
		case 0:
			if(hit>=0&&hit<5)
			{
				hp=40;
				printf("\nIt is super Effective!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
			break;
			
		case 1:
			if(hit>=0&&hit<5)
			{
				hp=20;
				printf("\nIt is not so Effective!( HP-%d )\n\n",hp);
			}
			else
			{
				printf("\nBut it failed!\n\n");
			}
	}
	return hp;
}

main()
{
	printf("\t\tPOKEMON\n\n\n");
	printf("Press Enter to start the game.\n\n");
	getchar();
	
	pokemon a, b;
	strcpy(a.name, "Pikachu");
	strcpy(a.p1, "Thunder Shock");
	strcpy(a.p2, "Growl");
	strcpy(a.p3, "Tail Whip");
	strcpy(a.p4, "Thunder Wave");
	a.hp=100;

	strcpy(b.name, "Bulbasaur");
	strcpy(b.p1, "Razor Leaf");
	strcpy(b.p2, "Double Team");
	strcpy(b.p3, "Vine Grip");
	strcpy(b.p4, "Solar Beam");
	b.hp=100;
	
	int choice=0;
	int attack=0;
	int growl=-1;
	int dt=-1;
	int pcattack=0;
	printf("Choose Your Pokemon: 1. Pikachu\n");
	printf("                     2. Bulbasaur");
	scanf("%d", &choice);
	
		
	if(choice==1)
	printf("Player 1: Pikachu\t\tPlayer 2: Bulbasaur");
	else
	printf("Player 1: Bulbasaur\t\tPlayer 2: Pikachu");
	
	printf("\n\n\t\t   ....FIGHT....\n\n");
	do
	{
		switch(choice)
		{
			case 1:
				do
				{
					printf("Player 1 HP: %d				Player 2 HP: %d\n", a.hp, b.hp);
					printf("Choose your Attack:\n");
					printf("1. %s\t\t\t    2. %s\n", a.p1, a.p2);
					printf("3. %s\t\t\t\t    4. %s\n", a.p3, a.p4);
					scanf("%d", &attack);
					
					do
					{
						switch(attack)
						{
							case 1:
								b.hp-=ThunderShock();
								break;
								
							case 2:
								growl=Growl();
								break;
								
							case 3:
								b.hp-=TailWhip();
								break;
								
							case 4:
								b.hp-=ThunderWave();
								break;
								
							default:
								printf("\nInvalid Input\n");
								break;
						}
						
					}while(attack<1&&attack>4);
					
					if(b.hp<=0)
					{
						printf("\t\t ... K.O. ... \n\n");
						printf("Bulbasaur was knocked unconscious!\n");
						printf("PIKACHU WINS!!!\n\n");
						exit(0);
					}
					
					dt=0;
					
					pcattack=1+rand()%4;
					switch(pcattack)
					{
						case 1:
							a.hp-=RazorLeaf();
							break;
								
						case 2:
							dt=DoubleTeam();
							break;
								
						case 3:
							a.hp-=VineGrip();
							break;
								
						case 4:
							a.hp-=SolarBeam();
							break;
					}
					growl=0;
					
					getchar();					
				}while(a.hp>0);
				
					printf("\t\t ... K.O. ... \n\n");
					printf("Pikachu was knocked unconscious!\n");
					printf("BULBASAUR WINS!!!\n\n");
					exit(0);
				break;
				
			case 2:
				do
				{
					printf("Player 1 HP: %d				Player 2 HP: %d\n", b.hp, a.hp);
					printf("Choose your Attack:\n");
					printf("1. %s\t\t\t\t    2. %s\n", b.p1, b.p2);
					printf("3. %s\t\t\t\t    4. %s\n", b.p3, b.p4);
					scanf("%d", &attack);
					
					do
					{
						switch(attack)
						{
							case 1:
								a.hp-=RazorLeaf();
								break;
								
							case 2:
								dt=DoubleTeam();
								break;
								
							case 3:
								a.hp-=VineGrip();
								break;
								
							case 4:
								a.hp-=SolarBeam();
								break;
								
							default:
								printf("\nInvalid Input\n");
								break;
						}
						
					}while(attack<1&&attack>4);
					
					if(a.hp<=0)
					{
						printf("\t\t ... K.O. ... \n\n");
						printf("Pikachu was knocked unconscious!\n");
						printf("BULBASAUR WINS!!!\n\n");
						exit(0);
					}
					growl=0;
					
					pcattack=1+rand()%4;
					switch(pcattack)
					{
							case 1:
								b.hp-=ThunderShock();
								break;
								
							case 2:
								growl=Growl();
								break;
								
							case 3:
								b.hp-=TailWhip();
								break;
								
							case 4:
								b.hp-=ThunderWave();
								break;
					}
					dt=0;
				
				}while(b.hp>0||a.hp>0);
				
				if(b.hp<=0)
				{
					printf("\t\t ... K.O. ... \n\n");
					printf("Bulbasaur was knocked unconscious!\n");
					printf("PIKACHU WINS!!!\n\n");
					exit(0);
				}
				break;
				
			default:
				printf("\n\nINVALID INPUT\n\n");
				
						
		}
	}while(choice==1||choice==2);
	
	getch();
}

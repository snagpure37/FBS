#include<stdio.h>

typedef struct Player
{
	char name[30];
	int noMatches;
	int runs;
	int wickets;
}Player;

Player addPlayer(Player*, int);
Player displayPlayers(Player*, int);
Player maxRuns(Player* p,int size);
Player maxWickets(Player* p,int size);

void main()
{
	int noOfPlayers;
	printf("Enter the number of players you want to enter : ");
	scanf("%d",&noOfPlayers);
	Player pArr[noOfPlayers];
	addPlayer(pArr,noOfPlayers);
	displayPlayers(pArr,noOfPlayers);
	printf("\nPlayer with maximum Runs :\n");
	maxRuns(pArr,noOfPlayers);
	printf("\nPlayer with maximum Wickets :\n");
	maxWickets(pArr,noOfPlayers);
}

Player addPlayer(Player* ply,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Enter player %d\n",i+1);
		
		printf("Enter player name : ");
		fflush(stdin);
		gets(ply[i].name);
		
		printf("matches played : ");
		scanf("%d",&ply[i].noMatches);
		
		printf("Runs scored : ");
		scanf("%d",&ply[i].runs);
		
		printf("Wickets taken : ");
		scanf("%d",&ply[i].wickets);
		printf("\n");
	}
}

Player displayPlayers(Player* ply,int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("\nPlayer %d details\n",i+1);
		printf("Name = %s\nNo of Matches = %d\nRuns = %d\nWickets = %d\n",ply[i].name,ply[i].noMatches,ply[i].runs,ply[i].wickets);
	}
}

Player maxRuns(Player* p,int size)
{
	int maxRunIndex = 0;
	int i;
	for(i=0; i<size; i++)
	{
		if(p[i].runs > p[maxRunIndex].runs)
		{
			maxRunIndex = i;
		}	
	}
	printf("Name = %s\nNo of Matches = %d\nRuns = %d\nWickets = %d\n",p[maxRunIndex].name,p[maxRunIndex].noMatches,p[maxRunIndex].runs,p[maxRunIndex].wickets);
}

Player maxWickets(Player* p, int size)
{
	int maxWicketIndex = 0;
	int i;
	for(i=0; i<size; i++)
	{
		if(p[i].wickets > p[maxWicketIndex].wickets)
		{
			maxWicketIndex = i;
		}
	}
	printf("Name = %s\nNo of Matches = %d\nRuns = %d\nWickets = %d\n",p[maxWicketIndex].name,p[maxWicketIndex].noMatches,p[maxWicketIndex].runs,p[maxWicketIndex].wickets);
}

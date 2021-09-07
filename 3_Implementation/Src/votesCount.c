#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Siva"
#define CANDIDATE2 "Naga"
#define CANDIDATE3 "Sai"
#define CANDIDATE4 "Satish"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;
void votesCount()
{
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE1, votesCount2);
printf("\n %s - %d ", CANDIDATE1, votesCount3);
printf("\n %s - %d ", CANDIDATE1, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}
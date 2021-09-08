/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "Siva"
#define CANDIDATE2 "Naga"
#define CANDIDATE3 "Sai"
#define CANDIDATE4 "Satish"
#include "fun.h"
/*void ageCheck();
void castvote();
void votesCount();
void getLeadingCandidate();*/
int main()
{
int i;
int choice;

do
{
printf("\n\n ###### Welcome to Election/Voting 2021 #####");
printf("\n 1. Check Eligibility for vote");
printf("\n 2. Cast the Vote");
printf("\n 3. Find Vote Count");
printf("\n 4. Find leading Candidate");
printf("\n 0. Exit");
printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: ageCheck();break;
case 2: castVote();break;
case 3: votesCount();break;
case 4: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
}while(choice!=0);

//hold the screen
getchar();
return 0;
}
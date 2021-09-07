#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Siva"
#define CANDIDATE2 "Naga"
#define CANDIDATE3 "Sai"
#define CANDIDATE4 "Satish"

void ageCheck()
{
int age;
printf("enter age of person:");
scanf("%d",&age);
if(age>17)
{
printf("\n person is eligible for voting");
}
else
{
printf("\n person is not eligible for voting");
}
}
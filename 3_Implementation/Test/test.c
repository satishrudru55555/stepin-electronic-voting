#include "unity.h"
#include "unity_internal.h"
#include "fun.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_ageCheck(void) {
  age_Check age = {"enter the age", "19"};
  TEST_ASSERT_EQUAL(0, add_Check(&age));
}

void test_castVote(void) {
  cast_Vote CANDIDATE1 = {"choose your candidate", "1"};
  cast_Vote CANDIDATE2 = {"choose your candidate", "2"};
  cast_Vote CANDIDATE3 = {"choose your candidate", "3"};
  cast_Vote CANDIDATE4 = {"choose your candidate", "4"};


  TEST_ASSERT_EQUAL(0, choose_your_candidate(&CANDIDATE1));
  TEST_ASSERT_EQUAL(0, choose_your_candidate(CANDIDATE1.name &CANDIDATE2));
  TEST_ASSERT_EQUAL(0, choose_your_candidate(CANDIDATE2.name &CANDIDATE3));
  TEST_ASSERT_EQUAL(0, choose_your_candidate(CANDIDATE3.name &CANDIDATE4));
  TEST_ASSERT_EQUAL(0, choose_your_candidate(CANDIDATE4.name &CANDIDATE5));  
  TEST_ASSERT_EQUAL(0, choose_your_candidate(CANDIDATE5.name));





}

void test_votesCount(void) {
  Votes_Count votesCount1 = {"CANDIDATE1", "Siva"};
  Votes_Count votesCount2 = {"CANDIDATE2", "Naga"};
  Votes_Count votesCount3 = {"CANDIDATE3", "Sai"};
  Votes_Count votesCount4 = {"CANDIDATE4", "Satish"};
  Votes_Count spoiledtVotes = {"CANDIDATE5", "None of These"};



  TEST_ASSERT_EQUAL(0, CANDIDATE1(&votesCount1));
  TEST_ASSERT_EQUAL(0, CANDIDATE2(votesCount1.name &votesCount2));
  TEST_ASSERT_EQUAL(0, CANDIDATE3(votesCount2.name &votesCount3));
  TEST_ASSERT_EQUAL(0, CANDIDATE4(votesCount3.name &votesCount4));
  TEST_ASSERT_EQUAL(0, spoiledtVotes(votesCount4.name));

}
void test_getLeadingCandidate(void) {
  get_Leading_Candidate voteCount1= {"CANDIDATE1", "Siva"};
  get_Leading_Candidate voteCount2= {"CANDIDATE2", "Naga"};
  get_Leading_Candidate voteCount3= {"CANDIDATE3", "Sai"};
  get_Leading_Candidate voteCount4= {"CANDIDATE4", "Satish"};

  TEST_ASSERT_EQUAL(0, Siva(&voteCount1));
  TEST_ASSERT_EQUAL(0 ,Naga(voteCount1.name &voteCount2));
  TEST_ASSERT_EQUAL(0 ,Sai(voteCount2.name &voteCount3));
  TEST_ASSERT_EQUAL(0 ,Satish(voteCount3.name &voteCount4));
  TEST_ASSERT_EQUAL(0 ,No_Win_Situation(voteCount4.name));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_ageCheck);
  RUN_TEST(test_castVote);
  RUN_TEST(test_votesCount);
  RUN_TEST(test_getLeadingCandidate);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
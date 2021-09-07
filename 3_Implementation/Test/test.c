
#include "unity.h"
#include "phone_book.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_ageCheck(void) {
  contact_t new_contact = {"Add_user", "12345", "user1@email.com"};
  TEST_ASSERT_EQUAL(0, add_contact(&new_contact));
}

void test_castVote(void) {
  contact_t new_contact = {"Delete_user", "12345", "user1@email.com"};
  TEST_ASSERT_EQUAL(0, add_contact(&new_contact));
  TEST_ASSERT_EQUAL(0, delete_contact(new_contact.name));
}

void test_votesCount(void) {
  contact_t new_contact = {"Modify_User", "12345", "user1@email.com"};
  contact_t new_contact1 = {"Modified_User", "345", "new@email.com"};
  TEST_ASSERT_EQUAL(0, add_contact(&new_contact));
  TEST_ASSERT_EQUAL(0, modify_contact(new_contact.name, &new_contact1));
  TEST_ASSERT_EQUAL(0, delete_contact(new_contact1.name));
}
void test_getLeadingCandidate(void) {
  contact_t new_contact = {"Search_User", "345", "new@email.com"};
  TEST_ASSERT_EQUAL(0, add_contact(&new_contact));
  TEST_ASSERT_EQUAL(0 , search_contact(new_contact.name));
  TEST_ASSERT_EQUAL(0 , delete_contact(new_contact.name));
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

#include "unity.h"
#include "sum.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_sum1(void)
{
  TEST_ASSERT_EQUAL(11, sum(5,6));
}

void test_sum2(void)
{
  TEST_ASSERT_EQUAL(4, sum(5,-1));
}

void test_sum3(void)
{
  TEST_ASSERT_EQUAL(4, sum(-1,5));
}

void test_sum4(void)
{ 
   TEST_ASSERT_EQUAL(-3, sum(-5,2));
}

void test_sum5(void)
{
    TEST_ASSERT_EQUAL(-3, sum(2,-5));
}


int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sum1);
  RUN_TEST(test_sum2);
  RUN_TEST(test_sum3);
  RUN_TEST(test_sum4);
  RUN_TEST(test_sum5);
 


  /* Close the Unity Test Framework */
  return UNITY_END();
}

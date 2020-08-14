#include <stdio.h>
#include "Prime.h"
#include "unity.h"

void setUp(void)
{

}

void tearDown(void)
{

}

void test_isprime_checkWithPrimeNumber()
{
    TEST_ASSERT_EQUAL(1, isprime(7));
}
void test_isprime_checkWithNOTPrimeNumber()
{
    TEST_ASSERT_EQUAL(0, isprime(4));
}


int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_isprime_checkWithPrimeNumber);
    RUN_TEST(test_isprime_checkWithNOTPrimeNumber);

    return UNITY_END();
}

#include "unity.h"

#define PROJECT_NAME  "SCHOOL BILLING SYSTEM"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for School_Billing_System
 * 
 */
extern void test_school();

/* Required by the unity test framework */
void setUp(void)
{
}

/* Required by the unity test framework */
void tearDown(void)
{
}

/* Start of the application test */
int main(void)
{
    /* Initiate the Unity Test Framework */
    UnityBegin(NULL);

    /* Run Test functions */
    RUN_TEST(test_school);
    
    /* Close the Unity Test Framework */
    return (UnityEnd());
}
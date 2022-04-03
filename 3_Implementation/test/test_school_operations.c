#include "unity.h"
#include "school_operations.h"

#define PROJECT_NAME "School_Billing_System"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for School_Billing_System
 * 
 */

/**
 * @brief Testing function for show records
 * 
 */
void test_start();
void test_adding_records();
void test_searching_records();
void test_update_records();
void test_deleting_records();
void test_salary();
void test_fee();
void test_exits();
int test_checking_date();
int test_check_class();


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_start);
    RUN_TEST(test_adding_records);
    RUN_TEST(test_searching_records);
    RUN_TEST(test_update_records);
    RUN_TEST(test_searching_records);
    RUN_TEST(test_deleting_records);
    RUN_TEST(test_salary);
    RUN_TEST(test_fee);
    RUN_TEST(test_exits);
    RUN_TEST(test_checking_date);
    RUN_TEST(test_check_class);

    /* Close the Unity Test Framework */
    return UNITY_END;
}
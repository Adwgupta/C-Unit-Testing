#include "CUnit/CUnit.h"
#include "CUnit/Basic.h"

#include "fact.h"

//2 Arrays containing the numbers to be tested as per assignment specifications
double array1[] = {-1.3, -1.45, -220, -100, -0.1, -0.1234, -200};
double array2[] = {-1.3, 1.45, 220, 100, 0, 200, 0.1234};

//Testing function to execute the assertions
void testingFunction() {
    //Test case/Assertion 1
    CU_ASSERT(factorial(0) == 1);
    CU_ASSERT(factorial(1) == 1);
    CU_ASSERT(factorial(4) == 24);
    CU_ASSERT(factorial(6) == 720);
    //Test case/Assertion 2
}

//Function to run all main CUnit tests
void runAllTests() {
    //Initialise the test registry
    CU_initialize_registry();
    //Create a new suite
    CU_pSuite suite = CU_add_suite("Testing The Factorial Function", 0, 0);
    //Add a new test to the suite
    CU_add_test(suite, "Question 5", testingFunction);
    //Set the mode for the amount of information provided
    CU_basic_set_mode(CU_BRM_VERBOSE);
    //Run all tests in the test registry
    CU_basic_run_tests();
    //Clean up the test registry
    CU_cleanup_registry();
}

int main() {
    runAllTests();
    return 0;
}
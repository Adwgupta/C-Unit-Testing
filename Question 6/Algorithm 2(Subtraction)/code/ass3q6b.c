#include "CUnit/CUnit.h"
#include "CUnit/Basic.h"

#include "gcd.h"

//Testing function to execute the assertions
void testingFunction() {
    //Using the divison based (function 1) algorithm
    CU_ASSERT(function_gcd2(42,56) == 14);
    CU_ASSERT(function_gcd2(48, 18) == 6);
    CU_ASSERT(function_gcd2(270, 192) == 6);
    CU_ASSERT(function_gcd2(1237, 24) == 1);
    CU_ASSERT(function_gcd2(4200000, 3780000) == 420000);
    CU_ASSERT(function_gcd2(0, 0) == 0);
    //Test case/Assertion 2
}

//Function to run all main CUnit tests
void runAllTests() {
    //Initialise the test registry
    CU_initialize_registry();
    //Create a new suite
    CU_pSuite suite = CU_add_suite("Testing The GCD Function", 0, 0);
    //Add a new test to the suite
    CU_add_test(suite, "Question 6: Algorithm 2", testingFunction);
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

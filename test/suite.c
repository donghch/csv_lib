#include "../src/csvreader.h"
#include <stdio.h>
#include "CuTest.h"

void getLengthTest(CuTest* tc) {
    
    FILE* handle = fopen("../examples/studentData/stu.csv", "r");
    CuAssertPtrNotNull(tc, handle);
    CuAssertIntEquals(tc, 5, getLength(handle));

}

void getWidthTest(CuTest* tc) {

    FILE* handle = fopen("../examples/studentData/stu.csv", "r");
    CuAssertPtrNotNull(tc, handle);
    CuAssertIntEquals(tc, 3, getWidth(handle));
}

CuSuite* getAllTests() {

    CuSuite* suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, getLengthTest);
    SUITE_ADD_TEST(suite, getLengthTest);
    return suite;
}
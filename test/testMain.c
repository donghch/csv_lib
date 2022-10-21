#include "CuTest.h"
#include <stdio.h>

CuSuite* getAllTests();

void runAll() {

    CuString* output = CuStringNew();
    CuSuite* s = CuSuiteNew();

    CuSuiteAddSuite(s, getAllTests());
    CuSuiteRun(s);
    CuSuiteSummary(s, output);
    CuSuiteDetails(s, output);
    printf("%s\n", output -> buffer);

}

int main() {
    runAll();
}
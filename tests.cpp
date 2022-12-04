#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include "funcs.h"
#include "doctest.h"

// TEST_CASE("Task A"){
//     std::string temp = "";
//     CHECK(printRange(0,5,temp) == "0 ");
//     CHECK(printRange(5,10,temp) == "0 ");
//     CHECK(printRange(-6,4,temp) == "0 ");
//     CHECK(printRange(1,1,temp) == "0 ");
//     CHECK(printRange(6,9,temp) == "0 ");
// }

TEST_CASE("Task B"){
    CHECK(sumRange(2,5) == 14);
    CHECK(sumRange(1,7) == 28);
    CHECK(sumRange(6,8) == 21);
    CHECK(sumRange(24,27) == 102);
    CHECK(sumRange(62,75) == 959);
}

TEST_CASE("Task C"){
    int size = 5;
    int arr[size] = {0,1,2,3,4};
    CHECK(sumArray(arr,size) == 10);
    CHECK(sumArray(arr,1) == 0);
    CHECK(sumArray(arr,2) == 1);
    CHECK(sumArray(arr,4) == 6);
    CHECK(sumArray(arr,0) == 0);
}

TEST_CASE("Task D"){
    CHECK(isAlphanumeric("hello") == 1);
    CHECK(isAlphanumeric("there") == 1);
    CHECK(isAlphanumeric("computer") == 1);
    CHECK(isAlphanumeric("i am not a robot") == 0);
    CHECK(isAlphanumeric("there are no numbers here 999") == 0);
    CHECK(isAlphanumeric("43110") == 1);
}

TEST_CASE("Task E"){
    CHECK(nestedParens("(((((") == 0);
    CHECK(nestedParens("(b(())") == 0);
    CHECK(nestedParens("((a()") == 0);
    CHECK(nestedParens("(((right)))") == 0);
    CHECK(nestedParens("(w)") == 0);
    CHECK(nestedParens("(((((())))))") == 0);
}
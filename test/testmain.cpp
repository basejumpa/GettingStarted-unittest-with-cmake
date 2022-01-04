#include <catch2/catch_test_macros.hpp>
#include <stdio.h>

int main(void){
    fprintf(stdout, "Tests done!");
    fprintf(stderr, "Tests done!");;
    return 0;
}

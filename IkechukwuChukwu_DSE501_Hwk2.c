// The control flow of my program with the flow diagram is contained in the README file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IkechukwuChukwu_DSE501_Hwk2_Library.h" // Header file containing the read_data, sort_data, and print_data functions

int main() {
    struct Instructor instructors[MAX_RECORDS];
    int count = 0;

    // READS FILE
    read_data("DSE501_Hwk2_Instructors.txt", instructors, &count);

    // SORTS FILE
    sort_data(instructors, count);

    // PRINTS DATA
    print_data(instructors, count);

    return 0;
}

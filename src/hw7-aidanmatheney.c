/*
 * Aidan Matheney
 * aidan.matheney@und.edu
 *
 * CSCI 451 HW7
 */

#include "../include/hw7.h"

#include "../include/util/macro.h"

#include <stdlib.h>

int main(int const argc, char ** const argv) {
    static struct HW7TransactionRecord const transactionRecords[] = {
        {.name = "Vlad", .filePath = "Vlad.in"},
        {.name = "Frank", .filePath = "Frank.in"},
        {.name = "Bigfoot", .filePath = "Bigfoot.in"},
        {.name = "Casper", .filePath = "Casper.in"},
        {.name = "Gomez", .filePath = "Gomez.in"}
    };
    hw7(transactionRecords, ARRAY_LENGTH(transactionRecords));
    return EXIT_SUCCESS;
}

#pragma once

#include <stdlib.h>

struct HW7TransactionRecord {
    char const *name;
    char const *filePath;
};

void hw7(struct HW7TransactionRecord const *transactionRecords, size_t transactionRecordCount);

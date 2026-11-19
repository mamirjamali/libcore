#include "libcore.h"

#include <stdio.h>
#include <string.h>

static int status_matches(LC_Status status, const char *expected)
{
    return strcmp(lc_status_string(status), expected) == 0;
}

int main(void)
{
    if (!status_matches(LC_OK, "Success") ||
        !status_matches(LC_ERROR_INVALID_ARGUMENT, "Invalid argument") ||
        !status_matches(LC_ERROR_OUT_OF_MEMORY, "Memory allocation failed") ||
        !status_matches(LC_ERROR_OUT_OF_BOUNDS, "Index out of bounds") ||
        !status_matches(LC_ERROR_OVERFLOW, "Arithmetic overflow") ||
        !status_matches(LC_ERROR_NOT_FOUND, "Not found") ||
        !status_matches(LC_ERROR_UNSUPPORTED, "Operation unsupported") ||
        !status_matches((LC_Status)999, "Unknown error"))
    {
        fputs("Status string test failed\n", stderr);
        return 1;
    }

    return 0;
}

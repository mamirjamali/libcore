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
        !status_matches(LC_ERROR_OUT_OF_MEMORY, "Out of memory") ||
        !status_matches(LC_ERROR_OUT_OF_BOUNDS, "Out of bounds") ||
        !status_matches(LC_ERROR_OVERFLOW, "Overflow") ||
        !status_matches(LC_ERROR_NOT_FOUND, "Not found") ||
        !status_matches(LC_ERROR_UNSUPPORTED, "Unsupported") ||
        !status_matches((LC_Status)999, "Unknown status"))
    {
        fputs("Status string test failed\n", stderr);
        return 1;
    }

    return 0;
}


#include <stdio.h>
#include "libcore.h"

int main(void)
{
    LC_Status status = LC_ERROR_OUT_OF_MEMORY;

    printf("Status code: %d\n", status);
    printf("Status message: %s\n", lc_status_string(status));

    return 0;
}

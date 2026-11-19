
#include "libcore.h"

const char *lc_status_string(LC_Status status)
{
    switch (status) {
        case LC_OK:
            return "Success";

        case LC_ERROR_INVALID_ARGUMENT:
            return "Invalid argument";

        case LC_ERROR_OUT_OF_MEMORY:
            return "Memory allocation failed";

        case LC_ERROR_OUT_OF_BOUNDS:
            return "Index out of bounds";

        case LC_ERROR_OVERFLOW:
            return "Arithmetic overflow";

        case LC_ERROR_NOT_FOUND:
            return "Not found";

        case LC_ERROR_UNSUPPORTED:
            return "Operation unsupported";

        default:
            return "Unknown error";
    }
}

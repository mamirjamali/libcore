
#ifndef LIBCORE_H
#define LIBCORE_H

#ifdef __cplusplus
extern "C"
{
#endif

    typedef enum
    {
        LC_OK = 0,
        LC_ERROR_INVALID_ARGUMENT,
        LC_ERROR_OUT_OF_MEMORY,
        LC_ERROR_OUT_OF_BOUNDS,
        LC_ERROR_OVERFLOW,
        LC_ERROR_NOT_FOUND,
        LC_ERROR_UNSUPPORTED
    } LC_Status;

    const char *lc_status_string(LC_Status status);

#ifdef __cplusplus
}
#endif

#endif /* LIBCORE_H */

# libcore

libcore is a C library that currently provides status codes and a helper for
turning them into readable strings.

## Build and test

```sh
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

To install the library and public header:

```sh
cmake --install build --prefix <install-directory>
```

## Use

```c
#include <libcore.h>

const char *message = lc_status_string(LC_ERROR_INVALID_ARGUMENT);
```

Link your program with the `libcore` library.

## License

libcore is distributed under the MIT License. See [LICENSE](LICENSE).

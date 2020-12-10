# chiron - single file library for C & C++ programming
chiron is header only a collection of useful functions, declarations and definitions for fast C and C++ programming.
Depends on standard library of language that you're using.

To use library:
```c
/* in header's */
#include "chiron.h"

/* and in one of implementation files */
#define Chi_Implementation
#include "chiron.h"
```

## Documentation
Currently code documents itself.

## Note if you want to contribute
File `chiron.h` is automatically generated using `create_chiron.sh`.
All definitions and implementations that you may would like to change are in `src/` directory.

## Similar (and more mature) projects
* [stb libraries](https://github.com/nothings/stb)
* [gb library](https://github.com/gingerBill/gb)

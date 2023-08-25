#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct MyStruct;

uint8_t return_assoc(const struct MyStruct *struct_);

uint8_t arg_assoc(uint8_t assoc_type);

uint8_t add(uint8_t a, uint8_t b);

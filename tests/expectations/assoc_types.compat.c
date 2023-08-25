#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct MyStruct MyStruct;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

uint8_t return_assoc(const MyStruct *struct_);

uint8_t arg_assoc(uint8_t assoc_type);

uint8_t add(uint8_t a, uint8_t b);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

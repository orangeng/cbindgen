#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

struct MyStruct;

extern "C" {

uint8_t return_assoc(const MyStruct *struct_);

uint8_t arg_assoc(uint8_t assoc_type);

uint8_t add(uint8_t a, uint8_t b);

} // extern "C"

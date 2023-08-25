from libc.stdint cimport int8_t, int16_t, int32_t, int64_t, intptr_t
from libc.stdint cimport uint8_t, uint16_t, uint32_t, uint64_t, uintptr_t
cdef extern from *:
  ctypedef bint bool
  ctypedef struct va_list

cdef extern from *:

  cdef struct MyStruct:
    pass

  uint8_t return_assoc(const MyStruct *struct_);

  uint8_t arg_assoc(uint8_t assoc_type);

  uint8_t add(uint8_t a, uint8_t b);

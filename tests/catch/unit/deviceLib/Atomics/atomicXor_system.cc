#include "../device_tests_common.hh"
GENERATE_KERNEL_ATOMICS(atomicXor_system_int, int, atomicExch_system((int*)nullptr, (int)1))
GENERATE_KERNEL_ATOMICS(atomicXor_system_usigned_int, unsigned int, atomicExch_system((unsigned int*)nullptr, (unsigned int)1))
GENERATE_KERNEL_ATOMICS(atomicXor_system_unsigned_long_long, unsigned long long, atomicExch_system((unsigned long long*)nullptr, (unsigned long long)1))
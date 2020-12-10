#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef float f32;
typedef double f64;

typedef size_t usize;
typedef ptrdiff_t isize;

#ifndef Chi_Endian
	#define Chi_Is_Big_Endian (!*(u8*)&(u16){1})
	#define Chi_Is_Little_Endian (!Chi_Is_Big_Endian)
#endif


#ifndef NULL
#define NULL ((void*)0)
#endif

#define Chi_Inline __attribute__((__always_inline__))
#define Chi_No_Inline __attribute__((noinline))

#define Chi_Offset_Of(Type, Element) ((usize)&(((Type *)0)->Element))
#define Chi_Align_Of(Type) Chi_Offset_Of(struct { char c; Type member; }, member)


#define Chi_Swap(Type, A, B) do { Type chi_inner_temp = (A); (A) = (B); (B) = chi_inner_temp; } while(0)


#define Chi_Kilobytes(X) (             (X) * (usize)1024)
#define Chi_Megabytes(X) (Chi_Kilobytes(X) * (usize)1024)
#define Chi_Gigabytes(X) (Chi_Megabytes(X) * (usize)1024)
#define Chi_Terabytes(X) (Chi_Terabytes(X) * (usize)1024)

#define Chi_Ensure(Condition) if (!(Condition)) exit(1)

#define Chi_Count(Static_Array) (sizeof(Static_Array) / sizeof(*(Static_Array)))

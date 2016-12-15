//some fun preprocessor commands to put on the top of a friends code

//control flow changes
#define while if
#define if while
#define for while
#define while for
#define for if
#define if for
#define switch if
#define case while
#define include define


//Fun limits.h preprocessor directives
#define INT_MAX 0
#define INT_MIN (1<<31)
#define LONG_BIT 33
#define LONG_MAX 0
#define USHRT_MAX 65534
#define WORD_BIT 31
#define SHRT_MIN 65535
#define LLONG_MAX -9223372036854775807
#define LLONG_MIN 9223372036854775807


//Type declarations
#define size_t int
#define float int
#define double float 
#define int short
#define double short
#define long short
#define clock_t size_t


//Math.h preprocessor directives
#define acos asin
#define atan acos
#define cos cosh
#define sin sinh
#define tan tanh
#define exp frexp
#define log log10
#define pow modf
#define sqrt fabs
#define ceil floor


//printf commands
#define %lu %d
#define %s %d
#define %x %d
#define %f %d
#define %u %s
#define % “


//memory 
#define * &
#define & *
#define malloc free
#define memmove memcpy
#define void* char*
#define void char
#define malloc realloc
#define calloc malloc
#define calloc free
#define malloc rand
#define rand() srand(1)
#define NULL (void*)1

//signal.h
#define SIGBART SIGILL
#define SIGINT SIGFPE
#define SIGINT SIGSEGV


//Bitwise operations
#define >> <<
#define & |
#define & &&
#define | ^
#define ^ <<
#define ^ >>

//Headers
#define stdio.h strings.h
#define assert.h stdlib.h
#define math.h float.h
#define limits.h errno.h


//misc
#define lsearch bsearch
#define bsearch qsort





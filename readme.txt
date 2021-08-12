tiny:

csup.rel for tiny hi-tech applications and "assembler replacement"

Support routines for HI-TECH C 3.09

All assembler code, MACRO-80

This contains all needed primitive functions that the compiler will
generate. stdarg.h and stddef.h included because these also relate
to code generation.

Will allow use of HI-TECH C, along with objtomac to make low level
routines that can be called from FORTRAN, BASIC, etc.

To use csup.rel:

l80 program,csup.rel/s

If zcrtcpm is not used, clib.rel is not a dependency. csup.rel should
satisfy all requirements. But, there is absolutely no run-time library.
In-line assembler can be used.

Note that csup.rel does contain the minimal floating point needed by
HI-TECH C compiled code.


/* Useful if you wish to make target-specific GCC changes. */
#undef TARGET_SHITOS
#define TARGET_SHITOS 1

#undef LIB_SPEC
#define LIB_SPEC "-lc -lg -lm -lnosys"

#undef STARTFILE_SPEC
#define STARTFILE_SPEC "crt0.o%s crti.o%s crtbegin.o%s"

#undef ENDFILE_SPEC
#define ENDFILE_SPEC "crtend.o%s crtn.o%s"

#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS()      \
  do {                                \
    builtin_define ("__shitos__");      \
    builtin_define ("__unix__");      \
    builtin_assert ("system=shitos");   \
    builtin_assert ("system=unix");   \
    builtin_assert ("system=posix");   \
  } while(0);

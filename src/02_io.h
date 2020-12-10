#if defined(__clang__) || defined(__GNUC__)
	#define Chi_Check_Format(Std_Func, Arg_Index) __attribute__ ((format(Std_Func, Arg_Index, Arg_Index + 1)))
#else
	#define Chi_Check_Format(Std_Func, Arg_Index)
#endif

Chi_Check_Format(scanf, 2)
int chi_scan_file(char const *filename, char const *format, ...);

Chi_Check_Format(printf, 2)
int chi_print_file(char const *filename, char const *format, ...);

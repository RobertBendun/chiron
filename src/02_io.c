#include <stdio.h>
#include <stdarg.h>

int chi_scan_file(char const *filename, char const *format, ...)
{
	FILE *f = fopen(filename, "r");
	if (f == NULL)
		return 0;

	va_list args;
	va_start(args, format);
	int ret = vfscanf(f, format, args);
	va_end(args);
	fclose(f);
	return ret;
}

int chi_print_file(char const *filename, char const *format, ...)
{
	FILE *f = fopen(filename, "w");

	va_list args;
	va_start(args, format);
	int ret = vfprintf(f, format, args);
	va_end(args);

	fclose(f);
	return ret;
}

#define __LIBRARY__
#include <unistd.h>
#include <stdarg.h>

int fcntl(int fildes, int cmd, ...)
{
	register int res;
	va_list arg;

	va_start(arg,cmd);
	__asm__("int $0x80"
		:"=a" (res)
		:"0" (__NR_fcntl),"b" (fildes),"c" (cmd),
		"d" (va_arg(arg,int)));
	if (res>=0)
		return res;
	errno = -res;
	return -1;
}

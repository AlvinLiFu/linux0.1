#
# Makefile for some ansi-library functions
#

OBJS = _exit.o access.o acct.o alarm.o brk.o chdir.o chmod.o chown.o \
chroot.o close.o creat.o dup.o dup2.o exec.o execp.o execve.o fcntl.o \
fork.o fstat.o getegid.o geteuid.o getgid.o getpid.o getppid.o getuid.o \
getpgrp.o ioctl.o kill.o link.o lseek.o mkdir.o mknod.o mount.o nice.o \
open.o pause.o pipe.o read.o rmdir.o setgid.o setpgrp.o setsid.o setuid.o \
signal.o stat.o stime.o sync.o time.o times.o ulimit.o umask.o umount.o \
uname.o unlink.o ustat.o utime.o wait.o write.o

LIB	=../Libc.a
AR	=gar
AS	=gas
LD	=gld
LDFLAGS	=-s -x
CC	=gcc
#INC	=-nostdinc -I/linux/usr/include
CFLAGS	=-Wall -O -fstrength-reduce -fomit-frame-pointer -fcombine-regs \
	-finline-functions -mstring-insns $(INC)
CPP	=gcc -E $(INC)

.c.s:
	$(CC) $(CFLAGS) \
	-S -o $*.s $<
.s.o:
	$(AS) -c -o $*.o $<
.c.o:
	$(CC) $(CFLAGS) \
	-c -o $*.o $<

all: $(LIB)

$(LIB): $(OBJS)
	$(AR) rc $(LIB) $(OBJS)
	sync

clean:
	rm -f core *.o *.a tmp_make
	for i in *.c;do rm -f `basename $$i .c`.s;done

dep:
	sed '/\#\#\# Dependencies/q' < Makefile > tmp_make
	(for i in *.c;do echo -n `echo $$i | sed 's,\.c,\.s,'`" "; \
		$(CPP) -M $$i;done) >> tmp_make
	cp tmp_make Makefile

### Dependencies:
_exit.s _exit.o : _exit.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
access.s access.o : access.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
acct.s acct.o : acct.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
alarm.s alarm.o : alarm.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
brk.s brk.o : brk.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
chdir.s chdir.o : chdir.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
chmod.s chmod.o : chmod.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
chown.s chown.o : chown.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
chroot.s chroot.o : chroot.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
close.s close.o : close.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
creat.s creat.o : creat.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
dup.s dup.o : dup.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
dup2.s dup2.o : dup2.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
exec.s exec.o : exec.c /usr/include/sys/types.h /usr/include/sys/stat.h \
  /usr/include/errno.h /usr/include/unistd.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h /usr/include/stdlib.h \
  /usr/include/limits.h /usr/include/string.h 
execp.s execp.o : execp.c /usr/include/sys/types.h /usr/include/sys/stat.h \
  /usr/include/errno.h /usr/include/unistd.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h /usr/include/stdlib.h \
  /usr/include/limits.h /usr/include/string.h 
execve.s execve.o : execve.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
fcntl.s fcntl.o : fcntl.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h /usr/include/stdarg.h 
fork.s fork.o : fork.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
fstat.s fstat.o : fstat.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
getegid.s getegid.o : getegid.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
geteuid.s geteuid.o : geteuid.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
getgid.s getgid.o : getgid.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
getpgrp.s getpgrp.o : getpgrp.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
getpid.s getpid.o : getpid.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
getppid.s getppid.o : getppid.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
getuid.s getuid.o : getuid.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
ioctl.s ioctl.o : ioctl.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h /usr/include/stdarg.h 
kill.s kill.o : kill.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
link.s link.o : link.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
lseek.s lseek.o : lseek.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
mkdir.s mkdir.o : mkdir.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
mknod.s mknod.o : mknod.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
mount.s mount.o : mount.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
nice.s nice.o : nice.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
open.s open.o : open.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h /usr/include/stdarg.h 
pause.s pause.o : pause.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
pipe.s pipe.o : pipe.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
read.s read.o : read.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
rmdir.s rmdir.o : rmdir.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
setgid.s setgid.o : setgid.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
setpgrp.s setpgrp.o : setpgrp.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
setsid.s setsid.o : setsid.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
setuid.s setuid.o : setuid.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
signal.s signal.o : signal.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h /usr/include/signal.h 
stat.s stat.o : stat.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
stime.s stime.o : stime.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
sync.s sync.o : sync.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
time.s time.o : time.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
times.s times.o : times.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
ulimit.s ulimit.o : ulimit.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
umask.s umask.o : umask.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
umount.s umount.o : umount.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
uname.s uname.o : uname.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
unlink.s unlink.o : unlink.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
ustat.s ustat.o : ustat.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
 utime.o : utime.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 
 wait.o : wait.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h /usr/include/sys/wait.h 
 write.o : write.c /usr/include/unistd.h /usr/include/sys/stat.h \
  /usr/include/sys/types.h /usr/include/sys/times.h \
  /usr/include/sys/utsname.h /usr/include/utime.h 

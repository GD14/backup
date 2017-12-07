include ../Make.defines

PROGS = my_lseek my_hole my_copy my_fcntl test

all:	${PROGS}

%:	%.c
	${CC} ${CFLAGS}  $@.c -o $@ ${LIBS}


clean:
		rm -f ${PROGS} ${CLEANFILES}



include ../Make.defines

PROGS = stat access mftw getcwd

all:	${PROGS}

%:	%.c
	${CC} ${CFLAGS}  $@.c -o $@ ${LIBS}


clean:
		rm -f ${PROGS} ${CLEANFILES}



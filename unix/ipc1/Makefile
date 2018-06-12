include ../Make.defines

PROGS = my_pipe1 my_pipe2 my_popen test

all:	${PROGS}

%:	%.c
	${CC} ${CFLAGS}  $@.c -o $@ ${LIBS}


clean:
		rm -f ${PROGS} ${CLEANFILES}



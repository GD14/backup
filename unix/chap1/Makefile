include ../Make.defines

PROGS = my_ls my_echo my_stdio my_exec my_signal 

all:	${PROGS}

my_ls:	my_ls.o
	${CC} ${CFLAGS} -o $@ my_ls.o ${LIBS}
my_echo: my_echo.o
	${CC} ${CFLAGS} -o $@ my_echo.o ${LIBS}
	@echo $@
my_stdio: my_stdio.o
	${CC} ${CFLAGS} -o $@ my_stdio.o ${LIBS} 
my_exec:	my_exec.o
	${CC} ${CFLAGS} -o $@ my_exec.o ${LIBS}
my_signal: my_signal.o
	${CC} ${CFLAGS} -o $@ my_signal.o ${LIBS}
clean:
		rm -f ${PROGS} ${CLEANFILES}


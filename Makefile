###############
## Makefile
###############

all:
	( cd message;make all )
	( cd protocol;make all )
	( cd transport;make all )
	( cd schemaAdaptor;make all )
	( cd channel;make all )

clean:
	( cd message; make clean )
	( cd protocol;make clean )
	( cd transport;make clean )
	( cd schemaAdaptor;make clean )
	( cd channel;make clean )

run:
	( cd src;make run)

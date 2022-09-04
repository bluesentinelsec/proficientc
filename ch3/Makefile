
CC = wcl
CFLAGS = -bcl=dos -mm -d3 -od

simplecp: simplecp.c
	$(CC) $(CFLAGS) simplecp.c

replay: replay.c getpname.c
	$(CC) $(CFLAGS) replay.c getpname.c

showenv: showenv.c getpname.c
	$(CC) $(CFLAGS) showenv.c getpname.c

clean:
	del /F /Q *.obj
	del /F /Q *.exe
	del /F /Q *.err
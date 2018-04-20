OBJ = main.o function.o 
APPNAME = graph.a 
TAR = final.tar 
$(APPNAME):$(OBJ)
	gcc -o $(APPNAME) $(OBJ) -lm
%.o:%.c
	gcc -c -o $@ $<
#main.o:main.c
#   gcc -c main.c
clean:
	rm $(OBJ) $(APPNAME)
archive:
	tar cf $(TAR) *

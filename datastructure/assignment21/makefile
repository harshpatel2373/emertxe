OBJ:= $(patsubst %.c, %.o, $(wildcard *.c))
Slist.exe: $(OBJ)
	gcc -o $@ $^  
clean:
	rm *.o *.exe

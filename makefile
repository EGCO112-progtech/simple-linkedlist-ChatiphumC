compile: main.c 
	 gcc main.c -o atom

run: atom
	 ./atom

clean: atom
	 rm atom

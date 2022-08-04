ok:
	clear
	echo "i have very little patience for your malarkey, shienanigans, or tomfoolery"
build:
	gcc metrosys.c -o metro.exe
run:
	./metro.exe
gdb:
	gdb ./metro
debug:
	gcc -o metro metrosys.c -g


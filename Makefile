CC := gcc
#CFLAGS := 
DEST := ./build

random: create_file.c
	mkdir -p $(DEST)
	$(CC) create_file.c -lcs50 -o $(DEST)/create_file
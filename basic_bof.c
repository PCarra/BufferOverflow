#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check_for_overflow(char *data_string){
	//char buffer2[8] = { 0, 0, 0, 0, 0, 0, 0, 0};
	//char buffer1[8] = { 0, 0, 0, 0, 0, 0, 0, 0};
	char buffer2[8];
	char buffer1[8];
	strcpy(buffer1, data_string);
        printf("Buffer one contains: %s \n", buffer1);
        printf("Buffer two contains: %s ", buffer2);
}


int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s <data string>\n", argv[0]);
		exit(0);
	}

	check_for_overflow(argv[1]);
	return 0;
}

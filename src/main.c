#include "mylib.h"

int main(int argc, char *argv[]){
	if(argc == 2 && !strcmp(argv[1], "-r"))
		random_inquiry();
	else
		inquiry();
	return (0);
}

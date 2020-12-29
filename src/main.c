#include "mylib.h"

int main(int argc, char *argv[]){
	printf("program started \n");
	int database[DATABASE_NUMBER][DATABASE_TYPE];
	array_init(DATABASE_NUMBER, DATABASE_TYPE, database);

	printf("array_init finished! \n");

	if (argc == 2 && !strcmp(argv[1], "-r")){
		random_inquiry(DATABASE_NUMBER, DATABASE_TYPE, database);
		printf("random_inquiry finished! \n");
	} else {
		inquiry();
		printf("inquiry finished! \n");
	}
	database_printf(DATABASE_NUMBER, DATABASE_TYPE, database);
	return (0);
}

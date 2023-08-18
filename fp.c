#include <stdio.h>
#include <stdlib.h>

int somefunc(int integer, const char* characters){
	
	printf("Your integer is %i\n",integer);
	printf("Your characters are %s\n",characters);
	printf("I can print characters as integers with atoi() and that means it looks like %i\n",atoi(characters));
	return integer + *characters;
}

int main(int argc, char* argv[]){

	char* l = NULL;	//	initialise reading variable
	size_t nb = 0;	//	line length
	float f = (float)atof(argv[1]);	//	double atof (const char* str);
	char somechars[3];	//	set up our character array
	for( int i = 0; i < 3; i++ )	//	loop and fill our character array
		somechars[i] = (char)('a' + rand()%26);	//	bad code for this would be to do rand()%127 to be using the entire ASCII space instead of just the alphabet

	printf("Argument supplied is:%f\n",f);	//	these are all hopefully pretty obvious...
	printf("The integer part of the supplied argument added to some random 3-length string is %i\n",somefunc((int)f,somechars));

	if (f < 0.7){
		printf("Less than 0.7\n");
	}else{
		printf("More than or equal to 0.7\n");
	}
	if (f < 1.7){
		printf("Less than 1.7\n");
	}else{
		printf("More than or equal to 1.7\n");
	}
	if(argc > 2){
		printf("The REAL argument supplied is:%1.9f\n",f);
	}

	while( getline(&l, &nb, stdin) > -1 ){	//	output the file passed to stdin
		printf("%s\n",l);
	}

	int pointProving = (int)f;
	printf("This is an integer of the input that is set much later in the prgoram file:%i\n",pointProving);
}

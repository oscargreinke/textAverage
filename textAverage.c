#include <stdio.h>


int main(){

	char thing1[1000] = {'P','r','i','d','e',' ','i','n',' ','H','u','m','a','n','i','t','y', '\n'};
	char thing2[1000] = {'Q','u','o','d',' ','d','o','m','i','n','i','u','m',' ','s','u','p','e','r',' ','o','m','n','i','a','\n'};
	char thing3[1000];
/*
	printf("Enter thing 1: ");
	scanf(" %s", &thing1);

	printf("Enter thing 2: ");
	scanf(" %s", &thing2);
*/
	unsigned int counter = 0;
	unsigned int average = 0;
	unsigned int averageChar = 0;

	while(1){
		printf("Doing the averaging\n");
		if(thing1[counter] == '\n' || thing2[counter] == '\n'){
			break;
		}
		average += thing1[counter];
		average += thing2[counter];
		averageChar += thing2[counter];
		averageChar += thing1[counter];
		average /= 2;
		thing3[counter] = average;

		average = 0;
		counter++;
	}
	averageChar /= counter;
	
	int i;
	printf("Average String\n");
	for(i = 0; i < counter; i++){
		printf("%c", thing3[i]);	
	}
	printf("\n");
	printf("Average character\n");
	printf("%c\n", averageChar );

}
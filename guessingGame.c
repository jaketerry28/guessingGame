#include <stdio.h> 	// input/output printing
#include <stdlib.h>	// used to seed and gen random numbers using srand()/rand()
#include <time.h>	// time() seed based on timing

/* declare boolean constants
 * C does not have built in bool data type unless <stdbool.h> is imported
 * Bool in C are represented by integers. Any int that is not 0 (FALSE) is considered TRUE
 */
#define TRUE -1
#define FALSE 0

void scoring (int*);

int main(){
	// Create variables
	int guess;
	int correct;
	int guessing = TRUE;	
	int tries = 0;

	// Welcome user
	char name[20];
	printf("What is your name? \n");
	scanf("%s", name);
	printf("Hello, %s! \n", name);

	// Generate random int from 1-100
	srand(time(NULL)); // seeds based on time
	correct = (rand() % 100) + 1;
	//printf("%d \n", correct);

	// Ask user to guess
	printf("Guess a number between 1-100. \n");

	// start game
	while (guessing == TRUE){
	
		scanf("%d", &guess);

		// increment per guess	
		tries++;
		
		// conditionals
		if (guess < correct){
			printf("Guess too low \n");
		} // end if
		if (guess > correct){
			printf("Guess too high \n");
		} // end if
		if (guess == correct){
			printf("Correct \n");
			printf("Score: %d guesses \n", tries);
			scoring(&tries);
			guessing = FALSE;
		} // end if
	} // end while
	return(0);
} // end main


void scoring (int* varPtr){
	if (*varPtr < 7){
		printf("Great \n");
	} // end if
	if (*varPtr == 7){
		printf("Good \n");
	} // end if
	if (*varPtr > 7){
		printf("You can do better. \n");
	} // end if
} // end scoring

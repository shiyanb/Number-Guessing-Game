/*
 * Lab 3 - Guess a Number
 *
 *   Samantha Lynch, 17scl5, 20112274
 *   Shiyan Boxer, 17sb79, 20106887
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXTURNS 3 
#define MAXNUM 10
#define MINNUM 1

int main(int argc, char **argv)
{
	int randNum;  //random number chosen by the computer
    int guess;  //guess entered by the user
    int isGameWon;  //flag to record if the user won the game 
    int turn;  //current turn
    int i;
    
    srand(time(NULL));  //set the starting speed from the current time
    randNum = (rand() % (MAXNUM - MINNUM + 1)) + MINNUM;  //generate a random number between 1 and 10
	isGameWon = 0;	// Assume game not won.
	
	// continue the loop until the user is out of turns 
	for(i=0; i<3; i++){
        
      do{
        printf("Enter a number between %d and %d \n", MINNUM, MAXNUM);  // Tell the user to enter a number between 1 and 10.
        
        scanf("%d", &guess);  // Read the users guess and put the integer into the variable guess

       
         //if the guess is correct, set the flag and break
        if(guess == randNum){ 
        isGameWon = 1;
        break; //if the guess was correct exit the loop
        }  
    
        //if the guess was too low tell the user to guess higher
        else if(guess<randNum){
        printf("Guess higher \n");
        }
    
        //if the guess was too high tell the user to guess lower
        else if(guess>randNum){
        printf("Guess lower \n");
        }    
        } while (guess<1, guess>10);
    }
		
	
    // if the guess was correct tell the user they win.
    if(isGameWon==1){
        printf("You Win! \n");
    }
    
    // if the guess was incorrect tell the user they lose and what the random number was.
    if(isGameWon==0){
        printf("Sorry the number was %d \n", randNum);
    }
    
    
}

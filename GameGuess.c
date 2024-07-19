#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int randomNumber;
  int remainingGuesses = 5;

srand(time(NULL));
randomNumber = rand() % 100 + 1;
loopAgain:
printf("I'm thinking of a number between 1 and 100. You have %d, guesses.\n", remainingGuesses);

for(int i = 1; i <= remainingGuesses; i++){
  printf("Guess %d: ", i);
  int userGuess;
  //scanf(" %d", userGuess);

  if(scanf(" %d", &userGuess) != 1){
    printf("Incorret. Try Again");
    scanf("%*[^\n]");
  continue;
  }
  if(userGuess == randomNumber){
    printf("CONGRATULATIONS. YOU WON\n");
    goto loopAgain;
  }
  if(userGuess > randomNumber){
    printf("Too High\n");
  }
  if(userGuess < randomNumber){
    printf("Too Low\n");
  }
  if(i == remainingGuesses){
    printf("The Right Number is: %d  ", randomNumber);
    printf("\n");
    goto loopAgain;
  }
  
  }



  return 0;
}
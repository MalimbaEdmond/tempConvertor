#include<stdio.h>

int main(){
float answer, userInput1, userInput2;
int operator;

printf("********SIMPLE CALCULATOR***********\n");
printf("You will be required to Enter your Numbers to be calculated\n");

printf("Enter your firstNumber\n ");
scanf(" %f", &userInput1);

loopInput:
printf("Enter your secondNumber\n ");
scanf(" %f", &userInput2);

loopStart:
printf("CHOSE AN OPERATOR\n");
printf("###### Chose 1 for Addition(+)\n");
printf("###### Chose 2 for Subtraction(-)\n");
printf("###### Chose 3 for Multiplication(*)\n");
printf("###### Chose 4 for Division(/)\n");
scanf(" %d", &operator);

if(operator == 1){
    answer = userInput1 + userInput2;
    printf("Your Answer for %f + %f is: %f",userInput1, userInput2, answer);
}
if(operator == 2){
    answer = userInput1 - userInput2;
    printf("Your Answer for %f - %f is: %f",userInput1, userInput2, answer);
}
if(operator == 3){
    answer = userInput1 * userInput2;
    printf("Your Answer for %f * %f is: %f",userInput1, userInput2, answer);
}
if(operator == 4 && userInput2 == 0){
        perror("Division by Zero is not allowed");
        goto loopInput;
        answer = userInput1 / userInput2;
    printf("Your Answer for %f / %f is: %f",userInput1, userInput2, answer);
    
}
if(operator < 1 || operator > 4){
    fprintf(stderr, "Invalid Input! Try Again\n");
    goto loopStart;
}
return 0;
}
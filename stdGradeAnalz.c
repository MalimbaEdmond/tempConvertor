#include <stdio.h>

int asignLetterGrade(float stuScore[], int classSize) {
    char letter[5] = {'A', 'B', 'C', 'D', 'F'};
    int countA = 0;
    int countB = 0;
    int countC = 0;
    int countD = 0;
    int countF = 0;

    for (int i = 0; i < classSize; i++) {
        if (stuScore[i] >= 90) {
            printf("Student %d %.2f Grade is: %c\n", i + 1, stuScore[0], letter[0]);
            countA++;
        } else if (stuScore[i] >= 80 && stuScore[i] <= 89) {
            printf("Student %d  %.2f Grade is: %c\n", i + 1, stuScore[1],letter[1]);
            countB++;
        } else if (stuScore[i] >= 70 && stuScore[i] <= 79) {
            printf("Student %d  %.2f Grade is: %c\n", i + 1, stuScore[2],letter[2]);
            countC++;
        } else if (stuScore[i] >= 60 && stuScore[i] <= 69) {
            printf("Student %d  %.2f Grade is: %c\n", i + 1, stuScore[3], letter[3]);
            countD++;
        } 
        else {
            printf("Student %d  %.2f Grade is: %c\n", i + 1, stuScore[4], letter[4]);
            countF++;
        }
            
        }
        float sum = 0;
    for(int i = 0; i < classSize; i++){
        sum += stuScore[i];
    }
     printf("The Total class Score is: %.2f\n\n", sum);
    
     float average = sum/classSize;
     printf("The Average Score is: %.2f\n\n", average);

     printf("Students with A's %d\n\n", countA);
     printf("Students with B's %d\n\n", countB);
     printf("Students with C's %d\n\n", countC);
     printf("Students with D's %d\n\n", countD);
     printf("Students with F's %d\n\n", countF);
    return 0;
}

void error(){
         printf("Would You Like to Analyze Another Class?\n");
            printf("Enter y OR Y for Yes and n OR N for No.\n");
            char chose;
            newLoop:
            scanf(" %c", &chose);
            scanf("%*[^\n]");
            
           if(chose == 'y' || chose == 'Y'){
               printf("Let us Start\n");
            }
            if(chose == 'n' || chose == 'N') {
               printf("THANK YOU FOR USING OUR APP\n");
                }
            else{
                fprintf(stderr,("Invalid Entry!"));
            }
}

int main() {
    loopAgain:
    printf("An App to Analyze Your Grades\n");

loopStart:
    printf("What is the Total number of students in the Class\n");
    int classSize;
    scanf(" %d", &classSize);
    scanf("%*[^\n]"); 

    while (classSize < 0) {
        perror("Invalid Class Size! Re-Enter\n");
        goto loopStart;
    }

    float stuScore[classSize];
    for (int i = 0; i < classSize; i++) {
    loopEnter:
        printf("Enter the Score for Each Student\n");
        scanf(" %f", &stuScore[i]);
        scanf("%*[^\n]"); 

        if (stuScore[i] < 0 || stuScore[i] > 100) {
            fprintf(stderr, "Not Valid! Re-Enter\n");
          goto loopEnter;
        }

    }
      

    asignLetterGrade(stuScore, classSize); 
    error();
goto loopAgain;
    return 0;
}
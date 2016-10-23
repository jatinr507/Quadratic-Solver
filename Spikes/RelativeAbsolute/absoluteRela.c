#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void calculateAbsoluteError(float realAnswer,float calculatedAnswer){
    float absoluteError = realAnswer-calculatedAnswer;
    printf("Absolute Error is :%f\n",absoluteError);
}
void calculateRelativeError(float realAnswer,float calculatedAnswer){
    float absoluteError = realAnswer - calculatedAnswer;
    float relativeError = absoluteError/realAnswer;
    printf("Relative Error is :%f\n ",relativeError);
}
int main(int argc, char** argv) {
  float calculatedAnswer;
  float actualAnswer;
  printf("Please enter the calculated answer: ");
  scanf("%f",&calculatedAnswer);
  printf("\nPlease enter the actual answer: ");
  scanf("%f",&actualAnswer);
  printf("\n");
  calculateAbsoluteError(actualAnswer,calculatedAnswer);
  calculateRelativeError(actualAnswer,calculatedAnswer);
  return (EXIT_SUCCESS);
}


#include <stdio.h>
#include <math.h>
float functionValue(float x)
{
      float res;
      res = sin(x);
      return res;
}
float iterationValue(float startInterval, float finishInterval, float numIterations)
{
      float res;
      res = (finishInterval - startInterval)/(numIterations - 1);
      return res;
}
void  functionFor(float startInterval, float finishInterval, float numIterations)
{     float iteration, res, x, i;
      iteration = iterationValue(startInterval, finishInterval, numIterations);
      printf("for:\n");
      for (i = startInterval; i <= finishInterval; i += iteration)
      {
            x = i;
            res = functionValue(x);
            printf("x   |%.3f|\n", x);
            printf("f(X)|%.3f|\n", res);
      }
}
void  functionWhile(float startInterval, float finishInterval, float numIterations)
{
      float iteration, res, x, i;
      iteration = iterationValue(startInterval, finishInterval, numIterations);
      i = startInterval;
      printf("while:\n");
      while (i <= finishInterval)
      {
            x = i;
            res = functionValue(x);
            printf("x   |%.3f|\n", x);
            printf("f(X)|%.3f|\n", res);
            i += iteration;
            
      }
}
void  functionDoWhile(float startInterval, float finishInterval, float numIterations)
{
      float iteration, res, x, i;
      iteration = iterationValue(startInterval, finishInterval, numIterations);
      i = startInterval;
      printf("do while:\n");
      do
      {
            x = i;
            res = functionValue(x);
            printf("x   |%.3f|\n", x);
            printf("f(X)|%.3f|\n", res);
            i += iteration;
      } while (i <= finishInterval);
}

int main() {
      float startInterval, finishInterval, numIterations;
      printf("enter num start interval\n");
      scanf("%f", &startInterval);
      printf("num finish interval\n");
      scanf("%f", &finishInterval);
      printf("num iteratoins\n");
      scanf("%f", &numIterations);
      functionFor(startInterval, finishInterval, numIterations);
      functionWhile(startInterval, finishInterval, numIterations);
      functionDoWhile(startInterval, finishInterval, numIterations);
      return 0;
}

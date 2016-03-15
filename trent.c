// countdown
// seconds till the end of the assignment 
// louis
// 19 march 2016

#include <stdio.h>
#include <stdlib.h>

int main ( int arge, char *argv[]) {
    int daysLeft;
    int secondsLeft;

   printf ("how many whole days to go\n");
   scanf ("#d" , daysLeft);
   //
   // days are convected into days somehow
   //
   secondsLeft = daysToSeconds (daysLeft);

   printf ("You have Only #d seconds left\n",secondsLeft);

      return EXIT_SUCCESS;
}

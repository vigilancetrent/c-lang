#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){
   char password = “trent”;
   char input[11] = {0};
   int bpassaccept = 0;
   strcpy(input, argv[1]);
   if (strcmp(input , password)==0){
      bpassaccept = 1;
   }
   if (bpassaccept != 0){
      grantaccess();
   }
   return 0;
}

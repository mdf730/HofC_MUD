#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "parsexec.h"

#define RESET          "\x1B[0m"
#define BG           "\x1B[107m"
#define BLACK      "\x1B[30m"

static char input[100] = "look around";

static bool getInput(const char *filename)
{
   static FILE *fp = NULL;
   bool ok;
   if (fp == NULL)
   {
      if (filename != NULL) fp = fopen(filename, "rt");
      if (fp == NULL) fp = stdin;
   }
   else if (fp == stdin)
   {
      FILE *out = fopen(filename, "at");
      if (out != NULL)
      {
         fprintf(out, "%s", input);
         fclose(out);
      }
   }
   printf("\n--> ");
   ok = fgets(input, sizeof(input), fp) != NULL;
   if (fp != stdin)
   {
      if (ok)
      {
         printf("%s", input);
      }
      else
      {
         fclose(fp);
         ok = fgets(input, sizeof(input), fp = stdin) != NULL;
      }
   }
   return ok;
}

/* Reference: https://stackoverflow.com/a/36253316 */
void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

int main(int argc, char *argv[])
{
   printf("Welcome to Little Cave Adventure.\n");
   int flag = 1;
   int move = 0;
   int score = 0;
   clear();
   printf(BG BLACK " MUD | LOCATION: %s | MOVES: %d | SCORE: %d \n" RESET, "Entrance", move++, score);
   printf("You stand in front of the infamous Goblin Gauntlet, vines crawl over the weathered stone doorway carved out of the sheer mountain cliff and a babbling brook falls across the rocks forming pools on the side of the stoneway. It is a sunny day and the chattering of birds can be heard in the distance. A green field is to your back, parted by the roadway that leads back to the safety of your village. But you are not here because it is safe, you are determined to move forward and enter the Goblin Gauntlet; your prize the artifact shrouded in mystery known as the Goblin Goblet.\n");
   while (flag){
      flag = parseAndExecute(input) && getInput(argv[1]);
      clear();
      printf(BG BLACK " MUD | LOCATION: %s | MOVES: %d | SCORE: %d \n" RESET, "Entrance", move++, score);
   }
   printf("\nBye!\n");
   return 0;
}
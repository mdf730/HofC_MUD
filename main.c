#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "parsexec.h"
#include "object.h"
#include "location.h"
#include "misc.h"

#define RESET          "\x1B[0m"
#define BG           "\x1B[107m"
#define BLACK      "\x1B[30m"

static char input[100] = "";

static int getInput(){
   printf("\n> ");
   return fgets(input, sizeof(input), stdin) != NULL;
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

int main(){
   int flag = 1;
   int move = 0;
   clear();
   printf(BG BLACK " MUD | LOCATION: %s | MOVES: %d | HEALTH: %d \n" RESET, "Entrance", move++, player->health);
   printf("You stand in front of the infamous Goblin Gauntlet, vines crawl over the weathered stone doorway carved out of the sheer mountain cliff and a babbling brook falls across the rocks forming pools on the side of the stoneway. It is a sunny day and the chattering of birds can be heard in the distance.\n A green field is to your back, parted by the roadway that leads back to the safety of your village. But you are not here because it is safe, you are determined to move forward and enter the Goblin Gauntlet; your prize the artifact shrouded in mystery known as the Goblin Goblet.\n");
   flag = parseAndExecute(input);
   while (flag){
      flag = flag && getInput();
      clear();
      printf(BG BLACK " MUD | LOCATION: %s | MOVES: %d | HEALTH: %d \n" RESET, player->location->description, move++, player->health);
      flag = flag && parseAndExecute(input);
   }
   printf("\nBye!\n");
   return 0;
}
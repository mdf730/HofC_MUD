#include <ctype.h>
#include <stdio.h>
#include "object.h"
#include "misc.h"
#include "match.h"
#include "location.h"
#include "execute.h"

typedef struct{
   bool (*function)(void);
   const char *pattern;
} COMMAND;

static bool executeQuit(void){
   return false;
}

static bool executeNoMatch(void){
   const char *src = *params;
   if (*src != '\0'){
      printf("I don't know how to '");
      while (*src != '\0' && !isspace(*src)) putchar(*src++);
      printf("'.\n");
   }
   return true;
}

bool parseAndExecute(const char *input){
   static const COMMAND commands[] =
   {
      {executeQuit      , "quit"},
      {executeQuit      , "exit"},
      {executeQuit      , "q"},
      {executeQuit      , "leave"},
      {executeLookAround, "look"},
      {executeLookAround, "look around"},
      {executeLook      , "look at A"},
      {executeLook      , "look A"},
      {executeLook      , "read A"},
      {executeGo        , "go to A"},
      {executeGo        , "go A"},
      {executeGetFrom   , "get A from B"},
      {executeGetFrom   , "ask A for B"},
      {executeGet       , "get A"},
      {executeGet       , "take A"},
      {executePutIn     , "put A in B"},
      {executePutIn     , "drop A in B"},
      {executeDrop      , "drop A"},
      {executeAskFrom   , "ask A from B"},
      {executeAsk       , "ask A"},
      {executeGiveTo    , "give A to B"},
      {executeGive      , "give A"},
      {executeInventory , "inventory"},
      {executeFight     , "fight the A"},
      {executeFight     , "fight A"},
      {executeFight     , "attack A"},
      {executeSay       , "tell B A"},
      {executeSay       , "say A to B"},
      {executeSayWho    , "say A"},
      {executePush      , "push A"},
      {executePush      , "touch A"},
      {executePush      , "press A"},
      {executeNoMatch   , "A"}
   };
   const COMMAND *cmd;
   for (cmd = commands; !matchCommand(input, cmd->pattern); cmd++);
   return (*cmd->function)();
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "object.h"
#include "misc.h"
#include "match.h"
#include "noun.h"
#include "move.h"

bool executeGet(void){
   OBJECT *obj = getVisible("what you want to get", params[0]);
   switch (getDistance(player, obj)){
      case distSelf:
         printf("You should not do that to %s.\n", obj->description);
         break;
      case distHeld:
         printf("You already have %s.\n", obj->description);
         break;
      case distOverthere:
         printf("You're too far away - try moving closer!\n");
         break;
      case distUnknownObject:
         // already handled by getVisible
         break;
      default:
         if (obj->location != NULL && obj->location->health > 0){
            printf("It looks like %s has that item.\n", obj->location->description);
         }else{
            moveObject(obj, player);
         }
   }
   return true;
}

bool executeDrop(void){
   moveObject(getPossession(player, "drop", params[0]), player->location);
   return true;
}

bool executeAsk(void){
   moveObject(getPossession(actorHere(), "ask", params[0]), player);
   return true;
}

bool executeGive(void){
   moveObject(getPossession(player, "give", params[0]), actorHere());
   return true;
}

bool executeGetFrom(void){
   if (getVisible("what you want to get", params[0]) != NULL){
      OBJECT *from = reachableObject("where to get that from", params[1]);
      moveObject(getPossession(from, "get", params[0]), player);
   }
   return true;
}

bool executePutIn(void){
   OBJECT *obj = getPossession(player, "put", params[0]);
   if (obj != NULL){
      OBJECT *to = reachableObject("where to put that in", params[1]);
      moveObject(obj, to);
   }
   return true;
}

bool executeAskFrom(void){
   if (getVisible("what you want to get", params[0]) != NULL){
      OBJECT *from = reachableObject("where to get that from", params[1]);
      moveObject(getPossession(from, "get", params[0]), player);
   }
   return true;
}

bool executeGiveTo(void){
   OBJECT *obj = getPossession(player, "put", params[0]);
   if (obj != NULL){
      OBJECT *to = reachableObject("who to give that to", params[1]);
      moveObject(obj, to);
   }
   return true;
}

bool executeInventory(void){
   if (listObjectsAtLocation(player) == 0) printf("You are empty-handed.\n");
   return true;
}

bool executeFight(void){
   OBJECT *enemy = reachableObject("who to fight", params[0]);
   if(enemy != NULL){
      // Check if fightable
      if (enemy->health <= 0){
         printf("What? But why?\n");
         return true;
      }

      // Attack
      //if (club->location == player){
         int damage = rand() % 40;
         if (damage < 5) damage = 0;
         enemy->health = enemy->health - damage;
         int remainingHealth = (enemy->health > 0) ? enemy->health : 0;
         printf("You deal %d points of damage to %s. Remaining health: %d.\n", damage, enemy->description, remainingHealth);
      //}else{
      //   printf("You are to feeble to fight with your bare hands. If only you had a weapon...\n");
      //}

      // Defend
   }

   return true;
}

bool executeSay(void){
   const char *say = params[0];
   OBJECT *to = reachableObject("who to tell", params[1]);

   if(to != NULL){
      if(to->health <= 0){
         printf("There's no response. What were you expecting %s to say, anyways?\n", to->description);
      }else if(!objectHasTag(to, "lerp")){
         printf("%s looks at you, but does not reply.\n", to->description);
      }else{ // is lerp
         if (strcmp(say, "book\n") == 0){
            printf("Correct! You may now pass to the east.\n");
            to->health = 1;
         }else{
            printf("Lerp peers at you. 'Not quite right.'\n");
         }
      }
   }
   return true;
}

bool executeSayWho(void){
   if(player->location == goblinRiddler->location){
      const char *say = params[0];
      OBJECT *to = reachableObject("who to tell", "lerp");

      if (strcmp(say, "book\n") == 0){
         printf("Correct! You may now pass to the east.\n");
         to->health = 1;
      }else{
         printf("Lerp peers at you. 'Not quite right.'\n");
      }

   }else{
      printf("I don't know who to say that to - be more specific.\n");
   }

   return true;
}
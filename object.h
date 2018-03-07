#include <stdbool.h>

typedef struct object {
   bool         (*condition)(void);
   const char    *description;
   const char   **tags;
   struct object *location;
   struct object *destination;
   struct object *prospect;
   const char    *details;
   const char    *contents;
   const char    *textGo;
   int            weight;
   int            capacity;
   int            health;
   const char  *(*open)(void);
   const char  *(*close)(void);
   const char  *(*lock)(void);
   const char  *(*unlock)(void);
} OBJECT;

extern OBJECT objs[];

#define entrance	(objs + 0)
#define wallEntrance	(objs + 1)
#define intoFountain	(objs + 2)
#define intoVillage	(objs + 3)
#define village	(objs + 4)
#define wallVillage	(objs + 5)
#define villageToEntrance	(objs + 6)
#define fountainRoom	(objs + 7)
#define wallFountain	(objs + 8)
#define intoEntrance	(objs + 9)
#define intoTrader	(objs + 10)
#define intoPit	(objs + 11)
#define intoPitBlocked	(objs + 12)
#define objectFountain	(objs + 13)
#define coin	(objs + 14)
#define trader	(objs + 15)
#define mat	(objs + 16)
#define traderWall	(objs + 17)
#define traderToFountain	(objs + 18)
#define traderToSecret	(objs + 19)
#define traderToSecretBlocked	(objs + 20)
#define secret	(objs + 21)
#define wallSecret	(objs + 22)
#define secretToTrader	(objs + 23)
#define pit	(objs + 24)
#define wallPit	(objs + 25)
#define pitToFountain	(objs + 26)
#define pitToRiddler	(objs + 27)
#define pitToBrawler	(objs + 28)
#define brawler	(objs + 29)
#define club	(objs + 30)
#define debris	(objs + 31)
#define wallBrawler	(objs + 32)
#define brawlerToPit	(objs + 33)
#define brawlerToKey	(objs + 34)
#define key	(objs + 35)
#define blueKey	(objs + 36)
#define wallKey	(objs + 37)
#define keyToBrawler	(objs + 38)
#define riddler	(objs + 39)
#define wallRiddler	(objs + 40)
#define riddlerToPit	(objs + 41)
#define riddlerToGallery	(objs + 42)
#define gallery	(objs + 43)
#define wallGallery	(objs + 44)
#define galleryToStore	(objs + 45)
#define galleryToGuard	(objs + 46)
#define galleryToRiddler	(objs + 47)
#define store	(objs + 48)
#define scroll	(objs + 49)
#define wallStore	(objs + 50)
#define storeToGallery	(objs + 51)
#define guard	(objs + 52)
#define wallGuard	(objs + 53)
#define guardToGallery	(objs + 54)
#define guardToThrone	(objs + 55)
#define throne	(objs + 56)
#define wallThrone	(objs + 57)
#define throneToGuard	(objs + 58)
#define goblinTraderNoCoin	(objs + 59)
#define polishedKey	(objs + 60)
#define goblinTraderHasCoin	(objs + 61)
#define goblinBrawlerUndefeated	(objs + 62)
#define goblinBrawlerDefeated	(objs + 63)
#define goblinRiddler	(objs + 64)
#define goblinGuardUndefeated	(objs + 65)
#define goblinGuardDefeated	(objs + 66)
#define goblinKing	(objs + 67)
#define field	(objs + 68)
#define cave	(objs + 69)
#define silver	(objs + 70)
#define gold	(objs + 71)
#define guardWithCoin	(objs + 72)
#define player	(objs + 73)
#define intoCave	(objs + 74)
#define intoCaveBlocked	(objs + 75)
#define exitCave	(objs + 76)
#define wallField	(objs + 77)
#define wallCave	(objs + 78)
#define backroom	(objs + 79)
#define wallBackroom	(objs + 80)
#define openDoorToBackroom	(objs + 81)
#define closedDoorToBackroom	(objs + 82)
#define openDoorToCave	(objs + 83)
#define closedDoorToCave	(objs + 84)
#define openBox	(objs + 85)
#define closedBox	(objs + 86)
#define lockedBox	(objs + 87)
#define keyForBox	(objs + 88)
#define lampOff	(objs + 89)
#define lampOn	(objs + 90)

#define endOfObjs	(objs + 91)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)())

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))

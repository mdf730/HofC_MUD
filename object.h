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
#define pitToRiddlerBlocked	(objs + 28)
#define pitToBrawler	(objs + 29)
#define brawler	(objs + 30)
#define club	(objs + 31)
#define debris	(objs + 32)
#define wallBrawler	(objs + 33)
#define brawlerToPit	(objs + 34)
#define brawlerToKey	(objs + 35)
#define brawlerToKeyBlocked	(objs + 36)
#define key	(objs + 37)
#define blueKey	(objs + 38)
#define wallKey	(objs + 39)
#define keyToBrawler	(objs + 40)
#define riddler	(objs + 41)
#define wallRiddler	(objs + 42)
#define riddlerToPit	(objs + 43)
#define riddlerToGallery	(objs + 44)
#define riddlerToGalleryBlocked	(objs + 45)
#define gallery	(objs + 46)
#define pedestals	(objs + 47)
#define buttonOne	(objs + 48)
#define buttonTwo	(objs + 49)
#define buttonThree	(objs + 50)
#define wallGallery	(objs + 51)
#define galleryToStore	(objs + 52)
#define galleryToGuard	(objs + 53)
#define galleryToGuardBlocked	(objs + 54)
#define galleryToRiddler	(objs + 55)
#define store	(objs + 56)
#define scroll	(objs + 57)
#define wallStore	(objs + 58)
#define storeToGallery	(objs + 59)
#define guard	(objs + 60)
#define wallGuard	(objs + 61)
#define guardToGallery	(objs + 62)
#define guardToThrone	(objs + 63)
#define guardToThroneBlocked	(objs + 64)
#define throne	(objs + 65)
#define wallThrone	(objs + 66)
#define throneToGuard	(objs + 67)
#define goblinTraderNoCoin	(objs + 68)
#define polishedKey	(objs + 69)
#define goblinTraderHasCoin	(objs + 70)
#define goblinBrawlerUndefeated	(objs + 71)
#define goblinBrawlerDefeated	(objs + 72)
#define goblinRiddler	(objs + 73)
#define goblinGuardUndefeated	(objs + 74)
#define goblinGuardDefeated	(objs + 75)
#define goblinKing	(objs + 76)
#define threeGoblins	(objs + 77)
#define player	(objs + 78)

#define endOfObjs	(objs + 79)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)())

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))

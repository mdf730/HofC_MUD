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
#define fountain	(objs + 1)
#define trader	(objs + 2)
#define field	(objs + 3)
#define cave	(objs + 4)
#define silver	(objs + 5)
#define gold	(objs + 6)
#define guard	(objs + 7)
#define player	(objs + 8)
#define intoCave	(objs + 9)
#define intoCaveBlocked	(objs + 10)
#define exitCave	(objs + 11)
#define wallField	(objs + 12)
#define wallCave	(objs + 13)
#define backroom	(objs + 14)
#define wallBackroom	(objs + 15)
#define openDoorToBackroom	(objs + 16)
#define closedDoorToBackroom	(objs + 17)
#define openDoorToCave	(objs + 18)
#define closedDoorToCave	(objs + 19)
#define openBox	(objs + 20)
#define closedBox	(objs + 21)
#define lockedBox	(objs + 22)
#define keyForBox	(objs + 23)
#define lampOff	(objs + 24)
#define lampOn	(objs + 25)

#define endOfObjs	(objs + 26)

#define validObject(obj)	((obj) != NULL && (*(obj)->condition)())

#define forEachObject(obj)	for (obj = objs; obj < endOfObjs; obj++) if (validObject(obj))

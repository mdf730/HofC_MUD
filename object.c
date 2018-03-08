#include <stdio.h>
#include "object.h"
static const char *tags0[] = { "entrance", NULL};
static const char *tags1[] = { "north", "south", "field", NULL};
static const char *tags2[] = { "east", "door", "doorway", "cliffside", NULL};
static const char *tags3[] = { "west", "path", "village", NULL};
static const char *tags4[] = { "village", NULL};
static const char *tags5[] = { "north", "south", "east", NULL};
static const char *tags6[] = { "west", NULL};
static const char *tags7[] = { "fountainRoom", NULL};
static const char *tags8[] = { "south", NULL};
static const char *tags9[] = { "west", NULL};
static const char *tags10[] = { "east", NULL};
static bool condition11(void)  { return polishedKey->location == player; }
static const char *tags11[] = { "north", NULL};
static bool condition12(void)  { return polishedKey->location != player; }
static const char *tags12[] = { "north", NULL};
static const char *tags13[] = { "fountain", "goblin fountain", NULL};
static const char *tags14[] = { "gold", "coin", "gold coin", NULL};
static const char *tags15[] = { "trader", NULL};
static const char *tags16[] = { "mat", "rug", "colorful mat", NULL};
static const char *tags17[] = { "north", "east", NULL};
static const char *tags18[] = { "west", NULL};
static bool condition19(void)  { return traderToSecretBlocked->health <= 0; }
static const char *tags19[] = { "south", NULL};
static bool condition20(void)  { return traderToSecretBlocked->health > 0; }
static const char *tags20[] = { "south", NULL};
static const char *tags21[] = { "secret", NULL};
static const char *tags22[] = { "south", "east", "west", NULL};
static const char *tags23[] = { "north", NULL};
static const char *tags24[] = { "pit", NULL};
static const char *tags25[] = { "west", NULL};
static const char *tags26[] = { "south", NULL};
static bool condition27(void)  { return blueKey->location == player; }
static const char *tags27[] = { "east", NULL};
static bool condition28(void)  { return blueKey->location != player; }
static const char *tags28[] = { "east", NULL};
static const char *tags29[] = { "north", NULL};
static const char *tags30[] = { "brawler", NULL};
static const char *tags31[] = { "club", "leg", "table leg", NULL};
static const char *tags32[] = { "debris", "trash", "rubbish", "wood", "junk", NULL};
static const char *tags33[] = { "north", "west", NULL};
static const char *tags34[] = { "south", NULL};
static bool condition35(void)  { return brawler->health <= 0; }
static const char *tags35[] = { "east", NULL};
static bool condition36(void)  { return brawler->health > 0; }
static const char *tags36[] = { "east", NULL};
static const char *tags37[] = { "key room", NULL};
static const char *tags38[] = { "key", "blue key", NULL};
static const char *tags39[] = { "south", "east", "north", NULL};
static const char *tags40[] = { "west", NULL};
static const char *tags41[] = { "riddler", NULL};
static const char *tags42[] = { "south", "north", NULL};
static const char *tags43[] = { "west", NULL};
static bool condition44(void)  { return goblinRiddler->health <= 50; }
static const char *tags44[] = { "east", NULL};
static bool condition45(void)  { return goblinRiddler->health > 50; }
static const char *tags45[] = { "east", NULL};
static const char *tags46[] = { "gallery", NULL};
static const char *tags47[] = { "east", NULL};
static const char *tags48[] = { "north", NULL};
static bool condition49(void)  { return threeGoblins->health <= 0; }
static const char *tags49[] = { "south", NULL};
static bool condition50(void)  { return threeGoblins->health > 0; }
static const char *tags50[] = { "south", NULL};
static const char *tags51[] = { "west", NULL};
static const char *tags52[] = { "store", NULL};
static const char *tags53[] = { "scroll", "unfurled scroll", NULL};
static const char *tags54[] = { "north", "east", "west", NULL};
static const char *tags55[] = { "south", NULL};
static const char *tags56[] = { "guard", NULL};
static const char *tags57[] = { "south", "west", NULL};
static const char *tags58[] = { "north", NULL};
static bool condition59(void)  {return goblinGuardUndefeated->health <= 0; }
static const char *tags59[] = { "east", NULL};
static bool condition60(void)  {return goblinGuardUndefeated->health > 0; }
static const char *tags60[] = { "east", NULL};
static const char *tags61[] = { "throne", NULL};
static const char *tags62[] = { "north", "south", "east", NULL};
static const char *tags63[] = { "west", NULL};
static bool condition64(void)  { return coin->location == objectFountain || coin->location == player; }
static const char *tags64[] = { "trader", "goblin trader", "goblin", "bub", NULL};
static const char *tags65[] = { "key", "polished key", NULL};
static bool condition66(void)  { return coin->location != objectFountain && coin->location != player; }
static const char *tags66[] = { "trader", "goblin trader", "goblin", "bub", NULL};
static bool condition67(void)  { return goblinBrawlerUndefeated->health > 0; }
static const char *tags67[] = { "brawler", "goblin brawler", "goblin", "bumpy", NULL};
static bool condition68(void)  { return goblinBrawlerUndefeated->health <= 0; }
static const char *tags68[] = { "brawler", "goblin brawler", "goblin", "bumpy", NULL};
static const char *tags69[] = { "riddler", "goblin riddler", "goblin", "lerp", NULL};
static bool condition70(void)  { return goblinGuardUndefeated->health > 0; }
static const char *tags70[] = { "guard", "goblin guard", "goblin", "frank", NULL};
static bool condition71(void)  { return goblinGuardDefeated->health <= 0; }
static const char *tags71[] = { "guard", "goblin guard", "goblin", "frank", NULL};
static const char *tags72[] = { "king", "goblin king", "goblin", NULL};
static const char *tags73[] = { "three", "goblins", NULL};
static const char *tags74[] = { "yourself", NULL};

static bool alwaysTrue(void) { return true; }

OBJECT objs[] = {
	{	/* 0 = entrance */
		alwaysTrue,
		 "Entrance",
		tags0,
		NULL,
		NULL,
		NULL,
		 "A weathered stone doorway attached to the cliffside stands to your East, vines crawl across the aged rock and water trickles down the jagged precipice and forms pool at its feet.\n To your West is the road back to the village, spanning across a lush green field.\n Birds can be heard chirping in the distance.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 1 = wallEntrance */
		alwaysTrue,
		 "a lush field",
		tags1,
		 entrance,
		 entrance,
		 entrance,
		 "A field spreads out as far as you can see.\n",
		"You see",
		 "You stare off into the distance at the field, but remain where you are.\n",
		99,
		0,
		0
	},
	{	/* 2 = intoFountain */
		alwaysTrue,
		 "a stone doorway to the east",
		tags2,
		 entrance,
		 fountainRoom,
		 fountainRoom,
		 "Vines crawl across the aged rock and water trickles down the jagged precipice to forms pools at its feet.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 3 = intoVillage */
		alwaysTrue,
		 "a road to your west",
		tags3,
		 entrance,
		 village,
		 village,
		 "To your West is the road back to the village, spanning across a lush green field.\n",
		"You see",
		 "You walk down the winding road back home.\n",
		99,
		0,
		0
	},
	{	/* 4 = village */
		alwaysTrue,
		 "Village",
		tags4,
		NULL,
		NULL,
		NULL,
		 "No adventerous spirit in you, eh? How can you win the game you don't attempt?\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 5 = wallVillage */
		alwaysTrue,
		 "a lively village",
		tags5,
		 village,
		 village,
		 village,
		 "You see many familiar faces as you explore the village.\n",
		"You see",
		 "You make your way through the village.\n",
		99,
		0,
		0
	},
	{	/* 6 = villageToEntrance */
		alwaysTrue,
		 "path to entrance",
		tags6,
		 village,
		 entrance,
		 entrance,
		 "A path leads to the entrance.\n",
		"You see",
		 "You walk back down the path.\n",
		99,
		0,
		0
	},
	{	/* 7 = fountainRoom */
		alwaysTrue,
		 "Fountain Room",
		tags7,
		NULL,
		NULL,
		NULL,
		 "The room is dimly lit with torch light, yet the air feels damp and humid.\n A running fountain can be seen in the center of the space; a circular pool with the statue of a goblin spews water from its mouth.\n Moss grows from the stonework surrounding the fountain and is interspersed around the room structure.\n There are wooden doors to your North and East.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 8 = wallFountain */
		alwaysTrue,
		NULL,
		tags8,
		 fountainRoom,
		 fountainRoom,
		 fountainRoom,
		 "A nondescript wall on the south end of the room.\n",
		"You see",
		 "You run into the wall, receiving a bruise on your chin for the effort. This isn't Hogwarts...\n",
		99,
		0,
		0
	},
	{	/* 9 = intoEntrance */
		alwaysTrue,
		 "a stone doorway to the west",
		tags9,
		 fountainRoom,
		 entrance,
		 entrance,
		 "A weathered stone doorway attached to the cliffside\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 10 = intoTrader */
		alwaysTrue,
		 "a wooden doorway to the east",
		tags10,
		 fountainRoom,
		 trader,
		 trader,
		 "A wooden doorway is slightly ajar. A warm light filters in through the crack.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 11 = intoPit */
		condition11,
		 "an unlocked doorway to the north",
		tags11,
		 fountainRoom,
		 pit,
		 pit,
		 "A wooden doorway is closed. A lock, now open, gleams under the door's handle.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 12 = intoPitBlocked */
		condition12,
		 "a locked doorway to the north",
		tags12,
		 fountainRoom,
		NULL,
		 pit,
		 "A wooden doorway is closed. A lock gleams under the door's handle.\n",
		"You see",
		 "The lock rattles. You can't break through.\n",
		99,
		0,
		0
	},
	{	/* 13 = objectFountain */
		alwaysTrue,
		 "a fountain",
		tags13,
		 fountainRoom,
		NULL,
		NULL,
		 "The water is clear and pristine, the bottom of the fountain is a gravel pattern.\n At the bottom of the fountain you see something glimmer. It’s a gold coin!\n It twinkles as the water moves about the surface, refracting the light over it.\n",
		"You see",
		"You can't get much closer than this.\n",
		 100,
		0,
		0
	},
	{	/* 14 = coin */
		alwaysTrue,
		 "a gold coin",
		tags14,
		 objectFountain,
		NULL,
		NULL,
		 "The shiny coin glimmers with a distinct glint.\n",
		"You see",
		"You can't get much closer than this.\n",
		 1,
		0,
		0
	},
	{	/* 15 = trader */
		alwaysTrue,
		 "Trader Room",
		tags15,
		NULL,
		NULL,
		NULL,
		 "The room is small but well lit, a goblin sits at the other end of the room and looks at you curiously.\n On a tattered mat colored with patterns of red and violet is spread out various items, many with distinct shines and gleams.\n There is a wooden door to your West and a strange pattern of bricks on the wall to your South.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 16 = mat */
		alwaysTrue,
		 "a colorful mat",
		tags16,
		 trader,
		NULL,
		NULL,
		 "Spread across the mat in careful tidy rows are various objects, such as smoothed glass, bent silverware, and a single polished key.\n The goblin guards over the objects closely, preventing them from being taken.\n",
		"You see",
		"You can't get much closer than this.\n",
		 999,
		0,
		0
	},
	{	/* 17 = traderWall */
		alwaysTrue,
		NULL,
		tags17,
		 trader,
		 trader,
		 trader,
		 "The wall is dirty. Upon closer inspection, the wall is very dirty.\n",
		"You see",
		 "You can't walk through a solid wall...\n",
		99,
		0,
		0
	},
	{	/* 18 = traderToFountain */
		alwaysTrue,
		 "a wooden doorway to the west",
		tags18,
		 trader,
		 fountainRoom,
		 fountainRoom,
		 "A wooden doorway is ajar. It leads back to the fountain room.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 19 = traderToSecret */
		condition19,
		 "a hole in the wall to the south",
		tags19,
		 trader,
		 secret,
		 secret,
		 "The wall has been broken through, showing a hidden room that lays beyond.\n",
		"You see",
		 "You walk through the debris.\n",
		99,
		0,
		0
	},
	{	/* 20 = traderToSecretBlocked */
		condition20,
		 "a mysteriously colored wall to the south",
		tags20,
		 trader,
		NULL,
		 secret,
		 "The wall is mysteriously colored, and a few bricks appear out of place.\n",
		"You see",
		 "You push on the bricks and they move ever so slightly, but not enough to walk through.\n",
		99,
		0,
		 1
	},
	{	/* 21 = secret */
		alwaysTrue,
		 "Secret Room",
		tags21,
		NULL,
		NULL,
		NULL,
		 "The room is covered with ornate flowery wallpaper of blues, greens, and gold.\n A neon sign flashes in yellow on the opposite end of the room, it reads ‘You found the secret!’\n There is a wooden door to your North.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 22 = wallSecret */
		alwaysTrue,
		NULL,
		tags22,
		 secret,
		 secret,
		 secret,
		 "The whole room sparkles, even the wall.\n",
		"You see",
		 "Nope. There's only one false wall in this game.\n",
		99,
		0,
		0
	},
	{	/* 23 = secretToTrader */
		alwaysTrue,
		 "wall to trader",
		tags23,
		 secret,
		 trader,
		 trader,
		 "You've already broken through the wall, which leads back to the trader room.\n",
		"You see",
		 "You walk through the debris.\n",
		99,
		0,
		0
	},
	{	/* 24 = pit */
		alwaysTrue,
		 "The Pit",
		tags24,
		NULL,
		NULL,
		NULL,
		 "The huge room expands out in front of you, in the center a round pit descends into an inky blackness.\n The pits diameter almost meets the sides of the room itself, but leaves enough space to allow passage around the edges.\n Sitting on the pits edge is a goblin, its feet dangling over. The goblin doesn’t take any notice of you but instead peers downward with a cheery smile on its face, moving its legs like pendulums.\n There are wooden doors to your North, East and South.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 25 = wallPit */
		alwaysTrue,
		NULL,
		tags25,
		 pit,
		 pit,
		 pit,
		 "The edge of the pit makes it impossible to reach this side of the room.\n",
		"You see",
		 "As you try to move west, you fall into the pit. It takes several grueling hours to make your way out.\n",
		99,
		0,
		0
	},
	{	/* 26 = pitToFountain */
		alwaysTrue,
		 "a wooden doorway to the south",
		tags26,
		 pit,
		 fountainRoom,
		 fountainRoom,
		 "A wooden doorway is closed. A lock gleams under the door's handle.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 27 = pitToRiddler */
		condition27,
		 "a blue doorway to the east",
		tags27,
		 pit,
		 riddler,
		 riddler,
		 "The blue doorway is open. You have the key.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 28 = pitToRiddlerBlocked */
		condition28,
		 "a locked blue doorway to the east",
		tags28,
		 pit,
		NULL,
		 riddler,
		 "The blue doorway is closed. A lock gleams under the door's handle.\n",
		"You see",
		 "You bounce off the wall. Ouch.\n",
		99,
		0,
		0
	},
	{	/* 29 = pitToBrawler */
		alwaysTrue,
		 "a wooden doorway to the north",
		tags29,
		 pit,
		 brawler,
		 brawler,
		 "A wooden doorway is closed. A lock gleams under the door's handle.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 30 = brawler */
		alwaysTrue,
		 "The Brawler",
		tags30,
		NULL,
		NULL,
		NULL,
		 "The room is very messy, the ground covered with bits of fractured wooden debri and other rubbish.\n To the East is a wooden door with the large picture of a key carved on it. Standing between you and the door is a goblin, it has wild eyes and brandishes a club.\n Every move you make it reacts to so to remain between you and the key door.\n There are wooden doors to your South and East.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 31 = club */
		alwaysTrue,
		 "a table leg",
		tags31,
		 brawler,
		NULL,
		NULL,
		 "The table leg looks like it would make a strudy club.\n",
		"You see",
		"You can't get much closer than this.\n",
		 1,
		0,
		0
	},
	{	/* 32 = debris */
		alwaysTrue,
		 "a lot of junk",
		tags32,
		 brawler,
		NULL,
		NULL,
		 "Looking at the broken wood and other rubbish you see a table leg broken into the rough shape of a club. Nothing else looks particularly useful.\n",
		"You see",
		"You can't get much closer than this.\n",
		 100,
		0,
		0
	},
	{	/* 33 = wallBrawler */
		alwaysTrue,
		NULL,
		tags33,
		 brawler,
		 brawler,
		 brawler,
		 "The walls have a stench, as if they haven't been cleaned in years.\n",
		"You see",
		 "You run your finger along the wall. When you pull away, a residue stays on your hand, making it sticky.\n",
		99,
		0,
		0
	},
	{	/* 34 = brawlerToPit */
		alwaysTrue,
		 "a wooden doorway to the south",
		tags34,
		 brawler,
		 pit,
		 pit,
		 "The wooden doorway leads back to the pit.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 35 = brawlerToKey */
		condition35,
		 "a door to the key room",
		tags35,
		 brawler,
		 key,
		 key,
		 "The brawler is defeated, and the door is open behind him.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 36 = brawlerToKeyBlocked */
		condition36,
		 "a door to the key room",
		tags36,
		 brawler,
		NULL,
		 key,
		 "You can make out any details about the door behind the brawler's looming frame.\n",
		"You see",
		 "The brawler swipes at you angrily. You stay where you are.\n",
		99,
		0,
		0
	},
	{	/* 37 = key */
		alwaysTrue,
		 "Key Room",
		tags37,
		NULL,
		NULL,
		NULL,
		 "The room is small and made of red brick with mortar. On the wall hanging from a rusty coat hook is a single blue key.\n There is a wooden door to your West.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 38 = blueKey */
		alwaysTrue,
		 "a blue key",
		tags38,
		 key,
		NULL,
		NULL,
		 "The key is a strange blue color.\n",
		"You see",
		"You can't get much closer than this.\n",
		 1,
		0,
		0
	},
	{	/* 39 = wallKey */
		alwaysTrue,
		NULL,
		tags39,
		 key,
		 key,
		 key,
		 "The walls are hidden away in shadow.\n",
		"You see",
		 "It's too dark to go that way.\n",
		99,
		0,
		0
	},
	{	/* 40 = keyToBrawler */
		alwaysTrue,
		 "a door to the brawler room",
		tags40,
		 key,
		 brawler,
		 brawler,
		 "A wooden doorway is closed. A lock gleams under the door's handle.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 41 = riddler */
		alwaysTrue,
		 "The Riddler's Room",
		tags41,
		NULL,
		NULL,
		NULL,
		 "The long room is lit with lanterns on either sides of the walls, lavender colored wallpaper peels in flakes onto the floor.\n On the left side sits a goblin upon a wooden stool with a stack of books to its side.\n The goblin leafs through leather bound tome absentmindedly, only looking up for a second to acknowledge your presence. There are wooden doors to your East and West.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 42 = wallRiddler */
		alwaysTrue,
		NULL,
		tags42,
		 riddler,
		 riddler,
		 riddler,
		 "There are lanterns on the wall, illuminating wallpaper that is peeling terribly.\n",
		"You see",
		 "You get to close to the wall and nearly set your hair on fire from one of the lanterns.\n",
		99,
		0,
		0
	},
	{	/* 43 = riddlerToPit */
		alwaysTrue,
		 "a wooden doorway to the west",
		tags43,
		 riddler,
		 pit,
		 pit,
		 "A wooden doorway.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 44 = riddlerToGallery */
		condition44,
		 "a wooden doorway to the east",
		tags44,
		 riddler,
		 gallery,
		 gallery,
		 "A wooden doorway.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 45 = riddlerToGalleryBlocked */
		condition45,
		 "a closed doorway to the east",
		tags45,
		 riddler,
		NULL,
		 gallery,
		 "A wooden doorway.\n",
		"You see",
		 "'Tsk, tsk,' says the riddler. 'No leaving until you answer my riddle!'.\n",
		99,
		0,
		0
	},
	{	/* 46 = gallery */
		alwaysTrue,
		 "Gallery",
		tags46,
		NULL,
		NULL,
		NULL,
		 "The long room stretches to your left and right, rose colored wallpaper peels in flakes onto the floor.\n Red curtains sway on either corner of the room though they seem to stop moving when you look straight at them.\n On the edge of the wall are three busts, the first of a goblin with its long nose pointed up, the second with its nose pointing straight ahead, and the third with its nose point downed.\n The busts stand on pedestals and below them are square wooden buttons. There are wooden doors to your West, North, and South.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 47 = wallGallery */
		alwaysTrue,
		NULL,
		tags47,
		 gallery,
		 gallery,
		 gallery,
		 "There are three busts along the wall.\n",
		"You see",
		 "There's nowhere to go!\n",
		99,
		0,
		0
	},
	{	/* 48 = galleryToStore */
		alwaysTrue,
		 "a wooden doorway to the north",
		tags48,
		 gallery,
		 store,
		 store,
		 "A wooden doorway.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 49 = galleryToGuard */
		condition49,
		 "an ornate doorway to the south",
		tags49,
		 gallery,
		 guard,
		 guard,
		 "An ornate doorway.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 50 = galleryToGuardBlocked */
		condition50,
		 "an ornate doorway to the south",
		tags50,
		 gallery,
		NULL,
		 guard,
		 "An ornate doorway to the south is mysteriously closed.\n",
		"You see",
		 "You shall not pass.\n",
		99,
		0,
		0
	},
	{	/* 51 = galleryToRiddler */
		alwaysTrue,
		 "a wooden doorway to the west",
		tags51,
		 gallery,
		 riddler,
		 riddler,
		 "A wooden doorway.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 52 = store */
		alwaysTrue,
		 "Storeroom",
		tags52,
		NULL,
		NULL,
		NULL,
		 "The small room is almost filled to the brim with barrels and crates. A dim lamp on the ceiling only barely makes the room visible.\n On one of the crates sits an unfurled scroll nailed to the crates frame; it has writing on it.\n There is a wooden door to your South.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 53 = scroll */
		alwaysTrue,
		 "an unfurled scroll",
		tags53,
		 store,
		NULL,
		NULL,
		 "The scroll reads ‘Down the road three goblins strolled, moving on their way.\n One looked up and said to them ‘Looks like rain today.’\n The other looked down and commented ‘The grounds all muddy and gray.’\n The last looked forward swiftly said ‘Then quite quickly we should be on our way.’\n",
		"You see",
		"You can't get much closer than this.\n",
		 9999,
		0,
		0
	},
	{	/* 54 = wallStore */
		alwaysTrue,
		NULL,
		tags54,
		 store,
		 store,
		 store,
		 "There are cobwebs on the dusty walls.\n",
		"You see",
		 "You really don't want to touch the cobwebs on the walls.\n",
		99,
		0,
		0
	},
	{	/* 55 = storeToGallery */
		alwaysTrue,
		 "a wooden doorway to the south",
		tags55,
		 store,
		 gallery,
		 gallery,
		 "A wooden doorway.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 56 = guard */
		alwaysTrue,
		 "Guard Room",
		tags56,
		NULL,
		NULL,
		NULL,
		 "The room is well lit and covered with ornate silver wallpaper. To your East is a golden door with a cup image engraved on it.\n Between you and the golden door stands a goblin wearing armor, it holds a steel mace to its side.\n The goblins eyes are stern and its stance is disciplined. There is a wooden door to your North and a golden door to your East.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 57 = wallGuard */
		alwaysTrue,
		NULL,
		tags57,
		 guard,
		 guard,
		 guard,
		 "There is nothing interesting on this wall.\n",
		"You see",
		 "Why even try at this point?\n",
		99,
		0,
		0
	},
	{	/* 58 = guardToGallery */
		alwaysTrue,
		 "a wooden doorway to the north",
		tags58,
		 guard,
		 gallery,
		 gallery,
		 "A wooden doorway.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 59 = guardToThrone */
		condition59,
		 "a wooden doorway to the east",
		tags59,
		 guard,
		 throne,
		 throne,
		 "A wooden doorway.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 60 = guardToThroneBlocked */
		condition60,
		 "a wooden doorway to the east",
		tags60,
		 guard,
		NULL,
		 throne,
		 "A guard prevents you from proceeding.\n",
		"You see",
		 "The guard takes a menacing step.\n",
		99,
		0,
		0
	},
	{	/* 61 = throne */
		alwaysTrue,
		 "The Throne Room",
		tags61,
		NULL,
		NULL,
		NULL,
		 "The room glimmers with jewels and fine tapestries of red and violet.\n Sitting on a gold throne is a goblin wearing a crown and draped in ornate robes.\n It holds the Goblin Goblet in its hands in front of you.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		 9999,
		0
	},
	{	/* 62 = wallThrone */
		alwaysTrue,
		NULL,
		tags62,
		 throne,
		 throne,
		 throne,
		 "The wall is covered in tapestries of red and violet.\n",
		"You see",
		 "You play in the tapestry for a bit before returning to the center of the throne room.\n",
		99,
		0,
		0
	},
	{	/* 63 = throneToGuard */
		alwaysTrue,
		 "a wooden doorway to the west",
		tags63,
		 throne,
		 guard,
		 guard,
		 "A wooden doorway.\n",
		"You see",
		 "You walk through the doorway.\n",
		99,
		0,
		0
	},
	{	/* 64 = goblinTraderNoCoin */
		condition64,
		 "Bub the Trader of Shinies",
		tags64,
		 trader,
		NULL,
		NULL,
		 "The goblin says ‘Oh hello! I am Bub the Trader of Shiny’s. I do so love shiny things, but not all shinies things are equal to me, oh no. If I had to choose to between one shiny and a shinier shiny, I’d take the shinier shiny! Find me shinier shiny and I’ll give you a less shiny shiny.’\n",
		 "He has",
		"You can't get much closer than this.\n",
		99,
		 20,
		 100
	},
	{	/* 65 = polishedKey */
		alwaysTrue,
		 "a polished key",
		tags65,
		 goblinTraderHasCoin,
		NULL,
		NULL,
		 "The key is polished and has a dull glint.\n",
		"You see",
		"You can't get much closer than this.\n",
		 1,
		0,
		0
	},
	{	/* 66 = goblinTraderHasCoin */
		condition66,
		 "Bub the Trader of Shinies",
		tags66,
		 trader,
		NULL,
		NULL,
		 "The goblin say’s ‘Oh yes! This is very shiny shiny! Here, you have have this less shiny shiny in return.’ (Type 'get key from bub').\n",
		 "He has",
		"You can't get much closer than this.\n",
		99,
		 20,
		 100
	},
	{	/* 67 = goblinBrawlerUndefeated */
		condition67,
		 "Bumpy the Cudgelist",
		tags67,
		 brawler,
		NULL,
		NULL,
		 "The goblin says ‘You can’t get past me Bumpy the Cudgelist! I’ll bump your head if you so nearly try to make your way around.’ It waves its club above its head triumphantly.\n",
		 "He has",
		"You can't get much closer than this.\n",
		99,
		 20,
		 50
	},
	{	/* 68 = goblinBrawlerDefeated */
		condition68,
		 "Bumpy the Cudgelist",
		tags68,
		 brawler,
		NULL,
		NULL,
		 "The goblin is unconcious and doesn't say anything.\n",
		 "He has",
		"You can't get much closer than this.\n",
		99,
		 20,
		 0
	},
	{	/* 69 = goblinRiddler */
		alwaysTrue,
		 "Lerp the Riddlemaster",
		tags69,
		 riddler,
		NULL,
		NULL,
		 "The goblin says ‘Hmm greetings! I an Lerp the Riddlemaster. I suppose you wish to go through that door over there. Hmm quite, quite. Well, I can open that door for you if you can solve my riddle!’ ‘I have lots to say but never speak,’ ‘I open but you cannot walk through me,’ ‘I have a spine but no bones.’ ‘What am I?’",
		 "He has",
		"You can't get much closer than this.\n",
		99,
		 20,
		 100
	},
	{	/* 70 = goblinGuardUndefeated */
		condition70,
		 "Royal Gobo Guard Frank",
		tags70,
		 guard,
		NULL,
		NULL,
		 "The goblin does not answer…\n",
		 "He has",
		"You can't get much closer than this.\n",
		99,
		 20,
		 75
	},
	{	/* 71 = goblinGuardDefeated */
		condition71,
		 "Royal Gobo Guard Frank",
		tags71,
		 guard,
		NULL,
		NULL,
		 "The goblin is unconcious and does not say anything.\n",
		 "He has",
		"You can't get much closer than this.\n",
		99,
		 20,
		 0
	},
	{	/* 72 = goblinKing */
		alwaysTrue,
		 "King Gobo, Keeper of the Goblin Goblet",
		tags72,
		 throne,
		NULL,
		NULL,
		 "You have passed through all of the brave adventurer. Using you might and wit, you found your way through the Goblin Gauntlet! Know you may finally take your prize. I, King Gobo, Keeper of the Goblin Goblet bestow upon you my namesake. The Goblin Goblet is yours!!!\n",
		 "He has",
		"You can't get much closer than this.\n",
		99,
		 20,
		 100
	},
	{	/* 73 = threeGoblins */
		alwaysTrue,
		NULL,
		tags73,
		NULL,
		NULL,
		NULL,
		"You see nothing special.\n",
		"You see",
		"You can't get much closer than this.\n",
		99,
		0,
		 100
	},
	{	/* 74 = player */
		alwaysTrue,
		 "yourself",
		tags74,
		 riddler,
		NULL,
		NULL,
		 "You would need a mirror to look at yourself.\n",
		 "You have",
		"You can't get much closer than this.\n",
		99,
		 20,
		 100
	}
};

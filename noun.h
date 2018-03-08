extern OBJECT *getVisible(const char *intention, const char *noun);
extern OBJECT *getPossession(OBJECT *from, const char *verb, const char *noun);
extern bool    objectHasTag(OBJECT *obj, const char *noun);
extern OBJECT *getObject(const char *noun, OBJECT *from, DISTANCE maxDistance);
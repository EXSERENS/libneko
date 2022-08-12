#include <string.h>

struct string;

struct string *string_init();
void string_delete(struct string *realstr);
void string_append(struct string *dest, const char *str);

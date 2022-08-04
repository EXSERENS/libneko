#include <stdlib.h>
#include <string.h>

struct string {
    char *str;
    unsigned int len;
};

struct string string_init() {
    struct string realstr;
    realstr.str = calloc(1, sizeof(char));
    realstr.len = 1;
    return realstr;
}
void string_delete(struct string *realstr) {
    free(realstr->str);
    realstr->str = NULL;
    realstr->len = 0;
}
void string_reinit(struct string *realstr) {
    if (realstr->str == NULL)
        (*realstr) = string_init();
}
void string_append(struct string *dest, const char *str) {
    unsigned int srclen = strlen(str);
    dest->str = realloc(dest->str, dest->len + srclen);
    strcpy(dest->str + dest->len - 1, str);
    dest->len += srclen;
}
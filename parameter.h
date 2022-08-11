#include <string.h>

// Usage: PARAMPARSE(argc, argv) with switch(argv[pos][innerpos])
#define PARAMPARSE(argc, argv) \
for (int pos = 1; pos < argc; pos++) \
        if (argv[pos][0] == '-') \
                for (int innerpos = 1; innerpos < strlen(argv[pos]); innerpos++)

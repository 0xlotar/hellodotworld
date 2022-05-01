#include "world.h"    /* Always include the header file that declares something
                     * in the C file that defines it. This makes sure that the
                     * declaration and definition are always in-sync.  Put this
                     * header first in world.c to ensure the header is self-contained.
                     */
#include <stdio.h>
                       
/**
 * This is the function definition.
 * It is the actual body of the function which was declared elsewhere.
 */
void world(char *name)
{
    fprintf(stderr, "WORLD\n");
    char surname[100];
    fgets(surname, 100, stdin);
    fprintf(stderr, "%s\n", surname);
    /* This will print how foo was called to stderr - standard error.
     * e.g., foo(42, "Hi!") will print `foo(42, "Hi!")`
     */
}
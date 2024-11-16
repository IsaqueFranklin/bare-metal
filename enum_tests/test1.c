#include <stdio.h>

typedef enum {
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday,
  sunday
} WEEKDAY;

int main(void) {
  WEEKDAY day = monday;
  
  if (day == monday) {
    printf("It's monday!\n");
  } else {
    printf("It's not monday\n");
  }
}

/* Every item in the enum definition is paired to an integer, internally. So in this example monday is 0, tuesday is 1 and so on. */

/* This means the conditional could have been if (day == 0) instead of if (day == monday) , but it's way simpler for us humans to reason with names rather than numbers, so it's a very convenient syntax. */

#include <limits.h>
#include <stdio.h>

int
main (void)
{
  unsigned int score = 42;   // Works for score in [0, UINT_MAX]

  printf ("score via printf:     %u\n", score);   // For validation

  printf ("score digit by digit: ");
  unsigned int div = 1;
  unsigned int digit_count = 1;
  while ( div <= score / 10 ) {
    digit_count++;
    div *= 10;
  }
  while ( digit_count > 0 ) {
    printf ("%d", score / div);
    score %= div;
    div /= 10;
    digit_count--;
  }
  printf ("\n");

  return 0;
}

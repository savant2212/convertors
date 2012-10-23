#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char **argv)
{
  int days = 0, hours = 0, minutes = 0;
  unsigned long long seconds;

  if (argc != 2)
    {
      fprintf (stderr, "usage: %s number\n"
                       "where number is a number of seconds\n", argv[0]);
      exit(EXIT_FAILURE);
    }

  seconds = atoll (argv[1]); /* atoll() - ASCII to long long*/

  minutes = seconds / 60;
  seconds = seconds % 60;
  
  if (minutes >= 60)
    {
      hours = minutes / 60;
      minutes -= hours * 60;

      if (hours >= 24)
        {
          days = hours / 24;
          hours -= days * 24;
        }
    }

 if (days != 0)
  {
    printf ("%d days ", days);
  }
  if (hours != 0)
  {
    printf ("%d hours ", hours);
  }
  if (minutes != 0)
  {
    printf ("%d minutes ", minutes);
  }
  
  printf ("%llu seconds\n", seconds);

  return EXIT_SUCCESS;
}


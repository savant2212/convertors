#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char **argv)
{
  int giga = 0, mega = 0, kilo = 0;
  unsigned long long bytes;

  if (argc != 2)
    {
      fprintf (stderr, "usage: %s number\n"
                       "where number is a number of bytes\n", argv[0]);
      exit(EXIT_FAILURE);
    }

  bytes = atol (argv[1]);

  kilo = bytes / 1024;
  bytes -= kilo * 1024;
  if (kilo >= 1024)
    {
      mega = kilo / 1024;
      kilo -= mega * 1024;

      if (mega >= 1024)
        {
          giga = mega / 1024;
          mega -= giga * 1024;
        }
    }

  if (giga != 0)
  {
    printf ("%d GiB ", giga);
  }
  if (mega != 0)
  {
    printf ("%d MiB ", mega);
  }
  if (kilo != 0)
  {
    printf ("%d KiB ", kilo);
  }
  printf ("%d bytes\n", bytes);

  return EXIT_SUCCESS;
}


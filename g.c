#include <stdio.h>

int main()
{
  char *value;

  value = getenv("HOME");
  if (value != NULL) {
    printf("The value of the HOME environment variable is: %s\n", value);
  } else {
    printf("The HOME environment variable is not set.\n");
  }

  return 0;
}

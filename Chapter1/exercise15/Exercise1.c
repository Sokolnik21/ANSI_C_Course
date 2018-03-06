#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fromFahrToCelcius(float fahr);

int main() {
  printf("Tablica konwersji\n");
  int fahr;
  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
    printf("%3d\t%5.1f\n", fahr, fromFahrToCelcius(fahr));
}

float fromFahrToCelcius(float fahr) {
  return 5.0/9.0*(fahr - 32.0);
}

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  printf("Tablica konwersji\n");
  printf("Celcius to Fahreneit\n");
  int celc;
  for(celc = LOWER; celc <= UPPER; celc = celc + 20)
    printf("%3d\t%5.1f\n", celc, (celc*9.0/5.0) + 32.0);
}

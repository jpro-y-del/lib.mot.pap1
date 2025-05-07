#include <Arduino.h>
#include "pap1lib.h"
int i;
void setup() {
  pasoNormal_init (1,2,3,4);
  pasoCompleto_init(5,6,7,8);
  pasoMedio_init(9,10,11,12);

}

void loop() {
  pasoNormal(1,2,3,4,15);
  pasoCompleto(5,6,7,8,12);
  pasoMedio(9,10,11,12,36);
}
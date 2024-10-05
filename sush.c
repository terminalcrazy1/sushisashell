 /* See LICENSE for license details. Configure in config.h*/
#include "config.h"
#include <stdio.h>

char* sush_main() {
  printf(PS1);
  return "Success";
}

int main() {
  sush_main();
  return 0;
}

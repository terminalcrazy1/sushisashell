 /* See LICENSE for license details. Configure in config.h*/
#include "config.h"
#include <stdio.h>

void sush_readin() {
  getline();
}

void sush_splitin() {

}

void sush_executein() {

}

char* sushrc() {
  /* Use sush_main to interpret commands contained within ./sushrc, */
  /* akin to .bashrc or .zshrc */
  return "Complete";
}

char* sush_main() {
  printf(PS1);
  sush_readin();
  sush_splitin();
  return "Complete";
}

int main() {
  sushrc();
  sush_main();
}

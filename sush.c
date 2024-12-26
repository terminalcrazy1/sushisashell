/* See LICENSE for license details. See LIMITATIONS for limitations.
 * This is sush. Sush is a simple shell written in C. The only goals of
 * sush are to be minimally POSIX compliant and to
 * follow the suckless philosophy.
 */
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>
char line[80];
int position = 0;
int complete = 0;
void sush_parseline() {
  printf("Parse the variable 'line'")
}
void sush_readline() {
  funlockfile(stdin);
  while (complete == 0) {
    char c = getchar_unlocked();
    if (c == '\n') {
      c = '\0';
      line[position] = c;
      printf(line, "\n");
      printf("%lu", strlen(line));
      complete = 1;
    } else {
      line[position] = c;
      position += 1;
    }
  }
  flockfile(stdin);
  sush_parseline();
}
int main() {
  setbuf(stdout, NULL);
  printf("> ");
  sush_readline();
}

/* See LICENSE for license details. See LIMITATIONS for limitations.
 * This is sush. Sush is a simple shell written in C. The only goals of
 * sush are to be minimally POSIX compliant and to
 * follow the suckless philosophy.
 */
#include <stdio.h>
#include <string.h>
const int length_increment = 10;
int length = 80;
char line[80];
void sush_readline() {
  while(1) {
    fgets(line, length, stdin);
    int position = strlen(line);
    if (line[position] == '\n') {
      line[position] = '\0';
      return;
    }
  printf(line)
  return;
  }
}
int main() {
  sush_readline();
}

/* See LICENSE for license details
 * This is sush. Sush is a simple shell written in C. The only goals of
 * sush are to be minimally POSIX compliant and to
 * follow the suckless philosophy.
 */
 #include <stdio.h>
void sush_readline();
char sush_setup();
int onstart = 1;
char *line;
void sush_readline() {
  
}
int main() {
  if (onstart == 1) {
    sush_setup();
    onstart = 0;
  }
    return 0;
}

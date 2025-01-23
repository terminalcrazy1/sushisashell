/* See LICENSE for license details. See LIMITATIONS for limitations.
 * This is sush. Sush is a simple shell written in C. The only goals of
 * sush is to be tiny and fast.
 */
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>
char line[80];
char parsed_line[80];
int position = 0;
int complete = 0;
void sush_parseline() {
	while (complete == 0) {
		int c = line[position];
		if (c == ' ') {
			parsed_line[position] = '\0';
			complete = 1;
    } else if (c == '\n') {
			parsed_line[position] = '\0';
		} else {
			parsed_line[position] = c;
			position += 1;
    }
  }
	printf(parsed_line);
}
void sush_readline() {
	funlockfile(stdin);
	while (complete == 0) {
		char c = getchar_unlocked();
		if (c == '\n') {
			c = '\0';
			line[position] = c;
			complete = 1;
    } else {
			line[position] = c;
			position += 1;
    }
  }
	flockfile(stdin);
	complete = 0;
	position = 0;
	sush_parseline();
}
int main() {
	setbuf(stdout, NULL);
	printf("> ");
	sush_readline();
}

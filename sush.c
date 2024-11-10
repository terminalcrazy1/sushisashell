/* See LICENSE for license details
 * This is sush. Sush is a simple shell written in C. The only goals of
 * sush are to be minimally POSIX compliant and to
 * follow the suckless philosophy.
 */
sush_main() {
  if (onstart == 0) {
    sush_setup()
    onstart += 1
  }
    sush_readline()
    sush_splitline()
    sush_passline()
}

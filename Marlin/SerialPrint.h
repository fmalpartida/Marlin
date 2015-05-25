// Tonokip RepRap firmware rewrite based off of Hydra-mmm firmware.
// License: GPL

#ifndef SERIALPRINT_H
#define SERIALPRINT_H
// Things to write to serial from Program memory. Saves 400 to 2k of RAM.
FORCE_INLINE void serialprintPGM(const char *str) {
  char ch;
  while ((ch = pgm_read_byte(str))) {
    MYSERIAL.write(ch);
    str++;
  }
}
#endif

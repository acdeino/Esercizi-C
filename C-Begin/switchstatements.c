#include <stdio.h>

void findchartype(int i) {
  switch(i) {
    case 0:
    chartype = "NULL";
    break;
    case 7:
    chartype = "Bell";
    break;
    case 8:
    chartype = "BackSpace";
    break;
  }
}

#include "grains.h"

uint64_t square(uint8_t index) {
  if (index == 1)
    return 1;
  return 2 * square(index - 1);
}

uint64_t total(void) {
  uint64_t ret = 1;
  uint64_t last_grain = 1;
  for (uint8_t i = 2; i <= 64; i++) {
    ret += last_grain *= 2;
  }
  return ret;
}

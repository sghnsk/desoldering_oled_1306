#include "CustomU8x8.h"

size_t CustomDisplay::write(uint8_t v) 
{
  if ( v == '\n' )
  {
    uint8_t dy = u8x8_pgm_read(u8x8.font+3);		/* new 2019 format */
    ty+=dy;
    tx=0;
  }
  else
  {
    uint8_t dx = u8x8_pgm_read(u8x8.font+2);		/* new 2019 format */
    u8x8_Draw2x2Glyph(&u8x8, tx*2, ty*2, v);

    tx+=dx;
  }
  return 1;
}


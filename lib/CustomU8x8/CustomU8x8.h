#include <U8x8lib.h>


class CustomDisplay : public U8X8_SSD1306_128X64_NONAME_HW_I2C
{
    public:
        size_t write(uint8_t v);

};


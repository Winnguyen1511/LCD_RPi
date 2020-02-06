//#include "I2C.h"
#include "i2c-lcd.h"

int main(int argc, char** argv)
{
    I2C_t i2c;
    I2C_Init(&i2c, 1);
    lcd_init(&i2c);
    sleep(2);
    lcd_goto_XY(&i2c, 0,0);
    lcd_send_string(&i2c, "hello world");
    lcd_send_line(&i2c, "my name is khoa", 0);
    return SUCCESS;
}
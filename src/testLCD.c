//#include "I2C.h"
#include "i2c-lcd.h"

int main(int argc, char** argv)
{
    I2C_t i2c;
    I2C_Init(&i2c, 1);
    lcd_init(&i2c);
    sleep(2);
    lcd_goto_XY(&i2c, 1,0);
    lcd_send_string(&i2c, "hello world");
    
    return SUCCESS;
}
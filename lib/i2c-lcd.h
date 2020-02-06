/** 
Edit by modify: Ngoc Hang 
Porting to linux: Winnguyen
**/

#include "I2C.h"

int lcd_init (I2C_t* instance);   // initialize lcd

int lcd_send_cmd (I2C_t* instance, uint8_t cmd);  // send command to the lcd

int lcd_send_data (I2C_t* instance, uint8_t data);  // send data to the lcd

int lcd_send_string (I2C_t* instance, uint8_t* str);  // send string to the lcd

int lcd_clear_display (I2C_t* instance);	//clear display lcd

int lcd_goto_XY (I2C_t* instance, int row, int col); //set proper location on screen

int lcd_send_line(I2C_t* instance, uint8_t* str, int line);


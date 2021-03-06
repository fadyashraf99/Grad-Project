/*
 * LCD.h
 *
 *  Created on: Nov 22, 2021
 *      Author: FADY
 */

#ifndef HAL_LCD_LCD_H_
#define HAL_LCD_LCD_H_

#include <util/delay.h>
#include "lcd_config.h"
#include "../../MCAL/Dio/Dio.h"

#define LCD_CMD_CLEAR_DISPLAY	             0x01
#define LCD_CMD_CURSOR_HOME		             0x02

// Display control
#define LCD_CMD_DISPLAY_OFF                0x08
#define LCD_CMD_DISPLAY_NO_CURSOR          0x0c
#define LCD_CMD_DISPLAY_CURSOR_NO_BLINK    0x0E
#define LCD_CMD_DISPLAY_CURSOR_BLINK       0x0F

// Function set
#define LCD_CMD_4BIT_2ROW_5X7              0x28
#define LCD_CMD_8BIT_2ROW_5X7              0x38

//functions prototype
void lcd_init(void);
void lcd_send_command(uint8_t);
void lcd_write_character(uint8_t);
void lcd_write_word(char[]);
void lcd_clear(void);
void lcd_set_courser(uint8_t, uint8_t);
void lcd_goto_xy(uint8_t, uint8_t);

#endif /* HAL_LCD_LCD_H_ */

/* 
 * File:   clcd.h
 */

#ifndef CLCD_H
#define	CLCD_H

#define _XTAL_FREQ                  20000000

#define CLCD_DATA_PORT_DDR          TRISD
#define CLCD_RS_DDR                 TRISE2
#define CLCD_EN_DDR                 TRISE1

#define CLCD_DATA_PORT              PORTD
#define CLCD_RS                     RE2
#define CLCD_EN                     RE1

#define INST_MODE                   0
#define DATA_MODE                   1

#define HI                          1
#define LOW                         0

#define LINE1(x)                    (0x80 + x)
#define LINE2(x)                    (0xC0 + x)

#define EIGHT_BIT_MODE              0x33
#define FOUR_BIT_MODE               0x02
#define TWO_LINES_5x8_4_BIT_MODE    0x28
#define CLEAR_DISP_SCREEN           0x01
#define DISP_ON_AND_CURSOR_OFF      0x0C
#define DISP_ON_AND_CURSOR_ON1       0X0E
#define DISP_ON_AND_CURSOR_OFF1							clcd_write(0x0C, INST_MODE)
#define DISP_ON_AND_CURSOR_ON							clcd_write(0x0E, INST_MODE)
#define SHIFT_CURSOR_LEFT								clcd_write(0x10, INST_MODE)
#define SHIFT_CURSOR_RIGHT								clcd_write(0x14, INST_MODE)

#define LCD_CURSOR_BLINK clcd_write(0x0F, INST_MODE)// curson keeps blinking
#define LCD_CURSOR_LINE2 clcd_write(0xC0, INST_MODE)   // move curson to scond line or second row

void init_clcd(void);
void clcd_putch(const char data, unsigned char addr);
void clcd_print(const char *str, unsigned char addr);

#endif	/* CLCD_H */


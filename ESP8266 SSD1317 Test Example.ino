#include <Wire.h>
#include <U8g2lib.h>

//U8G2_R0	No rotation, landscape
//U8G2_R1	90 degree clockwise rotation
//U8G2_R2	180 degree clockwise rotation
//U8G2_R3	270 degree clockwise rotation
//U8G2_MIRROR	No rotation, landscape, display content is mirrored (v2.6.x)
//U8G2_MIRROR_VERTICAL	Display content is vertically mirrored (v2.29.x)
U8G2_SSD1317_96X96_1_HW_I2C u8g2(/*ROTATION*/ U8G2_MIRROR,/*RST*/ -1,/*CLOCK*/ D1,/*DATA*/ D2);

void setup(void) {
  u8g2.begin();
}

void loop(void) {
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.drawStr(20,15,"Hello");
    u8g2.drawStr(20,30,"World!");
  } while ( u8g2.nextPage() );
  delay(1000);
}

//end
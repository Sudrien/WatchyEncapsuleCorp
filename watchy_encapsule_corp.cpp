#include "watchy_encapsule_corp.h"

void WatchyEncapsuleCorp::drawWatchFace() {
  display.fillScreen(GxEPD_BLACK);
  display.setTextColor(GxEPD_WHITE);

  display.fillCircle(100, 100, 90, GxEPD_WHITE);

  display.fillCircle(100, 100, 70, GxEPD_BLACK);

  display.fillRect(20, 69, 160, 20, GxEPD_WHITE);


  display.fillCircle(100, 100, 65, GxEPD_BLACK);

  display.fillCircle(100, 100, 60, GxEPD_WHITE);
  display.fillCircle(100, 100, 45, GxEPD_BLACK);

  display.fillRect(120, 89, 80, 22, GxEPD_BLACK);


  display.setFont(&FreeSansBold9pt7b);


  display.setCursor(58, 105);
  display.println("Encapsule Corp.");

  display.setFont(&FreeSansBold12pt7b);

  display.setCursor(77, 131);
  display.println(dayShortStr(currentTime.Wday));

  display.setCursor(71, 87);
  char buffer[5];
  sprintf(buffer, "%02d:%02d", currentTime.Hour, currentTime.Minute);
  display.println(buffer);

}




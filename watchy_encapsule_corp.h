#ifndef WATCHY_ENCAPSULE_CORP_H
#define WATCHY_ENCAPSULE_CORP_H

#include <Watchy.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include <Fonts/FreeSansBold12pt7b.h>
#include <sunset.h>

#define DEG2RAD 0.0174532925

class WatchyEncapsuleCorp : public Watchy{
    using Watchy::Watchy;
    public:
        WatchyEncapsuleCorp(const watchySettings& s) : Watchy(s) {}
        void drawWatchFace();
  };
#endif
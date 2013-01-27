#ifndef LIB_PINOCCIO_H_
#define LIB_PINOCCIO_H_

//#define PINOCCIO_DEBUG

#ifdef PINOCCIO_DEBUG
#  define D(x) x
#else
#  define D(x) 
#endif

#include "utility/phy.h"
#include "utility/hal.h"
#include "utility/sys.h"
#include "utility/nwk.h"
#include "utility/sysTimer.h"
#include "utility/halSleep.h"
#include "utility/halTemperature.h"
#include "utility/halRgbLed.h"
#include "utility/webGainspan.h"
#include "utility/webWifi.h"
#include "utility/webWifiServer.h"
#include "utility/webWifiClient.h"
#include "utility/mqttClient.h"

class PinoccioClass {

  public:
    PinoccioClass();
    ~PinoccioClass();

    void alive();
    void init();
    void loop();

    float getTemperature();

    bool isBatteryCharging();
    float getBatteryVoltage();

  protected:
};

extern PinoccioClass Pinoccio;

#endif
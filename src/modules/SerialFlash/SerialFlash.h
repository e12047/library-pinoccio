/**************************************************************************\
* Pinoccio Library                                                         *
* https://github.com/Pinoccio/library-pinoccio                             *
* Copyright (c) 2012-2014, Pinoccio Inc. All rights reserved.              *
* ------------------------------------------------------------------------ *
*  This program is free software; you can redistribute it and/or modify it *
*  under the terms of the BSD License as described in license.txt.         *
\**************************************************************************/
#ifndef LIB_PINOCCIO_SERIAL_FLASH_MODULE_H_
#define LIB_PINOCCIO_SERIAL_FLASH_MODULE_H_

#include "../Module.h"
#include "Flash.h"

namespace pinoccio {
  const uint8_t SERIAL_FLASH_BUFSIZE = 65;

  class SerialFlashModule : public Module {
    public:
      bool load();
      void loop();
      const __FlashStringHelper *name() const;

      uint8_t csPin;
      FlashClass *flash;

    // Ensure there is always exactly one instance by declaring it here
    // and making our constructor private
    private:
      using Module::Module;
    public:
      static SerialFlashModule instance;
  };
} // namespace pinoccio

#endif

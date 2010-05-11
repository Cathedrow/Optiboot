/*
  HardwareSerial.h - Hardware serial library for Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.
  Modified 29 January 2009, Marius Kintel for Sanguino - http://www.sanguino.cc/

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef HardwareSerial_h
#define HardwareSerial_h

#include <inttypes.h>

#include "Print.h"

class HardwareSerial : public Print
{
 private:
  uint8_t _uart;
 public:
  HardwareSerial(uint8_t uart);
  void begin(long);
  uint8_t available(void);
  int read(void);
  void flush(void);
  virtual void write(uint8_t);
};

extern HardwareSerial Serial;

#if defined(__AVR_ATmega644P__)
extern HardwareSerial Serial1;
#endif

#endif

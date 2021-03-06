/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: SparkFun SAMD21 Mini Breakout, Platform=samd, Package=SparkFun
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define F_CPU 48000000L
#define ARDUINO 166
#define ARDUINO_SAMD_ZERO
#define ARDUINO_ARCH_SAMD
#define __SAMD21G18A__
#define USB_VID 0x1B4F
#define USB_PID 0x8D21
#define USBCON
#define __cplusplus
#define __ARM__
#define __inline__
#define __asm__(x)
#define __attribute__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__

#define __ICCARM__
#define __ASM
#define __INLINE
#define __GNUC__ 0
#define __ICCARM__
#define __ARMCC_VERSION 400678
//#define __attribute__(noinline)

#define prog_void
#define PGM_VOID_P int
            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}



#include <arduino.h>
#include <pins_arduino.h> 
#include <variant.h> 
#undef F
#define F(string_literal) ((const PROGMEM char *)(string_literal))
#undef PSTR
#define PSTR(string_literal) ((const PROGMEM char *)(string_literal))
#undef cli
#define cli()
#define pgm_read_byte(address_short)
#define pgm_read_word(address_short)
#define pgm_read_word2(address_short)
#define digitalPinToPort(P)
#define digitalPinToBitMask(P) 
#define digitalPinToTimer(P)
#define analogInPinToBit(P)
#define portOutputRegister(P)
#define portInputRegister(P)
#define portModeRegister(P)
#include <..\SPI32_Test\SPI32_Test.ino>
#include <..\SPI32_Test\I2C32.cpp>
#include <..\SPI32_Test\I2C32.h>
#include <..\SPI32_Test\MPU6XXX32.cpp>
#include <..\SPI32_Test\MPU6XXX32.h>
#include <..\SPI32_Test\SPI2C.cpp>
#include <..\SPI32_Test\SPI2C.h>
#include <..\SPI32_Test\SPI32.cpp>
#include <..\SPI32_Test\SPI32.h>
#endif

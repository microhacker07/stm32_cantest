#include <Arduino.h>
#include "ACANFD_STM32.h"

#if defined (USBCON) && defined(USBD_USE_CDC)
#include "USBSerial.h"
USBSerial usb_serial;
#endif

void setup()
{
	#if defined (USBCON) && defined(USBD_USE_CDC)
	usb_serial.begin(9600);
	#endif
}

void loop()
{	
	
}
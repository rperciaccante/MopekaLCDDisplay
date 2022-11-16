#include <SPI.h>
#include <TFT_eSPI.h>
#include "esphome.h"
#include "Free_Fonts.h"


#ifndef DISPLAYCONTROLLER
#define DISPLAYCONTROLLER


class DisplayController : public Component

{
	public:

	void setup() override {
		tft.init();
	}
	TFT_eSPI tft = TFT_eSPI();
	TFT_eSprite spr = TFT_eSprite(&tft); // Sprite object
	private:
};
//DisplayController * displayControllerComponent = new DisplayController();
DisplayController * display = new DisplayController();

#endif
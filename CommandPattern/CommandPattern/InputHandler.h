#include "Command.h"
#include "SFML/Graphics.hpp"
class InputHandler
{
public:
	void handleInput();
	
private:
	Command* buttonQ_;
	Command* buttonW_;
	Command* buttonE_;
	Command* buttonR_;
	Command* buttonT_;
	Command* buttonY_;

	Command* buttonBackspace_;
	Command* buttonTab_;

};

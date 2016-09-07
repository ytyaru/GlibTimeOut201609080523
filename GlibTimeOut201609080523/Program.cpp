#include <gtkmm.h>
#include "MyWindow.h"
int main(int argc, char* argv[])
{
	Gtk::Main kit( argc, argv );
	MyWindow window;
	Gtk::Main::run( window );
	return 0;
}

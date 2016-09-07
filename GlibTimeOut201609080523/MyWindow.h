#pragma once
#include <gtkmm.h>
#include "MyArea.h"
class MyWindow : public Gtk::Window
{
public:
	MyWindow(void);
	virtual ~MyWindow(void);
private:
	MyArea m_drawarea;
};

#include "MyWindow.h"
MyWindow::MyWindow(void)
{
	set_default_size(480,200);
	add(m_drawarea);
	show_all_children();
}
MyWindow::~MyWindow(void)
{
}

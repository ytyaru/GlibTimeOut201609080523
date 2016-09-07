#pragma once
#include <gtkmm/drawingarea.h>
class MyArea : public Gtk::DrawingArea
{
public:
	MyArea();
	virtual ~MyArea();
protected:
	bool on_expose_event( GdkEventExpose* event );
private:
	int m_value;
	Pango::FontDescription m_font;
	Cairo::FontOptions m_fontOption;
	bool on_timeout();
};

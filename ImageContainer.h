#pragma once
#include "Figure.h"
namespace CourseWork {

using namespace System;
using namespace System::IO;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


ref class ImageContainer
{
private:
	static ImageContainer^ inner = nullptr;
	List<Figure^>^ figures;
	PictureBox^ pictureBox;
	Figure^ current;
	Coordinates^ imageCenter;
	bool traces;
	Timer^ timer;
	double time;
	double speed;
	bool auto_move;
public:
	static ImageContainer^ getContainer();

	List<Figure^>^ getAllFigures();
	void setAllFigures( List<Figure^>^ list);

	void removeAll();
	void reDraw(PictureBox^ pictureBox);

	void timer_Tick( System::Object^ sender, System::EventArgs^ e );

	void autoMove(bool move);
	
	void handleIntersections();

	void pictureBox_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e);
	
	ImageContainer(void);

	void addFigure(Figure^ figure);

	int pbWidth();
	int pbHeight();
 
	List<String^>^ getFigNames();

	String^ createName(String^ figureType);

	void selectByName( String^ name );

	void unselect();

	Figure^ getFigureByName(String^ name);

	Figure^ getCurrent();

	void deleteCurrent();

	void deleteByName(String^ name);

	Point^ toScreen(double x, double y);

	void createScreen(int width, int height);

	void groupFigures();

	bool getDrawTraces();

	void setDrawTraces(bool traces);
};

}
#include "BrezenkhemDrawing.h"

BrezenkhemDrawing::BrezenkhemDrawing(System::Windows::Forms::PictureBox^ pictureBox)
{
	this->pictureBox = pictureBox;
}


BrezenkhemDrawing::~BrezenkhemDrawing()
{
}


System::Windows::Forms::PictureBox ^ BrezenkhemDrawing::getPictureBox()
{
	return this->pictureBox;
}

void BrezenkhemDrawing::DrawLine(float x0, float y0, float x1, float y1)
{
	BrezenkhemLine(x0, y0, x1, y1);
	Draw();
}

void BrezenkhemDrawing::DrawLine(Point^ point0, Point^ point1)
{
	BrezenkhemLine(point0->X, point0->Y, point1->X, point1->Y);
	Draw();
}

void BrezenkhemDrawing::DrawCircle(float x0, float y0, float radius)
{
	BrezenkhemCircle(x0, y0, radius);
	Draw();
}

void BrezenkhemDrawing::DrawCircle(Point^ center, float radius)
{
	BrezenkhemCircle(center->X, center->Y, radius);
	Draw();
}

void BrezenkhemDrawing::DrawEllipse(float x0, float y0, float width, float height)
{
	BrezenkhemEllipse(x0, y0, width, height);
	Draw();
}

void BrezenkhemDrawing::DrawEllipse(Point^ center, float width, float height)
{
	BrezenkhemEllipse(center->X, center->Y, width, height);
	Draw();
}

void BrezenkhemDrawing::Draw()
{
	Bitmap^ bitmap = gcnew Bitmap(pictureBox->Image);

	for (size_t i = 0; i < points->Count; i++)
	{
		if (points[i]->Item1 < bitmap->Width && points[i]->Item1 > 0 &&
			points[i]->Item2 < bitmap->Height && points[i]->Item2 > 0)
		{
			bitmap->SetPixel(points[i]->Item1, points[i]->Item2, Color::Black);
		}		
	}

	pictureBox->Image = bitmap;

}


#include <iostream>
#include <string>
#include <list>

using namespace std;
class Shape
{
public:
	virtual void draw() = 0; // we define the general behavior
};
class Circle : public Shape
{
public:
	void draw() { cout << "circle\n"; } // we specify the behavior for this shape
};
class Triangle : public Shape
{
public:
	void draw() { cout << "triangle\n"; } // we specify the behavior for this shape
};

class Drawing
{
public:
	list <Shape*> pShapeList;
	Drawing(list<Shape*> pShape) {
		this->pShapeList = pShape;
	}
	void drawShape() // we draw the Shape. Any extension of Shape with draw() implemented.
					// An instance of Shape is injected in the drawShape method
	{
		for (Shape* shape : this->pShapeList) {
			shape->draw();
		}
	}
	
};
int main()
{
	list<Shape*> shapelist;
	shapelist.push_back(new Triangle());
	shapelist.push_back(new Circle());
	Drawing* d = new Drawing(shapelist);
	d->drawShape();

}
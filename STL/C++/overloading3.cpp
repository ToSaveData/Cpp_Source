#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	
	const Point& operator++(int)
	{
		const Point retobj(xpos, ypos);
		xpos += 1;
		ypos += 1;
		return retobj;
	}
	
	Point& operator--(int)
	{
		this->xpos = -1;
		this->ypos = -1;
		return *this;
	}
	//값을 넘겨줘야 하기 때문에 레퍼런스로 넘겨준다 
	 
	//friend Point& operator--(Point& ref);
};


//Point&operator--(Point&ref)
//	{
//		ref.xpos -= 1;
//		ref.ypos -= 1;
//		return ref;
//	}


int main(void)
{
	Point pos(1, 2);
	pos++;
	pos.ShowPosition();
	pos--;
	pos.ShowPosition();
	pos++;
	pos.ShowPosition();
	(pos--)--;
	pos.ShowPosition();
	return 0;
}


/*
* Point & operator--(int)
* {
* this.xpos =-1;
* this.ypos =-1;
* return *this;
* }
*/
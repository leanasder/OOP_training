#include <iostream>
using namespace std;

class RGB
{
    int R, B, G;
public:
    RGB()
    {
	R = 0;
	B = 0;
	G = 0;
	cout << "RGB()" << endl;
    }
    RGB(int r, int b, int g)
    {
	if ((r >= 0) && (r <= 255) && (b >= 0 ) && (b <=255) && (g >= 0)
	   && (g <= 255)) {
	R = r;
	B = b;
	G = g;
	cout << "RBB(r, g, b)" << endl;
	}
    }
    void print()
    {
	cout << '(' << R << ',' << G << ',' << B << ')' << endl;
    }
    void invert()
    {
	R = 255 - R;
	B = 255 - B;
	G = 255 - G;
    }
};

int main()
{ 
    RGB color(80, 34, 200);
    color.print();
    return 0;
}



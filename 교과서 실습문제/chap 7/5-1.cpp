#include <iostream>
using namespace std;

class Color {
	int red, blue, green;
public:
	Color(int red = 0, int green = 0, int blue = 0) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	Color operator + (Color a) {
		Color c;
		c.red = this->red + a.red;
		c.green = this->green + a.green;
		c.blue = this->blue + a.blue;
		return c;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}
	bool operator ==(Color b) {
		if (red == b.red && blue == b.blue && green == b.green) {
			return true;
		}
		return false;
	}
};
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}
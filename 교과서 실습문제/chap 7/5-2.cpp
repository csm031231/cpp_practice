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
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}
	friend Color operator + (Color a, Color a2);
	friend bool operator ==(Color b, Color b2);
};
Color operator + (Color a, Color a2) {
	Color c;
	c.red = a.red + a2.red;
	c.green = a.green + a2.green;
	c.blue = a.blue + a2.blue;
	return c;
}
bool operator ==(Color b, Color b2) {
	if (b.red == b2.red && b.blue == b2.blue && b.green == b2.green) {
		return true;
	}
	return false;
}
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
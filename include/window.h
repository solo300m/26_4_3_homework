#pragma once

#include <iostream>

using namespace std;

class WindowMy {
private:
	int xStart;
	int yStart;
	int xWidth;
	int yHeight;
public:
	WindowMy() {
		xStart = 0;
		yStart = 0;
		xWidth = 1;
		yHeight = 1;
	}
	WindowMy(int x, int y, int width, int height) {
		xStart = x;
		yStart = y;
		xWidth = width;
		yHeight = height;
	}
	int getXStart() {
		return xStart;
	}
	int getYStart() {
		return yStart;
	}
	int getXWidth() {
		return xWidth;
	}
	int getYHeight() {
		return yHeight;
	}
	void setXStart(int x) {
		xStart = x;
	}
	void setYStart(int y) {
		yStart = y;
	}
	void setXWidth(int xW) {
		xWidth = xW;
	}
	void setYHeight(int yH) {
		yHeight = yH;
	}
	void display() {
		for (int y = 0; y <= yStart; y++) {
			cout << endl;
		}
		for (int i = 0; i < xStart; i++) {
			cout << " ";
		}
		for (int j = xStart; j <= xStart + xWidth; j++) {
			cout << "-";
		}
		cout << endl;
		for (int y = 0; y < yHeight; y++) {
			for (int i = 0; i < xStart; i++) {
				cout << " ";
			}
			for (int j = xStart; j <= xStart + xWidth; j++) {
				if (j == xStart || j == xStart + xWidth) {
					cout << "|";
				}
				else if (j > xStart || j < xStart + xWidth) {
					cout << " ";
				}
			}
			cout << endl;
		}
		for (int i = 0; i < xStart; i++) {
			cout << " ";
		}
		for (int j = xStart; j <= xStart + xWidth; j++) {
			cout << "-";
		}
		cout << endl;
		cout << "Окно с координатами верхнего левого угла X=" << xStart << " Y=" << yStart << endl;
		cout << "Ширина окна - " << xWidth << "Высота окна - " << yHeight << endl;
	}
	void move(int x, int y) {
		xStart = xStart + x;
		yStart = yStart + y;
	}
	void resize(int width, int height) {
		xWidth = width;
		yHeight = height;
	}
};
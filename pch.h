//
// pch.h
// Header for standard system include files.
//

#pragma once



class Box
{
private:
	int m_length, m_height, m_breadth;
public:
	Box();
	Box(int);
	Box(int, int, int);
	Box(const Box&);
	int length();
	int breadth();
	int height();
	int volume();
	void display();

};

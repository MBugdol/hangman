#pragma once
#include <string>
#include <vector>

class Box
{
public:
	virtual void draw(size_t) = 0;
protected:
	std::vector<std::string> m_content;
};
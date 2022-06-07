#pragma once
#include "Box.h"

class ArtBox : public Box
{
public:
	void draw(size_t) override;
	void updateContent(const std::vector<std::string>&);
private:
	size_t m_art_width;
};


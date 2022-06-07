#ifndef TEXTBOX
#define TEXTBOX
#include <string>
#include <vector>

class TextBox {
public:
    void updateContent(std::vector<std::string>);
private:
    std::vector<std::string> m_content;
    size_t m_max_width;
    bool m_preserve_endl;
};

#endif
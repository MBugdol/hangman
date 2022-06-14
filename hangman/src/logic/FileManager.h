#pragma once
#include <string>
#include <string_view>
#include <filesystem>
#include <fstream>

namespace logic {
    class FileManager {
    public:
        FileManager(std::string_view sv) : m_fullpath((m_datapath/sv).string()) {}
        static void setDatapathFromMainArgs(const char**);
        
        void startInput();
        void startOutput();
        std::fstream& file() {return m_file;}
    private:
        static std::filesystem::path m_datapath;
        std::string m_fullpath;
        std::fstream m_file;
    };
}
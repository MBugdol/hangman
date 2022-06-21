#pragma once
#include "hangmanpch.h"

namespace logic {
    class FileManager {
    public:
        FileManager(std::string_view sv) : m_fullpath((m_datapath/sv).string()) {}
        ~FileManager() {m_file.close();}

        static void setDatapath(std::string_view filepath);
        
        void startInput();
        void startOutput();
        std::fstream& file() {return m_file;}
    private:
        static std::filesystem::path m_datapath;
        std::string m_fullpath;
        std::fstream m_file;
    };
}
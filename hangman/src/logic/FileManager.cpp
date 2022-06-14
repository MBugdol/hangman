#include "logic/FileManager.h"
#include <iostream>

namespace logic {
    std::filesystem::path FileManager::m_datapath;
    void FileManager::setDatapathFromMainArgs(const char** argv) {
        m_datapath = m_datapath / argv[0] / "../../../hangman/data";
        m_datapath = m_datapath.lexically_normal();
    }
    void FileManager::startInput() {
        m_file.close();
        m_file.open(m_fullpath, std::ios::in);
    }
    void FileManager::startOutput() {
        m_file.close();
        m_file.open(m_fullpath, std::ios::out);
    }
}
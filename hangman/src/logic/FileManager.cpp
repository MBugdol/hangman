#include "logic/FileManager.h"

namespace logic {
    std::filesystem::path FileManager::m_datapath;
    void FileManager::setDatapath(std::string_view filepath) {
        m_datapath = m_datapath / filepath / "../../../hangman/data";
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
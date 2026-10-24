#include "FileForgeCore.hpp"

// Making the constructor
FileOwner::FileOwner(const char* filename, const char* mode)
{
    m_handle = std::fopen(filename, mode);
}

bool FileOwner::isOpen() const
{
    return m_handle != nullptr;
}


// Making the Destructor
FileOwner::~FileOwner()
{
    if(m_handle != nullptr){
        std::fclose(m_handle);
    }
}
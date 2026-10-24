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

// Implementing the Move Constructor and Operator
FileOwner::FileOwner(FileOwner&& other) noexcept
{
    this->m_handle = other.m_handle;
    other.m_handle = nullptr;
}

FileOwner& FileOwner::operator=(FileOwner&& other) noexcept
{
    if(this == &other) return *this;
    if(this->m_handle != nullptr)
    {
        std::fclose(this->m_handle);
    }

    this->m_handle = other.m_handle;
    other.m_handle = nullptr;

    return *this;
}


// Making the Destructor
FileOwner::~FileOwner()
{
    if(m_handle != nullptr){
        std::fclose(m_handle);
    }
}
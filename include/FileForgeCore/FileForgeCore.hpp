#pragma once
#include <cstdio> 

class FileOwner
{
    private:
        std::FILE* m_handle = nullptr;

    public:
        FileOwner(const char* filename, const char* mode);
        ~FileOwner();

        bool isOpen() const;
};
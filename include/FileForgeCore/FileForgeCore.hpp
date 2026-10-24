#pragma once
#include <cstdio> 

class FileOwner
{
    private:
        std::FILE* m_handle = nullptr;

    public:
        FileOwner(const char* filename, const char* mode);
        ~FileOwner();

        // Restrictin the copies
        FileOwner(const FileOwner&) = delete;
        FileOwner& operator=(const FileOwner&) = delete;

        // Implementing the Move Constructor
        FileOwner(FileOwner&& other) noexcept;
        FileOwner& operator=(FileOwner&& other) noexcept;

        bool isOpen() const;
};
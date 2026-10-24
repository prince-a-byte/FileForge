#include <iostream>
#include "FileForgeCore.hpp"
using namespace std;

int main()
{
    cout<<"FileForge One Stop destination for Files\n";
    FileOwner a("File.txt", "r");

    cout<<a.isOpen()<<'\n';
    return 0;
}
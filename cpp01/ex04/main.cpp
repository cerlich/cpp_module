#include <iostream>
#include <fstream>

void ReplaceStringInPlace(std::string& subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
}

int main()
{
    std::string s1 = "poo";
    std::string s2 = "qoo";
    std::string buf;
    std::ifstream ifs;
    std::ofstream ofs("test.replace");

    ifs.open("test");

    if (!ifs.is_open())
        std::cout << "error" << std::endl;

    while(!ifs.eof())
    {
        buf = "";
        getline(ifs, buf);
        ReplaceStringInPlace(buf, s1, s2);
        ofs << buf << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}
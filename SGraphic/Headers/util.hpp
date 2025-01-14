#ifndef UTIL_HPP
#define UTIL_HPP

#include <string>
#include <fstream>

namespace Util {
  std::string readShader(const std::string& filename);
  std::string readFile(const std::string& path);
}

#endif

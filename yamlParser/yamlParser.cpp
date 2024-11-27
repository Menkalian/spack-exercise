#include "yamlParser.hpp"

#include <iostream>

#ifdef WITH_YAML

#include "yaml-cpp/yaml.h"

void parseConfig(const std::string yamlFile){
  YAML::Node config = YAML::LoadFile(yamlFile);
  std::cout << "Version: " << config["version"].as<std::string>() << std::endl;
}

#else

void modifyAndPrintSets() {
  std::cout << "Yaml-Parser was disabled at build time. Build package with '+yaml' to enable functionalit>
}

#endif

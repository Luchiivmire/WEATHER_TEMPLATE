#pragma once
#include <fstream>
#include "Service.h"
#include "../WEATHER_TEMPLATE/json-develop/single_include/nlohmann/json.hpp"
using json = nlohmann::json;
using namespace std;
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

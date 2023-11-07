/**
 * @file config.hpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-11-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include <iostream>
#include <string>
#include <fstream>

#include "./../../lib/nlohmann/json.hpp"

extern std::string BOT_TOKEN;

std::string read_discord_token();

#endif
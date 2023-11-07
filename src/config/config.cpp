/**
 * @file config.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-11-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "config.hpp"

using json = nlohmann::json;

std::string read_discord_token()
{
    std::string token = "";

    std::ifstream f("./config/product.json");

    json config_file = json::parse(f);
    try
    {
        token = config_file.at("token");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        exit(1);
    }

    std::cout << token;
    return token;
}
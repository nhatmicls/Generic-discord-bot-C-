/**
 * @file slash_command.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-11-16
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "slash_command.hpp"

/// @brief Using for mapping slash command to sub folder
/// @param bot Get info about bot
/// @param event Get info about event
void mapping_slash_command(dpp::cluster *bot, dpp::slashcommand_t &event)
{
    if (event.command.get_command_name() == "ping")
    {
        event.reply("Pong!");
    }
}

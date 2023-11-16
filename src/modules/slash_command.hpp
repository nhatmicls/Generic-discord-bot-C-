/**
 * @file slash_command.hpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-11-16
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef SLASH_COMMAND_H_
#define SLASH_COMMAND_H_

#include "dpp/dpp.h"

#include "command/command.hpp"
#include "member_manager/member_manager.hpp"

void mapping_slash_command(dpp::cluster *bot, dpp::slashcommand_t &event);

#endif

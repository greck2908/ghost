/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                           *
 *  Ghost, a micro-kernel based operating system for the x86 architecture    *
 *  Copyright (C) 2015, Max Schlüssel <lokoxe@gmail.com>                     *
 *                                                                           *
 *  This program is free software: you can redistribute it and/or modify     *
 *  it under the terms of the GNU General Public License as published by     *
 *  the Free Software Foundation, either version 3 of the License, or        *
 *  (at your option) any later version.                                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public License        *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.    *
 *                                                                           *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef __GHOST_DEBUG_INTERFACE__
#define __GHOST_DEBUG_INTERFACE__

#include "ghost/stdint.h"
#include "debug/debug_protocol.hpp"
#include "debug/debug_interface_mode.hpp"
#include "build_config.hpp"

// determines whether the interface is initialized
extern bool g_debug_interface_initialized;

/**
 *
 */
class g_debug_interface {
public:

	/**
	 *
	 */
	static void initialize(uint16_t port);

	/**
	 *
	 */
	static void writeLogCharacter(char c);

	/**
	 *
	 */
	static void writeByte(uint8_t value);

	/**
	 *
	 */
	static void writeShort(uint16_t value);

	/**
	 *
	 */
	static void writeInt(uint32_t value);

	/**
	 *
	 */
	static void writeLong(uint64_t value);

	/**
	 *
	 */
	static void writeString(const char* string);

};

#endif

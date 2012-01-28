#pragma once
/*
 *      Copyright (C) 2005-2011 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#define _FILE_OFFSET_BITS 64
#include <string.h>
#include <errno.h>
#include <sys/time.h>
#ifndef __APPLE__
#include <sys/prctl.h>
#endif
#include <pthread.h>
#include <poll.h>
#include <semaphore.h>
#include <stdint.h>

#define LIBTYPE
#define DECLSPEC

typedef int socket_t;
#define INVALID_SOCKET (-1)
#define SOCKET_ERROR   (-1)


/*
 * This file is part of the libCEC(R) library.
 *
 * libCEC(R) is Copyright (C) 2011-2013 Pulse-Eight Limited.  All rights reserved.
 * libCEC(R) is an original work, containing original code.
 *
 * libCEC(R) is a trademark of Pulse-Eight Limited.
 *
 * SUNXI adpater port is Copyright (C) 2015 by Mateusz Kozak
 *
 * You can redistribute this file and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *
 */

#include "env.h"
#include <stdio.h>

#if defined(HAVE_SUNXI_API)
#include "SUNXIAdapterDetection.h"


using namespace CEC;

bool CSUNXICECAdapterDetection::FindAdapter(void)
{
  return access(CEC_SUNXI_PATH, 0) == 0;
}

#endif

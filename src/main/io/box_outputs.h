/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "common/time.h"
#include "config/parameter_group.h"
#include "drivers/io.h"

#define BOX_OUTPUT_COUNT 2

typedef struct boxOutputsConfig_s {
    ioTag_t io[BOX_OUTPUT_COUNT];
    uint8_t ioMode[BOX_OUTPUT_COUNT];
} boxOutputsConfig_t;

#ifdef USE_BOX_OUTPUTS
PG_DECLARE(boxOutputsConfig_t, boxOutputsConfig);
#endif

void boxOutputsUpdate(timeUs_t currentTimeUs);

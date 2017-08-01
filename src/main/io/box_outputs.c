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

#include "stdbool.h"
#include "stdint.h"

#include "config/parameter_group_ids.h"
#include "io/box_outputs.h"

#ifdef USE_BOX_OUTPUTS

PG_REGISTER(boxOutputsConfig_t, boxOutputsConfig, PG_BOX_OUTPUTS_CONFIG, 0);

void boxOutputsUpdate(timeUs_t currentTimeUs)
{
    UNUSED(currentTimeUs);

    // TODO
}

#endif

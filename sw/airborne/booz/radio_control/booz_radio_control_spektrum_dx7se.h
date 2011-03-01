/*
 * $Id$
 *  
 * Copyright (C) 2008-2009 Antoine Drouin <poinix@gmail.com>
 *
 * This file is part of paparazzi.
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, write to
 * the Free Software Foundation, 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA. 
 */

#ifndef BOOZ_RADIO_CONTROL_SPEKTRUM_DX7SE_H
#define BOOZ_RADIO_CONTROL_SPEKTRUM_DX7SE_H

#define RADIO_CONTROL_NB_CHANNEL 7
#define RADIO_CONTROL_ROLL       0
#define RADIO_CONTROL_THROTTLE   1
#define RADIO_CONTROL_PITCH      2
#define RADIO_CONTROL_YAW        3
#define RADIO_CONTROL_MODE       5

#define RC_SPK_SYNC_2 0x12

#define RC_SPK_THROWS { MAX_PPRZ/MAX_SPK, \
                        MAX_PPRZ/MAX_SPK, \
                       -MAX_PPRZ/MAX_SPK, \
                        MAX_PPRZ/MAX_SPK, \
                        MAX_PPRZ/MAX_SPK, \
                       -MAX_PPRZ/MAX_SPK, \
                        MAX_PPRZ/MAX_SPK }

/*
  aileron 1
  elevator 2
  rudder 3
  gear 4
  throttle 5
*/

#endif /* BOOZ_RADIO_CONTROL_SPEKTRUM_DX7SE_H */
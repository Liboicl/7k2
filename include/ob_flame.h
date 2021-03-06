/*
 * Seven Kingdoms 2: The Fryhtan War
 *
 * Copyright 1999 Enlight Software Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Filename    : OB_FLAME.H
// Description : non-moving bullet attack (flamethrower)


#ifndef __OB_FLAME_H
#define __OB_FLAME_H

#include	<obullet.h>

// cur_action of BulletFlame is SPRITE_STOP before die

#pragma pack(1)
class BulletFlame : public Bullet
{
public:
	BulletFlame();

	void 	init(char parentType, short parentRecno, short targetXLoc, short targetYLoc, char targetMobileType);
	void	process_idle();
	char	display_layer();
	int	reflect( int baseObjRecno ) { return 0;}

	//-------------- multiplayer checking codes ---------------//
	virtual	UCHAR crc8();
	virtual	void	clear_ptr();
};
#pragma pack()

#endif

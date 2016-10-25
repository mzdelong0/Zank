/*
 * functions_prototypes.h
 *
 * Copyright 2012, 2016 Andy Alt <andyqwerty@users.sourceforge.net>
 *
 * https://github.com/andy5995/Zank/wiki
 *
 * This program is free software; you can redistribute it and/or modify
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include "Zank.h"

bool accuse(void);
void showitems(void);
void tree(void);
void wall(void);
void lake(void);
void showMap(bool Visited[X][Y]);
void prompt(short pCtr, short iCtr);
bool borderPatrol(void);

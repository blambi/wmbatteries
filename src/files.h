/*
 *    wmbatteries - A dockapp to monitor ACPI status of two batteries
 *    Copyright (C) 2003  Florian Krohs <krohs@uni.de>

 *    Based on work by Thomas Nemeth <tnemeth@free.fr>
 *    Copyright (C) 2002  Thomas Nemeth <tnemeth@free.fr>
 *    and on work by Seiichi SATO <ssato@sh.rim.or.jp>
 *    Copyright (C) 2001,2002  Seiichi SATO <ssato@sh.rim.or.jp>
 *    and on work by Mark Staggs <me@markstaggs.net>
 *    Copyright (C) 2002  Mark Staggs <me@markstaggs.net>

 *    This program is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.

 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.

 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#define THERMAL_FILE "/sys/class/thermal/thermal_zone0/temp"

#define BAT0_PATH "/sys/class/power_supply/BAT0/"
#define BAT1_PATH "/sys/class/power_supply/BAT1/"

#define BAT0_STATUS_FILE "/sys/class/power_supply/BAT0/status"
#define BAT0_CHARGE_FULL_FILE "/sys/class/power_supply/BAT0/charge_full"
#define BAT0_CHARGE_NOW_FILE "/sys/class/power_supply/BAT0/charge_now"
#define BAT1_STATUS_FILE "/sys/class/power_supply/BAT0/status"
#define BAT1_CHARGE_FULL_FILE "/sys/class/power_supply/BAT0/charge_full"
#define BAT1_CHARGE_NOW_FILE "/sys/class/power_supply/BAT0/charge_now"

#define BAT0_INFO_FILE "/proc/acpi/battery/BAT0/info"
#define BAT1_INFO_FILE "/proc/acpi/battery/BAT1/info"
#define AC_STATE_FILE "/sys/class/power_supply/ADP1/online" // AC on some machines..

/*
 * GrandOrgue - free pipe organ simulator based on MyOrgan
 *
 * MyOrgan 1.0.6 Codebase - Copyright 2006 Milan Digital Audio LLC
 * MyOrgan is a Trademark of Milan Digital Audio LLC
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston,
 * MA 02111-1307, USA.
 */

#ifndef GORGUESTOP_H
#define GORGUESTOP_H

#include "IniFileConfig.h"
#include "GOrgueDrawStop.h"

class GOrgueStop : public GOrgueDrawstop
{
public:
	GOrgueStop();
	void Load(IniFileConfig& cfg, wxString group, GOrgueDisplayMetrics* displayMetrics);
	void Save(IniFileConfig& cfg, bool prefix);
	bool Set(bool on);
	~GOrgueStop(void);

	wxInt16 m_ManualNumber;

	bool Percussive : 1;
	bool m_auto : 1;
	wxInt16 AmplitudeLevel;
	wxInt16 NumberOfLogicalPipes;
	wxInt16 FirstAccessiblePipeLogicalPipeNumber;
	wxInt16 FirstAccessiblePipeLogicalKeyNumber;
	wxInt16 NumberOfAccessiblePipes;
	wxInt16 WindchestGroup;
	short* pipe;
};

#endif /* GORGUESTOP_H_ */

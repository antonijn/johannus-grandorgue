/*
 * Copyright 2006 Milan Digital Audio LLC
 * Copyright 2009-2023 GrandOrgue contributors (see AUTHORS)
 * License GPL-2.0 or later
 * (https://www.gnu.org/licenses/old-licenses/gpl-2.0.html).
 */

#include "GOMidiShortcutPattern.h"

bool GOMidiShortcutPattern::operator==(
  const GOMidiShortcutPattern &other) const {
  return m_type == other.m_type && m_ShortcutKey == other.m_ShortcutKey
    && m_MinusKey == other.m_MinusKey;
}
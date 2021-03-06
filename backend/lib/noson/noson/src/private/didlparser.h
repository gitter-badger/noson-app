/*
 *      Copyright (C) 2014-2015 Jean-Luc Barriere
 *
 *  This library is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published
 *  by the Free Software Foundation; either version 3, or (at your option)
 *  any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this library; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301 USA
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#ifndef DIDLPARSER_H
#define	DIDLPARSER_H

#include <local_config.h>
#include "../digitalitem.h"

#include <vector>

namespace NSROOT
{
  class DIDLParser
  {
  public:
    DIDLParser(const char* document, unsigned reserve = 0);
    virtual ~DIDLParser() {}

    bool IsValid() { return m_parsed; }

    std::vector<DigitalItemPtr>& GetItems() { return m_items; }
    
  private:
    const char* m_document;
    bool m_parsed;

    std::vector<DigitalItemPtr> m_items;

    bool Parse();

  };
}


#endif	/* DIDLPARSER_H */


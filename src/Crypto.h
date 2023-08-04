/******************************************************************************
    Copyright (C) 2002-2015 Argentum Online & Dakara Online Developers

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

/*
 * Crypto.h
 *
 *  Created on: 28/9/2014
 *      Author: ale
 */

#ifndef CRYPTO_H_
#define CRYPTO_H_

#include <cstdint>
#include <cstdlib>
#include <string>

#include "sha1.h"

std::string CryptoMakeRandomString(size_t len);

std::vector<uint8_t> CryptoMakeRandomVector(size_t len);

#endif /* CRYPTO_H_ */

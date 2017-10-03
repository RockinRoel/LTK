
/*
 ***************************************************************************
 *  Copyright 2007,2008 Impinj, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ***************************************************************************
 */

/** 
 *****************************************************************************
 **
 ** @file ltkcpp_platform.h
 **
 ** @brief Based types for the LKTCPP library
 ** 
 ** Contains the platform dependent basic types for the LTKCPP library
 **
 *****************************************************************************/

/*
 * Include file to establish context
 * for the LLRP Tool Kit (LTK) C++ platform.
 */

#include <list>
#include <cstring>         /* memcpy() */
#include <cstdint>

#define FALSE       0
#define TRUE        1

namespace LLRP
{

/*
 * Typedefs of simple types.
 * The LTK/C++ uses these types extensively.
 * To retarget to another C++ platform change
 * these typedefs. Everything else should be
 * good to go.
 */

/** Basic type for LLRP 8-bit unsigned data values*/
using llrp_u8_t = std::uint8_t;
/** Basic type for LLRP 8-bit signed data values*/
using llrp_s8_t = std::int8_t;
/** Basic type for LLRP 16-bit unsigned data values*/
using llrp_u16_t = std::uint16_t;
/** Basic type for LLRP 16-bit signed data values*/
using llrp_s16_t = std::int16_t;
/** Basic type for LLRP 32-bit unsigned data values*/
using llrp_u32_t = std::uint32_t;
/** Basic type for LLRP 32-bit signed data values*/
using llrp_s32_t = std::int32_t;
/** Basic type for LLRP 64-bit unsigned data values*/
using llrp_u64_t = std::uint64_t;
/** Basic type for LLRP 64-bit signed data values*/
using llrp_s64_t = std::int16_t;
/** Basic type for LLRP 1-bit unsigned data values*/
using llrp_u1_t = std::uint8_t;
/** Basic type for LLRP 2-bit unsigned data values*/
using llrp_u2_t = std::uint8_t;
/** Basic type for LLRP utf8 character values*/
using llrp_utf8_t = std::uint8_t;
/** Basic type for LLRP boolean values*/
using llrp_bool_t = bool;
/** Basic type for LLRP byte encoded values */
using llrp_byte_t = std::uint8_t;

};  /* namespace LLRP */

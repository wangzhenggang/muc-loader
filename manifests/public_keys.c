/*
 * Copyright (c) 2015 Google Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stddef.h>
#include "crypto.h"

const crypto_public_key public_keys[] = {
    {
        .type = ALGORITHM_TYPE_RSA2048_SHA256,
        .key_name = "APP.5-1-9@s2fsk.mods.motorola.com",
        .key = {
            0xb0, 0x98, 0xa3, 0xe1, 0x13, 0xf3, 0x7e, 0x2c, 0x72, 0x9e, 0xde, 0xe3,
            0xa0, 0x0e, 0x7d, 0x69, 0x65, 0xbb, 0xdc, 0x6e, 0xdd, 0xb0, 0xe0, 0xc2,
            0x6e, 0xa7, 0x6b, 0xf6, 0x0c, 0x9e, 0xa0, 0xfd, 0x0e, 0xbf, 0x02, 0x7e,
            0xde, 0x27, 0x3e, 0x09, 0xb6, 0x5a, 0x61, 0x2a, 0xb0, 0x4b, 0xe9, 0x3e,
            0x78, 0xbe, 0xe3, 0xdf, 0xbb, 0xdd, 0xde, 0x36, 0x14, 0x4f, 0x74, 0xdb,
            0x2c, 0xaf, 0x36, 0x98, 0x90, 0x67, 0x94, 0x77, 0x98, 0xf6, 0x25, 0x31,
            0x2e, 0xbf, 0x40, 0x7a, 0xc4, 0x52, 0xb4, 0x31, 0x98, 0x58, 0x57, 0x50,
            0xc6, 0xfc, 0x54, 0x36, 0xe6, 0x0e, 0x6d, 0x74, 0xdf, 0x64, 0x4b, 0x06,
            0x8e, 0xd3, 0x20, 0x29, 0x46, 0x75, 0x86, 0xc2, 0xe2, 0x0b, 0xfe, 0x9c,
            0x1a, 0x82, 0x6a, 0x8a, 0x09, 0xca, 0xe0, 0xc3, 0x79, 0x38, 0xae, 0x15,
            0xe3, 0x2a, 0x19, 0x4a, 0x73, 0xcd, 0xf4, 0x78, 0x27, 0xbb, 0x71, 0xe6,
            0x76, 0x32, 0x53, 0xa5, 0xe6, 0x95, 0x53, 0x55, 0x74, 0x7b, 0x02, 0xa0,
            0x36, 0xbb, 0x16, 0x36, 0xb5, 0xd1, 0x03, 0xf9, 0x15, 0x36, 0x73, 0x7e,
            0x53, 0x59, 0x67, 0x2f, 0x12, 0x94, 0x76, 0x16, 0xb3, 0x61, 0x58, 0xdb,
            0x87, 0xaa, 0x26, 0x1d, 0x06, 0x0c, 0xe3, 0xc4, 0x80, 0x13, 0xd4, 0xf6,
            0xe7, 0xaf, 0x47, 0x24, 0xd2, 0x09, 0x6a, 0xa3, 0xfa, 0x8c, 0xa6, 0x95,
            0xdd, 0xbe, 0xa6, 0xce, 0xf6, 0x85, 0xfb, 0xb7, 0xf7, 0xe9, 0x9a, 0x18,
            0x59, 0x75, 0xe3, 0xdd, 0x7e, 0xe6, 0xe8, 0xdf, 0x19, 0x37, 0xc7, 0x23,
            0x88, 0x24, 0xf3, 0x5d, 0x5d, 0xf9, 0x87, 0xec, 0xe4, 0xa6, 0x39, 0xc5,
            0x0b, 0xbd, 0x2a, 0x4c, 0x9b, 0x25, 0x88, 0xb9, 0xef, 0x9b, 0xc6, 0xdb,
            0x58, 0xe9, 0xa5, 0xbb, 0x6f, 0x3f, 0xe7, 0x45, 0x18, 0x1d, 0xf0, 0x80,
            0xf3, 0x16, 0xaa, 0xed
        }
    },
};

const uint32_t number_of_public_keys = sizeof(public_keys)/sizeof(crypto_public_key);

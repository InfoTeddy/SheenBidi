/*
 * Copyright (C) 2016 Muhammad Tayyab Akram
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SB_PUBLIC_LINE_H
#define _SB_PUBLIC_LINE_H

#include "SBCodepointSequence.h"
#include "SBTypes.h"

struct _SBLine;
typedef struct _SBLine SBLine;
typedef SBLine *SBLineRef;

/**
 * Provides the offset of the line in original buffer.
 * @param line
 *      The line whose offset you want to obtain.
 * @return
 *      The offset of the line passed in.
 */
SBUInteger SBLineGetOffset(SBLineRef line);

/**
 * Provides the length of the line in original buffer.
 * @param line
 *      The line whose length you want to obtain.
 * @return
 *      The length of the line passed in.
 */
SBUInteger SBLineGetLength(SBLineRef line);

SBLineRef SBLineRetain(SBLineRef line);
void SBLineRelease(SBLineRef line);

#endif

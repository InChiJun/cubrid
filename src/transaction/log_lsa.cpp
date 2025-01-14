/*
 * Copyright 2008 Search Solution Corporation
 * Copyright 2016 CUBRID Corporation
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
 */

//
// log_lsa.cpp - log sequence address implementation
//

#include "log_lsa.hpp"

#include <cstdio>
// XXX: SHOULD BE THE LAST INCLUDE HEADER
#include "memory_wrapper.hpp"

void
lsa_to_string (char *buf, int buf_size, const log_lsa *lsa)
{
  std::snprintf (buf, buf_size, "(%lld|%d)", LSA_AS_ARGS (lsa));
  buf[buf_size - 1] = 0;
}

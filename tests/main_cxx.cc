/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 * 
 *  DDM4
 *
 *  Copyright (C) 2012 Data Differential, http://datadifferential.com/
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *      * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above
 *  copyright notice, this list of conditions and the following disclaimer
 *  in the documentation and/or other materials provided with the
 *  distribution.
 *
 *      * The names of its contributors may not be used to endorse or
 *  promote products derived from this software without specific prior
 *  written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "config.h"

#include <cassert>
#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(void)
{
#if defined(HAVE_CXXABI_H) && HAVE_CXXABI_H
  // We just need to make sure it was defined
  assert(HAVE_GCC_ABI_DEMANGLE);
# if defined(HAVE_GCC_ABI_DEMANGLE) && HAVE_GCC_ABI_DEMANGLE == 0
  if (HAVE_GCC_ABI_DEMANGLE == 0)
  {
    return EXIT_FAILURE;
  }
# endif
#endif

#if defined(HAVE_GCC_ABI_DEMANGLE) && HAVE_GCC_ABI_DEMANGLE
  assert(HAVE_CXXABI_H);
# if defined(HAVE_CXXABI_H) && HAVE_CXXABI_H == 0
  if (HAVE_CXXABI_H == 0)
  {
    return EXIT_FAILURE;
  }
# endif
#endif

#if defined(VCS_CHECKOUT) && VCS_CHECKOUT == 1
  if (VCS_CHECKOUT)
  {
    assert(strstr(CXXFLAGS, "-Werror"));
    if (strstr(CXXFLAGS, "-Werror") == NULL)
    {
      return EXIT_FAILURE;
    }
  }
#endif

#if defined(DEBUG) && DEBUG == 1
  if (DEBUG)
  {
    assert(strstr(CXXFLAGS, " -O2 ") == NULL);
    if (strstr(CXXFLAGS, " -O2 "))
    {
      return EXIT_FAILURE;
    }

    assert(strstr(CXXFLAGS, " -g "));
    if (strstr(CXXFLAGS, " -g ") == NULL)
    {
      return EXIT_FAILURE;
    }
  }
#endif

#ifdef HAVE_PRINTF_STRERROR
  {
    char buffer[1024]= { 0 };
    errno= 0;
    int buffer_length= snprintf(buffer, sizeof(buffer), "%ms");
    assert(errno == 0);
    if (errno != 0)
    {
      return EXIT_FAILURE;
    }

    assert(buffer_length >= 3);
    if (buffer_length < 3)
    {
      return EXIT_FAILURE;
    }

    assert(strncmp(buffer, "Suc", 3) == 0);
    if (strncmp(buffer, "Suc", 3) != 0)
    {
      return EXIT_FAILURE;
    }
  }
#endif

  return EXIT_SUCCESS;
}


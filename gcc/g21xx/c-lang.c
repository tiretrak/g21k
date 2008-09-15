/* Language-specific hook definitions for C front end.
   Copyright (C) 1991 Free Software Foundation, Inc.

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.  */


#include "config.h"
#include "tree.h"
#include <stdio.h>
#include "input.h"

#include "c-tree.h"
int check_newline();
void fatal();

/* Each of the functions defined here
   is an alternative to a function in objc-actions.c.  */
   
int
lang_decode_option (p)
     char *p;
{
  return c_decode_option (p);
}

void
lang_init ()
{
  /* the beginning of the file is a new line; check for # */
  /* With luck, we discover the real source file's name from that
     and put it in input_filename.  */
  ungetc (check_newline (), finput);
}

void
lang_finish ()
{
}

/* Used by c-lex.c, but only for objc.  */
tree
lookup_interface (arg)
     tree arg;
{
  return 0;
}

void
maybe_objc_check_decl (decl)
     tree decl;
{
}

int
maybe_objc_comptypes (lhs, rhs)
     tree lhs, rhs;
{
  return 0;
}

tree
maybe_building_objc_message_expr ()
{
  return 0;
}

int
recognize_objc_keyword ()
{
  return 0;
}

void
print_lang_statistics ()
{
}

void
GNU_xref_begin ()
{
  fatal ("GCC does not yet support XREF");
}

void
GNU_xref_end ()
{
  fatal ("GCC does not yet support XREF");
}

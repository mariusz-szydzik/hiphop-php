/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#include <stdio.h>
#include <util/file_cache.h>

using namespace HPHP;
///////////////////////////////////////////////////////////////////////////////

int main(int argc, char **argv) {
  if (argc <= 1) {
    printf("fcache filename [version=1]\n");
    return 0;
  }

  const char *name =  argc > 1 ? argv[1] : "";
  int version = atoi(argc > 2 ? argv[2] : "1");

  FileCache fc;
  fc.load(name, true, version);
  fc.dump();
  return 0;
}

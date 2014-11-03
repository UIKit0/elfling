// Copyright 2014 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// elfling - a linking compressor for ELF files by Minas ^ Calodox

#include <stdio.h>

int a = 5;
int b = 0;
int c[4096];

void _start() {
  puts("Hello");
  printf("_start: %p\n", _start);
  printf("a: %p %d\n", &a, a);
  printf("b: %p %d\n", &b, b);
  printf("c: %p %d\n", c, c[0]);
  __asm ("mov $1, %eax\n"
    "mov %eax, %ebx\n"
    "int $0x80");
}

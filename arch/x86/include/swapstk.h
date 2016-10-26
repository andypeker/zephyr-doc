/*
 * Copyright (c) 2011-2012, 2014 Wind River Systems, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file
 * @brief Stack frame created by swap (IA-32)
 *
 * This file details the stack frame generated by _Swap() when it saves a task
 * or fiber's context. This is specific to the IA-32 processor architecture.
 *
 * NOTE: _Swap() does not use this file as it uses the push instruction to
 * save a context. Changes to the file will not automatically be picked up by
 * _Swap().  Conversely, changes to _Swap() should be mirrored here if the
 * stack frame is modified.
 */

#ifndef _SWAPSTK_H
#define _SWAPSTK_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _ASMLANGUAGE

/* Stack of a saved context */
typedef struct s_SwapStk {
	unsigned int eax;     /* EAX register */
	unsigned int ebp;     /* EBP register */
	unsigned int ebx;     /* EBX register */
	unsigned int esi;     /* ESI register */
	unsigned int edi;     /* EDI register */
	unsigned int retAddr; /* Return address of caller of _Swap() */
	unsigned int param;   /* Parameter passed to _Swap() */
} tSwapStk;

#endif /* _ASMLANGUAGE */

#ifdef __cplusplus
}
#endif

#endif /* _SWAPSTK_H */
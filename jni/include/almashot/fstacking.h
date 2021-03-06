/* ------------------------------------------------------------------------- *\

 Almalence, Inc.
 3803 Mt. Bonnell Rd
 Austin, 78731
 Texas, USA

 CONFIDENTIAL: CONTAINS CONFIDENTIAL PROPRIETARY INFORMATION OWNED BY
 ALMALENCE, INC., INCLUDING BUT NOT LIMITED TO TRADE SECRETS,
 KNOW-HOW, TECHNICAL AND BUSINESS INFORMATION. USE, DISCLOSURE OR
 DISTRIBUTION OF THE SOFTWARE IN ANY FORM IS LIMITED TO SPECIFICALLY
 AUTHORIZED LICENSEES OF ALMALENCE, INC. ANY UNAUTHORIZED DISCLOSURE
 IS A VIOLATION OF STATE, FEDERAL, AND INTERNATIONAL LAWS.
 BOTH CIVIL AND CRIMINAL PENALTIES APPLY.

 DO NOT DUPLICATE. UNAUTHORIZED DUPLICATION IS A VIOLATION OF STATE,
 FEDERAL AND INTERNATIONAL LAWS.

 USE OF THE SOFTWARE IS AT YOUR SOLE RISK. THE SOFTWARE IS PROVIDED ON AN
 "AS IS" BASIS AND WITHOUT WARRANTY OF ANY KIND. TO THE MAXIMUM EXTENT
 PERMITTED BY LAW, ALMALENCE EXPRESSLY DISCLAIM ALL WARRANTIES AND
 CONDITIONS OF ANY KIND, WHETHER EXPRESS OR IMPLIED, INCLUDING, BUT NOT
 LIMITED TO THE IMPLIED WARRANTIES AND CONDITIONS OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.

 ALMALENCE DOES NOT WARRANT THAT THE SOFTWARE WILL MEET YOUR REQUIREMENTS,
 OR THAT THE OPERATION OF THE SOFTWARE WILL BE UNINTERRUPTED OR ERROR-FREE,
 OR THAT DEFECTS IN THE SOFTWARE WILL BE CORRECTED. UNDER NO CIRCUMSTANCES,
 INCLUDING NEGLIGENCE, SHALL ALMALENCE, OR ITS DIRECTORS, OFFICERS,
 EMPLOYEES OR AGENTS, BE LIABLE TO YOU FOR ANY INCIDENTAL, INDIRECT,
 SPECIAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE, MISUSE OR
 INABILITY TO USE THE SOFTWARE OR RELATED DOCUMENTATION.

 COPYRIGHT 2010-2016, ALMALENCE, INC.

 ---------------------------------------------------------------------------

 Focus stacking public header

\* ------------------------------------------------------------------------- */

#ifndef __FSTACKING_H__
#define __FSTACKING_H__

#if defined __cplusplus
extern "C"
{
#endif


#include "almashot.h"


int FStacking_Align
(
	void **instance,
	Uint8 **in,
	Uint8 *restrict layout,
	Uint8 *restrict debug,
	int   SensorGain,
	int   sx,
	int   sy,
	int   nFrames,
	int   baseFrame,
	int   preFilter,
	int   postFilter,
	int   scaleOutput,
	int   fastMode
);

int FStacking_GetAlignedFrames
(
	void *instance,
	Uint8 **out,
	int sx,
	int sy,
	int nFrames
);


int FStacking_GetFocusAreaMap
(
	void *instance,
	Uint8 *out,
	int sx,
	int sy
);


int FStacking_Process
(
	void *instance,
	Uint8 **Out,
	int   *x0_out,
	int   *y0_out,
	int   *w_out,
	int   *h_out
);


void FStacking_FreeInstance
(
	void *instance,
	int keepBuffers
);


#if defined __cplusplus
}
#endif

#endif // __FSTACKING_H__

#pragma once
#define VALOR 1
#if VALOR ==1
	#define VALOR 2
#endif

#ifdef VALOR
	#undef VALOR
#endif

#ifdef VALOR
	#define VALOR 1
#endif



#if def__CONFTIG_H__
#define__CONFTIG_H__
#define WIDTH_SCREEN 640
#define HEIGHT_SCREEN 480

#endif
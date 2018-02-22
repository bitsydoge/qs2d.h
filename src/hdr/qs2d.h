///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////                Quick SDL2 Drawer              /////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////




/* 
 * Simple and quick layer for SDL2 to show a window and draw pixel on it.
 * 
 * 
 * Licence at the end of the file
*/

#ifndef QS2D_INCLUDE_QS2D_H
#define QS2D_INCLUDE_QS2D_H

//////////////////////////////////
/*
	   Macro
				*/
//////////////////////////////////

#define QS2D_VERSION_CHAR "0.1a"

#ifdef QS2D_USE_STATIC
	#define QS2D_DEF static
#else
	#define QS2D_DEF extern
#endif

#ifdef QS2D_USE_DOUBLE
	#define QS2D_Float double
#else
	#define QS2D_Float float
#endif


//////////////////////////////////
/*
	 Include
				*/
 //////////////////////////////////

#include <stdint.h>
#include <SDL2/SDL.h>
#include <stdbool.h>

//////////////////////////////////
 /*
	 Typedef
				*/
//////////////////////////////////

typedef struct QS2D_Color { Uint8 r, g, b, a; } QS2D_Color;
typedef struct QS2D_Data { SDL_Window *window; SDL_Renderer *render; bool quit; bool renderOnEvent; int w, h; } QS2D_Data;
typedef struct QS2D_Point { QS2D_Float x, y; } QS2D_Point;

//////////////////////////////////
/*
	Prototypes    
				*/
//////////////////////////////////

/* init */
QS2D_DEF void QS2D_Init(char* name, const int width, const int height);
QS2D_DEF void QS2D_Close();

/* rendering */
QS2D_DEF void QS2D_Render();
QS2D_DEF void QS2D_Clear();
QS2D_DEF void QS2D_AutoRender();
QS2D_DEF void QS2D_ManualRender();

/* event */
QS2D_DEF int QS2D_Event();
QS2D_DEF void QS2D_Quit();

/* drawing */
QS2D_DEF QS2D_Color QS2D_NewColor(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a);
QS2D_DEF void QS2D_SetColor(QS2D_Color c);
QS2D_DEF void QS2D_Pixel(int x, int y);

/* value */
QS2D_DEF QS2D_Color QS2D_GetPixel(int x, int y);

#endif // QS2D_INCLUDE_QS2D_H



///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////



#ifdef QS2D_IMPLEMENTATION

#include <time.h>
#include <stdlib.h>

#ifndef _MSC_VER
#ifdef __cplusplus
#define QS2D_INLINE inline
#else
#define QS2D_INLINE
#endif
#else
#define QS2D_INLINE __forceinline
#endif

//////////////////////////////////
/*
	   Data
				*/
//////////////////////////////////

static QS2D_Data *internal;

///////////////////////////////////////
/*
	Functions
				*/
///////////////////////////////////////

QS2D_INLINE void QS2D_Init(char* name, const int width, const int height)
{
	srand(time(NULL));
	
	//States
	internal = (QS2D_Data*)malloc(sizeof(QS2D_Data));
	internal->quit = 0;
	internal->renderOnEvent = 1;
	internal->w = width;
	internal->h = height;

	//Sdl
	SDL_Init(SDL_INIT_VIDEO);
	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1");
	internal->window = SDL_CreateWindow(name, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_RENDERER_PRESENTVSYNC);
	internal->render = SDL_CreateRenderer(internal->window, -1, SDL_RENDERER_ACCELERATED);
}

QS2D_INLINE void QS2D_Close()
{
	SDL_DestroyWindow(internal->window);
	SDL_DestroyRenderer(internal->render);
	free(internal);
	SDL_Quit();
}

QS2D_INLINE void QS2D_Render()
{
	SDL_RenderPresent(internal->render);
}

QS2D_INLINE int QS2D_Event()
{
	static SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			internal->quit = 1;
			break;
		default: 
			break;
		}
	}
	if(internal->renderOnEvent)
		QS2D_Render();
	return internal->quit;
}

QS2D_INLINE void QS2D_Quit()
{
	internal->quit = 1;
}

QS2D_INLINE QS2D_Color QS2D_NewColor(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a)
{
	QS2D_Color color = { r, g, b, a };
	return color;
}

QS2D_INLINE void QS2D_SetColor(const QS2D_Color c)
{
	SDL_SetRenderDrawColor(internal->render, c.r, c.g, c.b, c.a);
}

QS2D_INLINE void QS2D_Clear()
{
	SDL_RenderClear(internal->render);
}

QS2D_INLINE void QS2D_Pixel(const int x, const int y)
{
	SDL_RenderDrawPoint(internal->render, x, y);
}

QS2D_INLINE QS2D_Color QS2D_GetPixel(const int x, const int y)
{
	/*
	Uint32 pixel = 0;
	SDL_Rect rect = { x, y, 1, 1 };
	SDL_RenderReadPixels(internal->render, &rect, pixel, NULL, sizeof(Uint32)*internal->w);
	printf("<%8x> hexadecimal padded with blanks to width 8.\n", pixel);*/
	QS2D_Color c = {0};
	return c;
}

QS2D_INLINE void QS2D_AutoRender()
{
	internal->renderOnEvent = 1;
}

QS2D_INLINE void QS2D_ManualRender()
{
	internal->renderOnEvent = 0;
}

#endif // QS2D_IMPLEMENTATION



///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////



///////////////////////////////////////
/*
	  Licence
				*/
///////////////////////////////////////

/*
<Licence MIT>

Copyright � WARLUS Dylan

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the �Software�),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

The Software is provided �as is�, without warranty of any kind, express
or implied, including but not limited to the warranties of merchantability,
fitness for a particular purpose and noninfringement. In no event shall the
authors or copyright holders be liable for any claim, damages or other liability,
whether in an action of contract, tort or otherwise, arising from, out of
or in connection with the software or the use or other dealings in the Software.
*/
#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>

typedef struct
{
  uint32_t *buffer;
  uint32_t maxSize;
  uint32_t currentIndex;
} Buffer_st;

Buffer_st IntegerBuffer;


/* Function declerations*/
void Buffer_Init (uint32_t size);
void Buffer_Insert (uint32_t value);
void Buffer_DeleteNum (uint32_t value);
void Buffer_Free (Buffer_st * lbuffer);


int main ()
{
  printf ("Hello World");
  Buffer_Init (4);
  Buffer_Insert (11);
  Buffer_Insert (22);
  Buffer_Insert (33);
  Buffer_Insert (44);
  Buffer_DeleteNum (2);
  Buffer_Insert (55);
  Buffer_Insert (66);
  Buffer_Insert (77);
  printf ("\n 0. %d", IntegerBuffer.buffer[0]);
  printf ("\n 1. %d", IntegerBuffer.buffer[1]);
  printf ("\n 2. %d", IntegerBuffer.buffer[2]);
  printf ("\n 3. %d", IntegerBuffer.buffer[3]);
  Buffer_Free (&IntegerBuffer);
  return 0;
}

void Buffer_Init (uint32_t size)
{
  IntegerBuffer.buffer = (uint32_t *) malloc (size * 4);
  IntegerBuffer.maxSize = size - 1;
  IntegerBuffer.currentIndex = 0;
}

void Buffer_Insert (uint32_t value)
{
  if (IntegerBuffer.currentIndex <= IntegerBuffer.maxSize)
	{
	  IntegerBuffer.buffer[IntegerBuffer.currentIndex] = value;
	  IntegerBuffer.currentIndex++;
	}
  else
	{
	  IntegerBuffer.currentIndex = 0;
	  IntegerBuffer.buffer[IntegerBuffer.currentIndex] = value;
	  IntegerBuffer.currentIndex++;
	}
}

void Buffer_DeleteNum (uint32_t value)
{
  if ((IntegerBuffer.currentIndex == 0)
	  || (IntegerBuffer.currentIndex > IntegerBuffer.maxSize))
	{
	  IntegerBuffer.currentIndex = IntegerBuffer.maxSize + 1;
	  IntegerBuffer.currentIndex = IntegerBuffer.currentIndex - value;
	}
  else
	{
	  IntegerBuffer.currentIndex - value;
	}
}

void Buffer_Free (Buffer_st * lbuffer)
{
  free (lbuffer->buffer);
  lbuffer->currentIndex = 0;
  lbuffer->maxSize = 0;
}

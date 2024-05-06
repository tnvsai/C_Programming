#include <stdio.h>
#include <stdint.h>

union conversion
{
  uint32_t value;
  uint8_t byte[4];
};

uint32_t convertEndian (uint32_t value);

int main ()
{

  printf ("%x", convertEndian (0x11223344));

  return 0;
}

uint32_t convertEndian(uint32_t value)
{
  union conversion Data = { value };
  return (Data.byte[0] << 24) | (Data.byte[1] << 16) | (Data.byte[2] << 8) |
	(Data.byte[3]);
}

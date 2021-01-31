
#include <cstdint>
#include <cstddef>

struct pext_lookup_type {
    uint32_t    pext_mask;
    uint32_t    utf8_bits_mask;
    uint32_t    utf8_bits_expected;
    uint8_t     utf8_length;
    uint8_t     padding[3];

};

static_assert(sizeof(pext_lookup_type) == 16, "Lookup entry has to occupy 16 bytes");

pext_lookup_type pext_lookup[256] = {
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x0000007f, 0x00000001, 0x0000007f, 127, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x1f3f0000, 0xe0c00000, 0xc0800000, 2, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f00, 0xf0c0c000, 0xe0808000, 3, 0, 0, 0},
  {0x0f3f3f3f, 0xf0c0c0c0, 0xe0808080, 4, 0, 0, 0},
  {0x0f3f3f3f, 0xf0c0c0c0, 0xe0808080, 4, 0, 0, 0},
  {0x0f3f3f3f, 0xf0c0c0c0, 0xe0808080, 4, 0, 0, 0},
  {0x0f3f3f3f, 0xf0c0c0c0, 0xe0808080, 4, 0, 0, 0},
  {0x0f3f3f3f, 0xf0c0c0c0, 0xe0808080, 4, 0, 0, 0},
  {0x0f3f3f3f, 0xf0c0c0c0, 0xe0808080, 4, 0, 0, 0},
  {0x0f3f3f3f, 0xf0c0c0c0, 0xe0808080, 4, 0, 0, 0},
  {0x0f3f3f3f, 0xf0c0c0c0, 0xe0808080, 4, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0},
  {0x00000000, 0x00000000, 0x00000000, 0, 0, 0, 0}
};

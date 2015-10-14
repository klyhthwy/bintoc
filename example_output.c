#include "pulseon_firmware.h"

#define BINARY_SIZE 16
#define BINARY_DATA_SIZE 20
static const uint8_t  BINARY_CHECKSUM[4] = {0x0F, 0xA2, 0xB8, 0x24};
static const uint8_t  BINARY_DATA[BINARY_DATA_SIZE] =
{
    0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xA2, 0xB8, 0x24
};

/**
 * Get the firmware object for the current build.
 * @return PulseOn firmware object
 */
const pulseon_firmware_s *pulseon_get_firmware(void)
{
    static const pulseon_firmware_s firmware =
    {
        .Binary_Size = BINARY_SIZE,
        .Binary_Data_Size = BINARY_DATA_SIZE,
        .Binary_Checksum = BINARY_CHECKSUM,
        .Binary_Data = BINARY_DATA
    };

    return &firmware;
}

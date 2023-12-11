#pragma once

#define ROM_LINEAR_GBA_ADDRESS          0x08000000
#define ROM_LINEAR_DS_ADDRESS           0x02200000
#define ROM_LINEAR_SIZE                 0x00200000
#define ROM_LINEAR_END_GBA_ADDRESS      (ROM_LINEAR_GBA_ADDRESS + ROM_LINEAR_SIZE)
#define ROM_LINEAR_END_DS_ADDRESS       (ROM_LINEAR_DS_ADDRESS + ROM_LINEAR_SIZE)
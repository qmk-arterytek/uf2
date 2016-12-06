#ifndef UF2_HID_H
#define UF2_HID_H 1

#define HF2_FLAG_PKT_LAST 0xC0
#define HF2_FLAG_PKT_BODY 0x80
#define HF2_FLAG_SERIAL 0x40
#define HF2_FLAG_MASK 0xC0
#define HF2_FLAG_RESERVED 0x00
#define HF2_SIZE_MASK 63

#define HF2_CMD_INFO 0x0001
#define HF2_CMD_RESET_INTO_APP 0x0002
#define HF2_CMD_RESET_INTO_BOOTLOADER 0x0003
#define HF2_CMD_WRITE_FLASH_PAGE 0x0004
#define HF2_CMD_MEM_WRITE_PAGE 0x0005
#define HF2_CMD_MEM_READ_PAGE 0x0006
#define HF2_CMD_START_FLASH 0x0007
#define HF2_CMD_BININFO 0x0008
#define HF2_CMD_CHKSUM_PAGES 0x0009

#define HF2_MODE_BOOTLOADER 0x01
#define HF2_MODE_USERSPACE 0x02

#define HF2_STATUS_OK 0x00000000
#define HF2_STATUS_INVALID_CMD 0x00000001
#define HF2_STATUS_WRONG_MODE 0x00000002


#endif

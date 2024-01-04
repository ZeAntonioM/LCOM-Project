#ifndef __I8042_H
#define __I8042_H

#include <lcom/lcf.h>

#define KEYBOARD_IRQ 1
#define MOUSE_IRQ 12

#define ESC_BREAK 0x81
#define TWO_BYTES 0xe0
#define MAKE_OR_BREAK BIT(7)

#define KBC_ST_REG 0x64
#define KBC_CMD_REG 0x64

#define KBC_IN 0x64
#define KBC_IN_ARGS 0x60
#define KBC_IN_RES 0x60

#define KBC_OUT 0x60

#define KBC_READ_CMD 0x20
#define KBC_WRITE_CMD 0x60

#define KBC_OUT_FULL BIT(0)
#define KBC_IN_FULL BIT(1)

#define KBC_INT BIT(0)

#define KBC_WRITE_BYTE 0xD2
#define KBC_DISABLE_MOUSE 0xA7
#define KBC_ENABLE_MOUSE 0xA8
#define KBC_CHECK_MOUSE 0xA9

#define KBC_PERROR BIT(7)
#define KBC_TERROR BIT(6)
#define KBC_ERROR (BIT(7) | BIT(6))

#define WAIT_KBC 2000

#define MOUSE_DATA BIT(5)

#define MOUSE_READ_DATA 0xEB
#define MOUSE_WRITE_DATA 0xD4

#define MOUSE_DISABLE_DR 0xF5
#define MOUSE_ENABLE_DR 0xF4

#define MOUSE_STREAM_MODE 0xEA
#define MOUSE_REMOTE_MODE 0xF0

#define MOUSE_STATUS_REQUEST 0xE9
#define MOUSE_RESET 0xFF
#define MOUSE_RESEND 0xFE
#define MOUSE_ACK 0xFA
#define MOUSE_NACK 0xFE
#define MOUSE_SYNC_BIT BIT(3)

#define MOUSE_LB BIT(0)
#define MOUSE_RB BIT(1)
#define MOUSE_MB BIT(2)
#define MOUSE_MSBX BIT(4)
#define MOUSE_MSBY BIT(5)
#define MOUSE_XOV BIT(6)
#define MOUSE_YOV BIT(7)


#endif /* __I8042_H */

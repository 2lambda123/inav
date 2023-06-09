/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

typedef enum {
    UART_INVERTER_LINE_NONE = 0,
    UART_INVERTER_LINE_RX = 1 << 0,
    UART_INVERTER_LINE_TX = 1 << 1,
} uartInverterLine_e;

void uartInverterInit(void);

 #if defined(AT32F43x) 
void uartInverterSet(usart_type *USARTx, uartInverterLine_e line, bool enable);
#else
void uartInverterSet(USART_TypeDef *USARTx, uartInverterLine_e line, bool enable);
#endif

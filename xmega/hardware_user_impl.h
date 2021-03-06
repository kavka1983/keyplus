// Copyright 2017 jem@seethis.link
// Licensed under the MIT license (http://opensource.org/licenses/MIT)

#pragma once

#include <util/delay.h>
#include <avr/io.h>

#define static_delay_us(x) _delay_us(x)
#define static_delay_ms(x) _delay_ms(x)

#define PAGE_SIZE           APP_SECTION_PAGE_SIZE

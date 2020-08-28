/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* Provides a minimalistic nrfx_config to be used with Nordic nrfx
 * when not used together with Zephyr.
 */

#ifndef NRFX_CONFIG_H__
#define NRFX_CONFIG_H__

#ifdef __ZEPHYR__
#error This file should not be included in builds with Zephyr. Use the one provided by the nordic_hal zephyr module in that case.
#endif

/* When the real nRFx HAL headers are included, this header will be included
 * from them, with the two definitions below. The normal users of the nRFx HAL
 * will only get the prototype of the functions from the real headers.
 * The HW models, will include again the real nRFx headers once more,
 * but setting NRF_DONT_DECLARE_ONLY, and replacing NRF_STATIC_INLINE.
 * In this way, the HW models will include 1 copy of the functions bodies,
 * but as normal, globally available functions, instead of inlined versions.
 * (See src/nrfx/hal/nrf_hal_originals.c for more info)
 */
#ifndef NRF_DONT_DECLARE_ONLY
#define NRF_DECLARE_ONLY
#endif

#ifndef NRF_STATIC_INLINE
#define NRF_STATIC_INLINE
#endif

#endif // NRFX_CONFIG_H__


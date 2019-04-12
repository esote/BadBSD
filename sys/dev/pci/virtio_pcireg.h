/*
 * Copyright (c) 2019 Stefan Fritsch <sf@openbsd.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _DEV_PCI_VIRTIO_PCIREG_H_
#define _DEV_PCI_VIRTIO_PCIREG_H_

/* Virtio 0.9 config space */
#define VIRTIO_CONFIG_DEVICE_FEATURES		0 /* 32bit */
#define VIRTIO_CONFIG_GUEST_FEATURES		4 /* 32bit */
#define VIRTIO_CONFIG_QUEUE_ADDRESS		8 /* 32bit */
#define VIRTIO_CONFIG_QUEUE_SIZE		12 /* 16bit */
#define VIRTIO_CONFIG_QUEUE_SELECT		14 /* 16bit */
#define VIRTIO_CONFIG_QUEUE_NOTIFY		16 /* 16bit */
#define VIRTIO_CONFIG_DEVICE_STATUS		18 /* 8bit */
#define VIRTIO_CONFIG_ISR_STATUS		19 /* 8bit */
#define  VIRTIO_CONFIG_ISR_CONFIG_CHANGE	2
#define VIRTIO_CONFIG_DEVICE_CONFIG_NOMSI	20
/* Only if MSIX is enabled: */
#define VIRTIO_MSI_CONFIG_VECTOR		20 /* 16bit, optional */
#define VIRTIO_MSI_QUEUE_VECTOR			22 /* 16bit, optional */
#define VIRTIO_CONFIG_DEVICE_CONFIG_MSI		24

#define VIRTIO_MSI_NO_VECTOR			0xffff


#endif /* _DEV_PCI_VIRTIO_PCIREG_H_ */

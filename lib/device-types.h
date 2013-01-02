/*
 * Copyright (C) 2001-2004 Sistina Software, Inc. All rights reserved.
 * Copyright (C) 2004-2012 Red Hat, Inc. All rights reserved.
 *
 * This file is part of LVM2.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU Lesser General Public License v.2.1.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

typedef struct {
	const char name[15];
	const int8_t max_partitions;
} device_info_t;

/*
 * Devices are only checked for partition tables if their minor number
 * is a multiple of the number corresponding to their type below
 * i.e. this gives the granularity of whole-device minor numbers.
 * Use 1 if the device is not partitionable.
 *
 * The list can be supplemented with devices/types in the config file.
 */
static const device_info_t _device_info[] = {
	{"ide", 64},		/* IDE disk */
	{"sd", 16},		/* SCSI disk */
	{"md", 1},		/* Multiple Disk driver (SoftRAID) */
	{"mdp", 1},		/* Partitionable MD */
	{"loop", 1},		/* Loop device */
	{"dasd", 4},		/* DASD disk (IBM S/390, zSeries) */
	{"dac960", 8},		/* DAC960 */
	{"nbd", 16},		/* Network Block Device */
	{"ida", 16},		/* Compaq SMART2 */
	{"cciss", 16},		/* Compaq CCISS array */
	{"ubd", 16},		/* User-mode virtual block device */
	{"ataraid", 16},	/* ATA Raid */
	{"drbd", 16},		/* Distributed Replicated Block Device */
	{"emcpower", 16},	/* EMC Powerpath */
	{"power2", 16},		/* EMC Powerpath */
	{"i2o_block", 16},	/* i2o Block Disk */
	{"iseries/vd", 8},	/* iSeries disks */
	{"gnbd", 1},		/* Network block device */
	{"ramdisk", 1},		/* RAM disk */
	{"aoe", 16},		/* ATA over Ethernet */
	{"device-mapper", 1},	/* Other mapped devices */
	{"xvd", 16},		/* Xen virtual block device */
	{"vdisk", 8},		/* SUN's LDOM virtual block device */
	{"ps3disk", 16},	/* PlayStation 3 internal disk */
	{"virtblk", 8},		/* VirtIO disk */
	{"mmc", 16},		/* MMC block device */
	{"blkext", 1},		/* Extended device partitions */
	{"fio", 16},		/* Fusion */
	{"mtip32xx", 16},	/* Micron PCIe SSDs */
	{"vtms", 16},		/* Violin Memory */
	{"skd", 16},		/* STEC */
	{"", 0}
};

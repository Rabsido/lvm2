PROG = lvm
MAN  =
SRCS =\
	dumpconfig.c \
	formats.c \
	lvchange.c \
	lvconvert.c \
	lvcreate.c \
	lvdisplay.c \
	lvextend.c \
	lvmchange.c \
	lvmcmdline.c \
	lvmdiskscan.c \
	lvreduce.c \
	lvremove.c \
	lvrename.c \
	lvresize.c \
	lvscan.c \
	polldaemon.c \
	pvchange.c \
	pvck.c \
	pvcreate.c \
	pvdisplay.c \
	pvmove.c \
	pvremove.c \
	pvresize.c \
	pvscan.c \
	reporter.c \
	segtypes.c \
	toollib.c \
	vgcfgbackup.c \
	vgcfgrestore.c \
	vgchange.c \
	vgck.c \
	vgcreate.c \
	vgconvert.c \
	vgdisplay.c \
	vgexport.c \
	vgextend.c \
	vgimport.c \
	vgmerge.c \
	vgmknodes.c \
	vgreduce.c \
	vgremove.c \
	vgrename.c \
	vgscan.c \
	vgsplit.c \
	lvm.c

CFLAGS += -I../include -I../lib -I../libdaemon/client

LDADD += ../lib/liblvm-internal.a ../libdm/libdm.a ../libdaemon/client/libdaemonclient.a

.include <bsd.prog.mk>

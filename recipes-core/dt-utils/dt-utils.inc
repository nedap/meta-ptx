DESCRIPTION = "device-tree and barebox-related tools"
HOMEPAGE = "http://git.pengutronix.de/?p=tools/dt-utils.git"
SECTION = "base"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=9ac2e7cff1ddaf48b6eab6028f23ef88"
DEPENDS = "udev"
PR = "r0"

SRC_URI = "http://www.pengutronix.de/software/dt-utils/download/${BPN}-${PV}.tar.xz"

inherit autotools pkgconfig gettext

PACKAGES =+ "${PN}-barebox-state ${PN}-barebox-state-dbg ${PN}-fdtdump ${PN}-fdtdump-dbg ${PN}-dtblint ${PN}-dtblint-dbg"

NOAUTOPACKAGEDEBUG = "1"
FILES:${PN}-barebox-state = "${bindir}/barebox-state"
FILES:${PN}-barebox-state-dbg = "${bindir}/.debug/barebox-state"
FILES:${PN}-fdtdump = "${bindir}/fdtdump"
FILES:${PN}-fdtdump-dbg = "${bindir}/.debug/fdtdump"
FILES:${PN}-dtblint = "${bindir}/dtblint"
FILES:${PN}-dtblint-dbg = "${bindir}/.debug/dtblint"
FILES:${PN}-dbg = "${libdir}/.debug/"

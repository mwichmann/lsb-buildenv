OVERRIDE_ROOT=
INSTALL_ROOT=/usr/local
CHROOT_DATA_DIR=/var/lib/lsbdev-chroot
CHROOT_ROOT=/var/lib/lsbdev-chroot/root

all: configure 

configure: config/lsbdev.conf lsbdev

config/lsbdev.conf: config/lsbdev.conf.template
	@sed -e 's,^ROOT=,ROOT=${CHROOT_ROOT},' \
	-e 's,^DATA_ROOT=,DATA_ROOT=${CHROOT_DATA_DIR},' \
	config/lsbdev.conf.template > config/lsbdev.conf

lsbdev: lsbdev.template
	@sed -e 's,^PATH=,PATH=${INSTALL_ROOT}/sbin:$$PATH,' \
	lsbdev.template > lsbdev

install: configure
	mkdir -p ${OVERRIDE_ROOT}/etc/init.d
	install lsbdev ${OVERRIDE_ROOT}/etc/init.d/lsbdev-chroot
	mkdir -p ${OVERRIDE_ROOT}/${INSTALL_ROOT}/sbin
	install lsb_start_dev_env lsb_stop_dev_env ${OVERRIDE_ROOT}/${INSTALL_ROOT}/sbin
	mkdir -p ${OVERRIDE_ROOT}/etc/lsbdev-chroot
	install -m 644 config/gcc_specs \
	  config/extra_mount_dirs.conf config/extra_mount_files.conf \
	  config/libc_script \
	  ${OVERRIDE_ROOT}/etc/lsbdev-chroot
	install -m 644 config/lsbdev.conf \
	  ${OVERRIDE_ROOT}/etc/lsbdev-chroot/lsbdev-chroot.conf
	mkdir -p ${OVERRIDE_ROOT}/${CHROOT_DATA_DIR}

clean:
	rm -f config/lsbdev.conf lsbdev

.PHONY: configure install clean

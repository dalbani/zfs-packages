dnl #
dnl # 3.14 API change,
dnl # Immutable biovecs. A number of fields of struct bio are moved to
dnl # struct bvec_iter.
dnl #
AC_DEFUN([ZFS_AC_KERNEL_SRC_BIO_BVEC_ITER], [
	ZFS_LINUX_TEST_SRC([bio_bvec_iter], [
		#include <linux/bio.h>
	],[
		struct bio bio;
		bio.bi_iter.bi_sector = 0;
	])
])

AC_DEFUN([ZFS_AC_KERNEL_BIO_BVEC_ITER], [
	AC_MSG_CHECKING([whether bio has bi_iter])
	ZFS_LINUX_TEST_RESULT([bio_bvec_iter], [
		AC_MSG_RESULT(yes)
		AC_DEFINE(HAVE_BIO_BVEC_ITER, 1, [bio has bi_iter])
	],[
		AC_MSG_RESULT(no)
	])
])

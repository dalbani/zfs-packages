cmd_/home/xnox/canonical/zfs/build/kernel_write/modules.order := {   echo /home/xnox/canonical/zfs/build/kernel_write/kernel_write.ko; :; } | awk '!x[$$0]++' - > /home/xnox/canonical/zfs/build/kernel_write/modules.order

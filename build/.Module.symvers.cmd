cmd_/home/xnox/canonical/zfs/build/Module.symvers := sed 's/ko$$/o/' /home/xnox/canonical/zfs/build/modules.order | scripts/mod/modpost -m -a  -o /home/xnox/canonical/zfs/build/Module.symvers -e -i Module.symvers   -w -T -

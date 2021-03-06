#include <sys/stat.h>

struct stat kernel_file_stat;
struct stat rootfs_file_stat;

char kernel_device_arg[1000];
char rootfs_device_arg[1000];

int user_kernel;
int user_rootfs;
int multiboot_partition;
char current_rootfs_device[1000];

void handle_busybox_fatal_error();

enum RootfsTypeEnum
{
	UNKNOWN, UBIFS, JFFS2, EXT4
};

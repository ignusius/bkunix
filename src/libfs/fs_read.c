#include <unistd.h>
#include <sys/fs.h>

int
fs_read (fs, data, bytes)
	struct filesys *fs;
	unsigned char *data;
	int bytes;
{
	int len;

	while (bytes > 0) {
		len = bytes;
		if (len > 512)
			len = 512;
/*printf ("**read %d bytes at offset %ld\n", len, fs->seek);*/
		if (read (fs->fd, (char*) data, len) != len)
			return 0;
		fs->seek += len;
		data += len;
		bytes -= len;
	}
	return 1;
}

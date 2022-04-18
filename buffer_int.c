#include "main.h"


buffer *buf_new()
{
	buffer *buf;

	buf = malloc(sizeof(buffer));
	if (!buf)
		return (NULL);
	buf->index = 0;
	buf->size = 1024;
	buf->overflow = 0;
	buf->str = malloc(sizeof(char) * buf->size + 1);

	return (buf);
}

buffer *buf_custom(size_t size_uint)
{
	buffer *buf;

	buf = malloc(sizeof(buffer));
	if (!buf)
		return (NULL);
	buf->index = 0;
	buf->size = size_uint;
	buf->overflow = 0;
	buf->str = malloc(sizeof(char) * buf->size + 1);

	return (buf);
}

void buf_end(buffer *buf)
{
	if (!buf)
		return;
	free(buf->str);
	free(buf);
}



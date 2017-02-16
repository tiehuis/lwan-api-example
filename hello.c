#include <lwan.h>

static enum lwan_http_status hello_world(
        struct lwan_request *request,
        struct lwan_response *response,
        void *data)
{
    static const char message[] = "Hello, World!";

    response->mime_type = "text/plain";
    strbuf_set_static(response->buffer, message, sizeof(message) - 1);

    return HTTP_OK;
}

int main(void)
{
    const struct lwan_url_map default_map[] = {
        { .prefix = "/", .handler = hello_world },
        { .prefix = NULL }
    };

    struct lwan l;
    lwan_init(&l);

    lwan_set_url_map(&l, default_map);
    lwan_main_loop(&l);

    lwan_shutdown(&l);
    return 0;
}

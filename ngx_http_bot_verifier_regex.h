#ifndef __NGX_HTTP_BOT_VERIFIER_REGEX_H__
#define __NGX_HTTP_BOT_VERIFIER_REGEX_H__

#include <ngx_core.h>

ngx_regex_compile_t *make_regex(ngx_pool_t *pool, ngx_str_t *pattern);

#endif

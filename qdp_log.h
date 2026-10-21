/* The stock code logs by clearing a 0x200-byte buffer, formatting a message into it and
   handing it to the diag logger. QDP_LOG does all three steps. QDP_LOG_FMT does the first
   two; the caller emits the message later (shared failure exits). Both expand to exactly
   the statements they replace. */
#ifndef QDP_LOG_H
#define QDP_LOG_H

#define QDP_LOG(buf, desc, ...)                    \
  do                                               \
  {                                                \
    memset((buf), 0, 0x200);                       \
    qdp_format_log_msg((buf), 0x200, __VA_ARGS__); \
    msg_sprintf((desc), (buf));                    \
  } while (0)

#define QDP_LOG_FMT(buf, ...)                      \
  do                                               \
  {                                                \
    memset((buf), 0, 0x200);                       \
    qdp_format_log_msg((buf), 0x200, __VA_ARGS__); \
  } while (0)

#endif

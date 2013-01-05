/*
 * File:   tracepoints.h
 * Author: Alexander Kampmann
 *
 * Created on January 5, 2013, 3:10 PM
 */

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER java_ust

#if !defined(_TRACEPOINT_JAVA_UST_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TRACEPOINT_JAVA_UST_H

#include <lttng/tracepoint.h>

	TRACEPOINT_EVENT(java_ust, method_entry,
			TP_ARGS(char *, clazz, char *, method),
			TP_FIELDS(ctf_string(method, name)))

	TRACEPOINT_EVENT(java_ust, method_exit,
			TP_ARGS(char *, clazz, char *, method),
			TP_FIELDS(ctf_string(method, name)))

#endif /* _TRACEPOINT_JAVA_UST_H */

#undef TRACEPOINT_INCLUDE_FILE
#define TRACEPOINT_INCLUDE_FILE ./tracepoints.h

#include <lttng/tracepoint-event.h>
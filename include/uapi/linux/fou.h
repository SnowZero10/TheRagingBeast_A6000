/* fou.h - FOU Interface */

#ifndef _UAPI_LINUX_FOU_H
#define _UAPI_LINUX_FOU_H

/* NETLINK_GENERIC related info
 */
#define FOU_GENL_NAME		"fou"
#define FOU_GENL_VERSION	0x1

enum {
	FOU_ATTR_UNSPEC,
	FOU_ATTR_PORT,				/* u16 */
	FOU_ATTR_AF,				/* u8 */
	FOU_ATTR_IPPROTO,			/* u8 */

	__FOU_ATTR_MAX,
};

#define FOU_ATTR_MAX		(__FOU_ATTR_MAX - 1)

enum {
	FOU_CMD_UNSPEC,
	FOU_CMD_ADD,
	FOU_CMD_DEL,

	__FOU_CMD_MAX,
};

#define FOU_CMD_MAX	(__FOU_CMD_MAX - 1)

#endif /* _UAPI_LINUX_FOU_H */

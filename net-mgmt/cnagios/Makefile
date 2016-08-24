# Created by: Alexander Y. Grigoryev <alexander.4mail@gmail.com>
# $FreeBSD: head/net-mgmt/cnagios/Makefile 412348 2016-04-01 14:17:44Z mat $

PORTNAME=	cnagios
PORTVERSION=	0.33
CATEGORIES=	net-mgmt

MAINTAINER=	alexander.4mail@gmail.com
COMMENT=	Curses-based interface for nagios

LICENSE=	ISCL

USE_GITHUB=	yes
GH_ACCOUNT=	dannywarren

NAGIOSDIR?=	/var/spool/nagios
ETCDIR=		${PREFIX}/etc/nagios
GNU_CONFIGURE=	YES
CONFIGURE_ARGS=	--with-etc-dir="${ETCDIR}" \
		--with-var-dir="${NAGIOSDIR}" \
		--with-status-file="${NAGIOSDIR}/status.dat"
USES=		ncurses perl5
MAKE_ARGS=	LIBS="-lncurses"
ALL_TARGET=	cnagios

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/cnagios

.include <bsd.port.mk>

# Created by: Danny Warren <danny@dannywarren.com>
# $FreeBSD: head/www/p5-Catalyst-View-TT-Alloy/Makefile 421011 2016-08-28 08:05:47Z pi $

PORTNAME=	Catalyst-View-TT-Alloy
PORTVERSION=	0.00007
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	danny@dannywarren.com
COMMENT=	Template::Alloy views for Catalyst

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7:www/p5-Catalyst-Runtime \
		p5-Data-Dump>=0:devel/p5-Data-Dump \
		p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Template-Alloy>=0:www/p5-Template-Alloy \
		p5-parent>=0:devel/p5-parent
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

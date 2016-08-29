# Created by: Danny Warren <danny@dannywarren.com>
# $FreeBSD$

PORTNAME=	MooseX-Types-DateTime-W3C
PORTVERSION=	1.103360
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	danny@dannywarren.com
COMMENT=	W3C DateTime format type constraint

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=  p5-File-Temp>0:devel/p5-File-Temp \
		p5-Moose>0:devel/p5-Moose \
		p5-Test-Exception>0:devel/p5-Test-Exception \
		p5-Test-Simple>0:devel/p5-Test-Simple \
		p5-DateTime>0:devel/p5-DateTime \
		p5-DateTime-TimeZone>=1.26:devel/p5-DateTime-TimeZone \
		p5-MooseX-Types>0:devel/p5-MooseX-Types
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>

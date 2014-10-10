# Created by: Danny Warren <danny@dannywarren.com>
# $FreeBSD$

PORTNAME=       CGI-Application-Plugin-DBIx-Class
PORTVERSION=    1.000101
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	danny@dannywarren.com
COMMENT=	Access a DBIx::Class schema from a CGI::Application

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CGI-Application>=0:${PORTSDIR}/www/p5-CGI-Application \
		p5-DBIx-Class>=0:${PORTSDIR}/databases/p5-DBIx-Class \
		p5-SQL-Translator>=0:${PORTSDIR}/databases/p5-SQL-Translator
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>

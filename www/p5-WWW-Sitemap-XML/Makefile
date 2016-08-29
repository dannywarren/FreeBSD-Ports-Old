# Created by: Danny Warren <danny@dannywarren.com>
# $FreeBSD$

PORTNAME=	WWW-Sitemap-XML
PORTVERSION=	2.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	danny@dannywarren.com
COMMENT=	XML Sitemap protocol

LICENSE=	ART10

BUILD_DEPENDS=	p5-Test-Exception>0:devel/p5-Test-Exception \
		p5-Test-Simple>0:devel/p5-Test-Simple \
		p5-Test-NoWarnings>0:devel/p5-Test-NoWarnings \
		p5-URI>0:net/p5-URI \
		p5-Moose>=2.1101:devel/p5-Moose \
		p5-MooseX-Types>0:devel/p5-MooseX-Types \
		p5-MooseX-Types-DateTime-W3C>0:devel/p5-MooseX-Types-DateTime-W3C \
		p5-MooseX-Types-URI>0:devel/p5-MooseX-Types-URI \
		p5-Scalar-List-Utils>0:lang/p5-Scalar-List-Utils \
		p5-XML-LibXML>=1.70:textproc/p5-XML-LibXML
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>

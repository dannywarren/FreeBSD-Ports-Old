--- src/daemon.c.orig	2012-04-11 11:48:33.000000000 -0700
+++ src/daemon.c	2016-04-10 15:57:50.654336293 -0700
@@ -97,7 +97,7 @@
   int domain = 0;		/* listening on domain socket? */
   int listener;			/* listener fd */
   int i;
-  int port = 24, queue = 32;	/* default port and queue size */
+  int port = 2424, queue = 32;	/* default port and queue size */
 
   signal(SIGPIPE, SIG_IGN);
   signal(SIGINT,  process_signal);

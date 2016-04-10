--- src/client.c.orig	2012-04-11 11:48:33.000000000 -0700
+++ src/client.c	2016-04-10 15:57:58.146105267 -0700
@@ -304,7 +304,7 @@
   struct sockaddr_un saun;
   int sockfd;
   int yes = 1;
-  int port = 24;
+  int port = 2424;
   int domain = 0;
   int addr_len;
   char *host;

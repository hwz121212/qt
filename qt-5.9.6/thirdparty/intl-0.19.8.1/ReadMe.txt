GNU libiconv-1.15��libintl-0.19.8.1��VS2017���̺� Makefile.mak �����б����ļ�

CSDN-tags�� libiconv1.15 libintl 0.19.8.1 VS2017 SDK17134.12

������

���°棬������relocatable.c�ļ���GetModuleFileName���������⡣��ANSI�£���ͬ�ڣ�GetModuleFileNameA��Unicode�µ�ͬ�ڣ�GetModuleFileNameW�������ĳ���������顣

����Ϊ����������������Ȼ������һ����ʱ��;�����������֤��ȫû�д�����������ز�ʹ���˱����룬�����������������Ӧ���У����������˾����ϣ������ϣ������ϵ���ʧ�����˲��������Ρ�

���д��붼���ڹ��������޸ģ�iconv�Ĵ�����Դ��libiconv-1.15��libĿ¼��intl�Ĵ�����Դ��gettext-runtime��intlĿ¼��

intl��Ҫiconv��֧�֣�����뵥�����벻��Ҫiconv��intl��
�������޸�intlĿ¼�µ�config.h�ļ���

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

Ϊ��

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <iconv.h> header file. */
/* #undef HAVE_ICONV_H */

���޸�VS������Ԥ���������壬ɾ��/DDEPENDS_ON_LIBICONV=1

VS�Ĺ���ΪVS2017�Ĺ����ļ���ʹ��VC141���߼���SDK10.0.17134.12�����û��2017��Ҳ������Makefile.mak�ļ������롣
�������Լ����Ͱ汾�������ʹ�õ���Ͱ汾��VC140_xp��SDK8.1��Ҳ����VS2015Ĭ�ϰ�װ�ļ���xp���߼���VS2015���°汾δ���ԡ�

nmake /f Makefile.mak [DLL<=1>] [DEBUG<=1>]

ָ�� DLL=1   ����dll�汾��Ĭ����lib�汾��libiconv.lib , libintl.lib��
ָ�� DEBUG=1 ����debug�汾��Ĭ����release�汾��

ͬ�����intl����Ҫiconv�����޸�����������ļ�ѡ�����
ɾ��Makefile.mak��/DDEPENDS_ON_LIBICONV=1

�����ļ����������ο������¼������޸ĵĴ��ԭ���ǣ��ܶ����ȫ�����ˣ���������

https://github.com/kahrl/gettext-msvc
�����ַ�ṩ��libiconv��libintl��VS���̺������ļ���

https://github.com/winlibs
Ϊ����PHP���޸ĵ�libiconv��libintlԴ�롣

������CygwinĿ¼�еĹ���
libiconv�ٷ��������ĵ�����cygwin���VC�����ɵ������ļ���

һ��ѵĺ�ͺ��������ͷ�����ǡ����������ļ�����д���Ҳ�������⣬�����޸ĵ��ļ�����config.h��iconv.h,libintl.h��������ԭʼ�ļ���

��:

�����ļ�       ԭʼ�ļ�      DLLԭʼ�ļ�               LIBԭʼ�ļ�
config.h       config.h.in
iconv.h                      iconv.h.build.in          iconv.h.in
localcharset.h               localcharset.h.build.in   localcharset.h.in

libintl.h   libgnuintl.in.h

��ӭͬѧ�����ز��ԡ���������Ը��ҷ��ʼ�travel981cn@139.com

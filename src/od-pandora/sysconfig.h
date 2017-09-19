#ifndef PANDORAUAE_SYSCONFIG_H
#define PANDORAUAE_SYSCONFIG_H

#define SUPPORT_THREADS
#define MAX_DPATH 256

/* #define DRIVESOUND */
/* #define GFXFILTER */
//#define USE_SOFT_LONG_DOUBLE
#define PACKAGE_STRING "UAE4ARM"

/* #define DEBUGGER */
#define FILESYS /* filesys emulation */
#define UAE_FILESYS_THREADS
#define AUTOCONFIG /* autoconfig support, fast ram, harddrives etc.. */
#define JIT /* JIT compiler support */
/* #define USE_JIT_FPU */
/* #define NATMEM_OFFSET natmem_offset */
/* #define CATWEASEL */ /* Catweasel MK2/3 support */
/* #define AHI */ /* AHI sound emulation */
/* #define ENFORCER */ /* UAE Enforcer */
#define ECS_DENISE /* ECS DENISE new features */
#define AGA /* AGA chipset emulation (ECS_DENISE must be enabled) */
#define CD32 /* CD32 emulation */
/* #define CDTV */ /* CDTV emulation */
/* #define PARALLEL_PORT */ /* parallel port emulation */
/* #define PARALLEL_DIRECT */ /* direct parallel port emulation */
/* #define SERIAL_PORT */ /* serial port emulation */
/* #define SERIAL_ENET */ /* serial port UDP transport */
/* #define SCSIEMU */ /* uaescsi.device emulation */
/* #define UAESERIAL */ /* uaeserial.device emulation */
#define FPUEMU /* FPU emulation */
/* #define FPU_UAE */
/* #define WITH_SOFTFLOAT */
/* #define MMUEMU */ /* Aranym 68040 MMU */
/* #define FULLMMU */ /* Aranym 68040 MMU */
#define CPUEMU_0 /* generic 680x0 emulation */
#define CPUEMU_11 /* 68000/68010 prefetch emulation */
/* #define CPUEMU_13 */ /* 68000/68010 cycle-exact cpu&blitter */
/* #define CPUEMU_20 */ /* 68020 prefetch */
/* #define CPUEMU_21 */ /* 68020 "cycle-exact" + blitter */
/* #define CPUEMU_22 */ /* 68030 prefetch */
/* #define CPUEMU_23 */ /* 68030 "cycle-exact" + blitter */
/* #define CPUEMU_24 */ /* 68060 "cycle-exact" + blitter */
/* #define CPUEMU_25 */ /* 68040 "cycle-exact" + blitter */
/* #define CPUEMU_31 */ /* Aranym 68040 MMU */
/* #define CPUEMU_32 */ /* Previous 68030 MMU */
/* #define CPUEMU_33 */ /* 68060 MMU */
#define CPUEMU_40 /* generic 680x0 with JIT direct memory access */
/* #define CPUEMU_50 */ /* generic 680x0 with indirect memory access */
#define ACTION_REPLAY /* Action Replay 1/2/3 support */
/* #define PICASSO96 /* Picasso96 display card emulation */
#define UAEGFX_INTERNAL /* built-in libs:picasso96/uaegfx.card */
#define BSDSOCKET /* bsdsocket.library emulation */
/* #define CAPS */ /* CAPS-image support */
/* #define SCP */ /* SuperCardPro */
#define FDI2RAW /* FDI 1.0 and 2.x image support */
/* #define AVIOUTPUT */ /* Avioutput support */
/* #define PROWIZARD */ /* Pro-Wizard module ripper */
/* #define ARCADIA */ /* Arcadia arcade system */
/* #define ARCHIVEACCESS */ /* ArchiveAccess decompression library */
/* #define LOGITECHLCD */ /* Logitech G15 LCD */
#define SAVESTATE /* State file support */
/* #define A2091 */ /* A590/A2091 SCSI */
/* #define A2065 */ /* A2065 Ethernet card */
/* #define GFXBOARD */ /* Hardware graphics board */
/* #define NCR */ /* A4000T/A4091, 53C710/53C770 SCSI */
/* #define NCR9X */ /* 53C9X SCSI */
/* #define SANA2 */ /* SANA2 network driver */
/* #define AMAX */ /* A-Max ROM adapater emulation */
/* #define RETROPLATFORM */ /* Cloanto RetroPlayer support */
/* #define WITH_CHD */
/* #define WITH_LUA */ /* lua scripting */
/* #define WITH_UAENATIVE */
/* #define WITH_SLIRP */
/* #define WITH_BUILTIN_SLIRP */
/* #define WITH_TABLETLIBRARY */
/* #define WITH_UAENET_PCAP */
/* #define WITH_PPC */
/* #define WITH_QEMU_CPU */
/* #define WITH_TOCCATA */
/* #define WITH_PCI */
/* #define WITH_X86 */

/* #define CUSTOM_SIMPLE */ /* simplified custom chipset emulation */
/* #define CPUEMU_68000_ONLY */ /* drop 68010+ commands from CPUEMU_0 */
/* #define ADDRESS_SPACE_24BIT */
#define INPUTDEVICE_SIMPLE /* simplified inputdevice for faster emulation */

/* #define WITH_SCSI_IOCTL */
/* #define WITH_SCSI_SPTI */

#define A_ZIP
/* #define A_RAR */
#define A_7Z
#define A_LHA
#define A_LZX
#define A_DMS
#define A_WRP

#define UAE_RAND_MAX RAND_MAX

#ifndef GFXFILTER
#undef OPENGL
#undef D3D
#endif

#include <stdint.h>

#define SIZEOF_VOID_P 4

#if !defined(AHI)
#undef ENFORCER
#endif

typedef long uae_atomic;

/* src/sysconfig.h.  Generated automatically by configure.  */
/* src/sysconfig.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
/* #undef _ALL_SOURCE */
#endif

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define if you have the getmntent function.  */
#define HAVE_GETMNTENT 1

/* Define if your struct stat has st_blocks.  */
/* #undef HAVE_ST_BLOCKS */

/* Define if utime(file, NULL) sets file's timestamp to the present.  */
#define HAVE_UTIME_NULL 1

/* Define as __inline if that's what the C compiler calls it.  */
/* #undef inline */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef mode_t */

/* Define to `long' if <sys/types.h> doesn't define.  */
/* #undef off_t */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* Define if you need to in order for stat and other things to work.  */
/* #undef _POSIX_SOURCE */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME 1

/* Define if your <sys/time.h> declares struct tm.  */
/* #undef TM_IN_SYS_TIME */

/* Define if the X Window System is missing or not being used.  */
/* #undef X_DISPLAY_MISSING */

/* Define if you have the Andrew File System.  */
/* #undef AFS */

/* Define if there is no specific function for reading the list of
   mounted filesystems.  fread will be used to read /etc/mnttab.  [SVR2]  */
/* #undef MOUNTED_FREAD */

/* Define if (like SVR2) there is no specific function for reading the
   list of mounted filesystems, and your system has these header files:
   <sys/fstyp.h> and <sys/statfs.h>.  [SVR3]  */
/* #undef MOUNTED_FREAD_FSTYP */

/* Define if there is a function named getfsstat for reading the list
   of mounted filesystems.  [DEC Alpha running OSF/1]  */
/* #undef MOUNTED_GETFSSTAT */

/* Define if there is a function named getmnt for reading the list of
   mounted filesystems.  [Ultrix]  */
/* #undef MOUNTED_GETMNT */

/* Define if there is a function named getmntent for reading the list
   of mounted filesystems, and that function takes a single argument.
   [4.3BSD, SunOS, HP-UX, Dynix, Irix]  */
#define MOUNTED_GETMNTENT1 1

/* Define if there is a function named getmntent for reading the list of
   mounted filesystems, and that function takes two arguments.  [SVR4]  */
/* #undef MOUNTED_GETMNTENT2 */

/* Define if there is a function named getmntinfo for reading the list
   of mounted filesystems.  [4.4BSD]  */
/* #undef MOUNTED_GETMNTINFO */

/* Define if there is a function named listmntent that can be used to
   list all mounted filesystems. [UNICOS] */
/* #undef MOUNTED_LISTMNTENT */

/* Define if there is a function named mntctl that can be used to read
   the list of mounted filesystems, and there is a system header file
   that declares `struct vmount.'  [AIX]  */
/* #undef MOUNTED_VMOUNT */

/*  Define if  statfs takes 3 args.  [DEC Alpha running OSF/1]  */
/* #undef STAT_STATFS3_OSF1 */

/* Define if there is no specific function for reading filesystems usage
   information and you have the <sys/filsys.h> header file.  [SVR2]  */
/* #undef STAT_READ_FILSYS */

/* Define if statfs takes 2 args and struct statfs has a field named f_bsize.
   [4.3BSD, SunOS 4, HP-UX, AIX PS/2]  */
/* #define STAT_STATFS2_BSIZE 1 */

/* Define if statfs takes 2 args and struct statfs has a field named f_fsize.
   [4.4BSD, NetBSD]  */
/* #undef STAT_STATFS2_FSIZE */

/* Define if statfs takes 2 args and the second argument has
   type struct fs_data.  [Ultrix]  */
/* #undef STAT_STATFS2_FS_DATA */

/* Define if statfs takes 4 args.  [SVR3, Dynix, Irix, Dolphin]  */
/* #undef STAT_STATFS4 */

/* Define if there is a function named statvfs.  [SVR4]  */
#define STAT_STATVFS

/* Define if the block counts reported by statfs may be truncated to 2GB
   and the correct values may be stored in the f_spare array.
   [SunOS 4.1.2, 4.1.3, and 4.1.3_U1 are reported to have this problem.
   SunOS 4.1.1 seems not to be affected.]  */
/* #undef STATFS_TRUNCATES_BLOCK_COUNTS */

/* The number of bytes in a __int64.  */
#define SIZEOF___INT64 8

/* The number of bytes in a char.  */
#define SIZEOF_CHAR 1

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 4

/* The number of bytes in a long long.  */
#define SIZEOF_LONG_LONG 8

/* The number of bytes in a short.  */
#define SIZEOF_SHORT 2

#define SIZEOF_FLOAT 4
#define SIZEOF_DOUBLE 8

#define HAVE_ISNAN
#define HAVE_ISINF

/* Define if you have the bcopy function.  */
#define HAVE_BCOPY 1

/* Define if you have the cfmakeraw function.  */
/* #undef HAVE_CFMAKERAW */

/* Define if you have the endgrent function.  */
#define HAVE_ENDGRENT 1

/* Define if you have the endpwent function.  */
#define HAVE_ENDPWENT 1

/* Define if you have the fchdir function.  */
#define HAVE_FCHDIR 1

/* Define if you have the ftime function.  */
#define HAVE_FTIME 1

/* Define if you have the ftruncate function.  */
#define HAVE_FTRUNCATE 1

/* Define if you have the getcwd function.  */
#define HAVE_GETCWD 1

/* Define if you have the getmntinfo function.  */
/* #undef HAVE_GETMNTINFO */

/* Define if you have the getopt function.  */
#define HAVE_GETOPT 1

/* Define if you have the gettimeofday function.  */
#define HAVE_GETTIMEOFDAY 1

/* Define if you have the isascii function.  */
#define HAVE_ISASCII 1

/* Define if you have the lchown function.  */
#define HAVE_LCHOWN 1

/* Define if you have the listmntent function.  */
/* #undef HAVE_LISTMNTENT */

/* Define if you have the memcpy function.  */
#define HAVE_MEMCPY 1

/* Define if you have the mkdir function.  */
#define HAVE_MKDIR 1

/* Define if you have the mkfifo function.  */
#define HAVE_MKFIFO 1

/* Define if you have the readdir_r function.  */
#define HAVE_READDIR_R 1

/* Define if you have the rmdir function.  */
#define HAVE_RMDIR 1

/* Define if you have the select function.  */
#define HAVE_SELECT 1

/* Define if you have the sigaction function.  */
#define HAVE_SIGACTION 1

/* Define if you have the strchr function.  */
#define HAVE_STRCHR 1

/* Define if you have the strdup function.  */
#define HAVE_STRDUP 1

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Define if you have the strrchr function.  */
#define HAVE_STRRCHR 1

/* Define if you have the strstr function.  */
#define HAVE_STRSTR 1

/* Define if you have the tcgetattr function.  */
#define HAVE_TCGETATTR 1

/* Define if you have the vfprintf function.  */
#define HAVE_VFPRINTF 1

/* Define if you have the vprintf function.  */
#define HAVE_VPRINTF 1

/* Define if you have the vsprintf function.  */
#define HAVE_VSPRINTF 1

/* Define if you have the <curses.h> header file.  */
#define HAVE_CURSES_H 1

/* Define if you have the <cybergraphx/cybergraphics.h> header file.  */
/* #undef HAVE_CYBERGRAPHX_CYBERGRAPHICS_H */

/* Define if you have the <ddraw.h> header file.  */
/* #undef HAVE_DDRAW_H */

/* Define if you have the <devices/ahi.h> header file.  */
/* #undef HAVE_DEVICES_AHI_H */

/* Define if you have the <dirent.h> header file.  */
#define HAVE_DIRENT_H 1

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <features.h> header file.  */
#define HAVE_FEATURES_H 1

/* Define if you have the <getopt.h> header file.  */
#define HAVE_GETOPT_H 1

/* Define if you have the <ggi/libggi.h> header file.  */
/* #undef HAVE_GGI_LIBGGI_H */

/* Define if you have the <libraries/cybergraphics.h> header file.  */
/* #undef HAVE_LIBRARIES_CYBERGRAPHICS_H */

/* Define if you have the <machine/joystick.h> header file.  */
/* #undef HAVE_MACHINE_JOYSTICK_H */

/* Define if you have the <machine/soundcard.h> header file.  */
/* #undef HAVE_MACHINE_SOUNDCARD_H */

/* Define if you have the <mntent.h> header file.  */
#define HAVE_MNTENT_H 1

/* Define if you have the <mnttab.h> header file.  */
/* #undef HAVE_MNTTAB_H */

/* Define if you have the <ncurses.h> header file.  */
#define HAVE_NCURSES_H 1

/* Define if you have the <ndir.h> header file.  */
/* #undef HAVE_NDIR_H */

/* Define if you have the <posix_opt.h> header file.  */
/* #undef HAVE_POSIX_OPT_H */

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <strings.h> header file.  */
#define HAVE_STRINGS_H 1

/* Define if you have the <sun/audioio.h> header file.  */
/* #undef HAVE_SUN_AUDIOIO_H */

/* Define if you have the <sys/audioio.h> header file.  */
/* #undef HAVE_SYS_AUDIOIO_H */

/* Define if you have the <sys/dir.h> header file.  */
/* #undef HAVE_SYS_DIR_H */

/* Define if you have the <sys/filsys.h> header file.  */
/* #undef HAVE_SYS_FILSYS_H */

/* Define if you have the <sys/fs/s5param.h> header file.  */
/* #undef HAVE_SYS_FS_S5PARAM_H */

/* Define if you have the <sys/fs_types.h> header file.  */
/* #undef HAVE_SYS_FS_TYPES_H */

/* Define if you have the <sys/fstyp.h> header file.  */
/* #undef HAVE_SYS_FSTYP_H */

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1

/* Define if you have the <sys/ipc.h> header file.  */
#define HAVE_SYS_IPC_H 1

/* Define if you have the <sys/mount.h> header file.  */
#define HAVE_SYS_MOUNT_H 1

/* Define if you have the <sys/ndir.h> header file.  */
/* #undef HAVE_SYS_NDIR_H */

/* Define if you have the <sys/param.h> header file.  */
#define HAVE_SYS_PARAM_H 1

/* Define if you have the <sys/shm.h> header file.  */
#define HAVE_SYS_SHM_H 1

/* Define if you have the <sys/soundcard.h> header file.  */
#define HAVE_SYS_SOUNDCARD_H 1

/* Define if you have the <sys/stat.h> header file.  */
#define HAVE_SYS_STAT_H 1

/* Define if you have the <sys/statfs.h> header file.  */
#define HAVE_SYS_STATFS_H 1

/* Define if you have the <sys/statvfs.h> header file.  */
/* #undef HAVE_SYS_STATVFS_H */

/* Define if you have the <sys/termios.h> header file.  */
#define HAVE_SYS_TERMIOS_H 1

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H 1

/* Define if you have the <sys/types.h> header file.  */
#define HAVE_SYS_TYPES_H 1

/* Define if you have the <sys/utime.h> header file.  */
/* #undef HAVE_SYS_UTIME_H */

/* Define if you have the <sys/vfs.h> header file.  */
#define HAVE_SYS_VFS_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <utime.h> header file.  */
#define HAVE_UTIME_H 1

/* Define if you have the <values.h> header file.  */
/* #undef HAVE_VALUES_H */

/* Define if you have the <windows.h> header file.  */
/* #undef HAVE_WINDOWS_H */

#define FSDB_DIR_SEPARATOR '/'
#define FSDB_DIR_SEPARATOR_S "/"

/* Define to 1 if `S_un' is a member of `struct in_addr'. */
/* #un#def HAVE_STRUCT_IN_ADDR_S_UN */

#ifdef _GCCRES_
#undef _GCCRES_
#endif

#ifdef UAE4ALL_NO_USE_RESTRICT
#define _GCCRES_
#else
#define _GCCRES_ __restrict__
#endif

#define __cdecl

#define strcmpi(x,y) strcasecmp(x,y)
#define stricmp(x,y) strcasecmp(x,y)

#ifndef MAX_PATH
#define MAX_PATH 256
#endif

#define M68K_SPEED_7MHZ_CYCLES 0
#define M68K_SPEED_14MHZ_CYCLES 1024
#define M68K_SPEED_25MHZ_CYCLES 128

typedef unsigned int WPARAM;
typedef long LPARAM;
typedef int SOCKET;
#define INVALID_SOCKET -1

typedef unsigned char boolean;
#define FALSE 0
#define TRUE 1

typedef unsigned short USHORT;

#define Sleep(x) usleep(x*1000)

/* Some defines to make it easier to compare files with WinUAE */
#include "uae/string.h"

#ifndef UAE_TYPES_H
#define _T(x)               x
typedef char TCHAR;
#endif
#define _tzset()            tzset()
#define _timezone           timezone
#define _daylight           daylight
#define _ftime(x)           ftime(x)
#ifdef ANDROID
#define _ftelli64(x)        ftello(x)
#define _fseeki64(x,y,z)    fseeko(x,y,z)
#else
#define _ftelli64(x)        ftello64(x)
#define _fseeki64(x,y,z)    fseeko64(x,y,z)
#endif
#define _wunlink(x)         unlink(x)
#define _istalnum(x)        isalnum(x)

#ifdef ANDROID
#define fmodl(x,y)          fmod(x,y)
#define remainderl(x,y)     remainder(x,y)
#define sinhl(x)            sinh(x)
#define sqrtl(x)            sqrt(x)
#define log1pl(x)           log1p(x)
#define expm1l(x)           expm1(x)
#define tanhl(x)            tanh(x)
#define atanl(x)            atan(x)
#define atanhl(x)           atanh(x)
#define sinl(x)             sin(x)
#define asinl(x)            asin(x)
#define tanl(x)             tan(x)
#define expl(x)             exp(x)
#define powl(x,y)           pow(x,y)
#define logl(x)             log(x)
#define log10l(x)           log10(x)
#define log2l(x)            (log(x)/log(2))
#define lrintl(x)           lrint(x)
#define rintl(x)            rint(x)
#define coshl(x)            cosh(x)
#define acosl(x)            acos(x)
#define cosl(x)             cos(x)
#endif

#endif /* PANDORAUAE_SYSCONFIG_H */

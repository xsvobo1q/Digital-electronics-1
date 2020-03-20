/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Marek/Desktop/DE Moje/Digital-electronics-1-master/Labs/07-stopwatch/07-stopwatch/stopwatch/BCD.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_3807574445_3212880686_p_0(char *t0)
{
    char t13[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t1 = (t0 + 3776);
    t5 = (t1 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 2152U);
    t10 = *((char **)t4);
    t4 = (t0 + 6384U);
    t11 = (t0 + 6422);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t18 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t10, t4, t11, t13);
    if (t18 == 1)
        goto LAB14;

LAB15:    t9 = (unsigned char)0;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    t3 = t8;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = (unsigned char)0;

LAB24:    if (t3 == 1)
        goto LAB19;

LAB20:    t2 = (unsigned char)0;

LAB21:    if (t2 != 0)
        goto LAB17;

LAB18:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(58, ng0);
    t15 = xsi_get_transient_memory(4U);
    memset(t15, 0, 4U);
    t25 = t15;
    memset(t25, (unsigned char)2, 4U);
    t26 = (t0 + 3712);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t15, 4U);
    xsi_driver_first_trans_fast(t26);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    t15 = (t0 + 1832U);
    t22 = *((char **)t15);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t8 = t24;
    goto LAB13;

LAB14:    t15 = (t0 + 1352U);
    t19 = *((char **)t15);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    t9 = t21;
    goto LAB16;

LAB17:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2152U);
    t11 = *((char **)t1);
    t1 = (t0 + 6384U);
    t12 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t11, t1, 1);
    t14 = (t13 + 12U);
    t17 = *((unsigned int *)t14);
    t31 = (1U * t17);
    t21 = (4U != t31);
    if (t21 == 1)
        goto LAB25;

LAB26:    t15 = (t0 + 3712);
    t19 = (t15 + 56U);
    t22 = *((char **)t19);
    t25 = (t22 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t12, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB6;

LAB19:    t1 = (t0 + 1672U);
    t10 = *((char **)t1);
    t18 = *((unsigned char *)t10);
    t20 = (t18 == (unsigned char)3);
    t2 = t20;
    goto LAB21;

LAB22:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB24;

LAB25:    xsi_size_not_matching(4U, t31, 0);
    goto LAB26;

}


extern void work_a_3807574445_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3807574445_3212880686_p_0};
	xsi_register_didat("work_a_3807574445_3212880686", "isim/stopwatch_tb00_isim_beh.exe.sim/work/a_3807574445_3212880686.didat");
	xsi_register_executes(pe);
}

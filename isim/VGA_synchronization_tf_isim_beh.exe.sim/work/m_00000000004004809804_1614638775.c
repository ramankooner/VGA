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
static const char *ng0 = "C:/Users/Sandeep Kooner/Desktop/360Labs/Project3VGA/VGA_synchronization_tf.v";
static int ng1[] = {9, 0};
static int ng2[] = {2, 0};
static const char *ng3 = " ns";
static int ng4[] = {10, 0};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};
static int ng7[] = {8, 0};
static const char *ng8 = "Tick: %d";
static const char *ng9 = "The bar color is: %b";
static const char *ng10 = "The ball color is: %b";
static const char *ng11 = "The wall color is: %b";
static const char *ng12 = "The horizontal count for the wall is: %d  and the vertical count is: %d";
static const char *ng13 = "The horizontal count for the bar is: %d  and the vertical count is: %d";
static const char *ng14 = "The horizontal count for the ball is: %d  and the veritcal count is: %d";
static int ng15[] = {32, 0};
static int ng16[] = {35, 0};
static const char *ng17 = "Error, At horizontal count: %d, the Wall is: %d";
static int ng18[] = {600, 0};
static int ng19[] = {603, 0};
static int ng20[] = {204, 0};
static int ng21[] = {276, 0};
static const char *ng22 = "Error, At horizontal count: %d, the Bar is: %d";
static int ng23[] = {580, 0};
static int ng24[] = {588, 0};
static int ng25[] = {238, 0};
static int ng26[] = {246, 0};
static const char *ng27 = "Error, At horizontal count: %d, the Ball is: %d";



static void Always_36_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_39_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);

LAB4:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t2, 32);
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng4)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t3), *((unsigned int *)t4), ng3, 0, *((unsigned int *)t5));
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3912);
    *((int *)t2) = 1;
    t4 = (t0 + 3128);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(47, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3928);
    *((int *)t2) = 1;
    t4 = (t0 + 3128);
    *((char **)t4) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(50, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t2 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t10 = (t9 & t8);
    t5 = (t0 + 5752);
    *((int *)t5) = t10;

LAB7:    t6 = (t0 + 5752);
    if (*((int *)t6) > 0)
        goto LAB8;

LAB9:    goto LAB1;

LAB8:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 3944);
    *((int *)t11) = 1;
    t12 = (t0 + 3128);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(56, ng0);
    t13 = (t0 + 5776);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 40U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)118, t16, 1);
    t2 = (t0 + 5752);
    t10 = *((int *)t2);
    *((int *)t2) = (t10 - 1);
    goto LAB7;

}

static void Always_60_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 3152);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 5800);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 40U);
    t8 = *((char **)t7);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3152);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB7:    xsi_set_current_line(65, ng0);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t15, 12);
    goto LAB9;

LAB10:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 5824);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3152);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB11:    xsi_set_current_line(69, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)118, t8, 12);
    goto LAB13;

LAB14:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 5848);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB15:    xsi_set_current_line(73, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)118, t8, 12);
    goto LAB17;

}

static void Always_77_3(char *t0)
{
    char t22[8];
    char t23[8];
    char t29[8];
    char t33[8];
    char t41[8];
    char t73[8];
    char t85[8];
    char t106[8];
    char t114[8];
    char t160[8];
    char t161[8];
    char t165[8];
    char t168[8];
    char t195[8];
    char t207[8];
    char t228[8];
    char t236[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t162;
    char *t163;
    char *t164;
    char *t166;
    char *t167;
    char *t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    int t187;
    int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t208;
    char *t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t218;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    int t260;
    int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    char *t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    char *t275;
    char *t276;
    char *t277;
    char *t278;
    char *t279;
    char *t280;
    char *t281;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3976);
    *((int *)t2) = 1;
    t3 = (t0 + 3624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 3400);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(86, ng0);
    t5 = (t0 + 5872);
    t6 = *((char **)t5);
    t7 = ((((char*)(t6))) + 40U);
    t8 = *((char **)t7);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB7:    xsi_set_current_line(87, ng0);
    t14 = (t0 + 5896);
    t15 = *((char **)t14);
    t16 = ((((char*)(t15))) + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 5920);
    t19 = *((char **)t18);
    t20 = ((((char*)(t19))) + 56U);
    t21 = *((char **)t20);
    xsi_vlogfile_write(1, 0, 0, ng12, 3, t0, (char)118, t17, 10, (char)118, t21, 10);
    goto LAB9;

LAB10:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 5944);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB11:    xsi_set_current_line(92, ng0);
    t7 = (t0 + 5968);
    t8 = *((char **)t7);
    t14 = ((((char*)(t8))) + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 5992);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 56U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng13, 3, t0, (char)118, t15, 10, (char)118, t19, 10);
    goto LAB13;

LAB14:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 6016);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 40U);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB15:    xsi_set_current_line(97, ng0);
    t7 = (t0 + 6040);
    t8 = *((char **)t7);
    t14 = ((((char*)(t8))) + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 6064);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 56U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng14, 3, t0, (char)118, t15, 10, (char)118, t19, 10);
    goto LAB17;

LAB18:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 6088);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng15)));
    memset(t22, 0, 8);
    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB20;

LAB19:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB22;

LAB21:    *((unsigned int *)t22) = 1;

LAB22:    memset(t23, 0, 8);
    t16 = (t22 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t22);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t16) != 0)
        goto LAB26;

LAB27:    t18 = (t23 + 4);
    t24 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t18);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB28;

LAB29:    memcpy(t41, t23, 8);

LAB30:    memset(t73, 0, 8);
    t74 = (t41 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t41);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t74) != 0)
        goto LAB45;

LAB46:    t81 = (t73 + 4);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB47;

LAB48:    memcpy(t114, t73, 8);

LAB49:    t146 = (t114 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t114);
    t150 = (t149 & t148);
    t151 = (t150 != 0);
    if (t151 > 0)
        goto LAB63;

LAB64:
LAB65:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB20:    t15 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB22;

LAB24:    *((unsigned int *)t23) = 1;
    goto LAB27;

LAB26:    t17 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB27;

LAB28:    t19 = (t0 + 6112);
    t20 = *((char **)t19);
    t21 = ((((char*)(t20))) + 56U);
    t27 = *((char **)t21);
    t28 = ((char*)((ng16)));
    memset(t29, 0, 8);
    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB32;

LAB31:    t31 = (t28 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t27) > *((unsigned int *)t28))
        goto LAB34;

LAB33:    *((unsigned int *)t29) = 1;

LAB34:    memset(t33, 0, 8);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t34) != 0)
        goto LAB38;

LAB39:    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t23 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB30;

LAB32:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB34;

LAB36:    *((unsigned int *)t33) = 1;
    goto LAB39;

LAB38:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB39;

LAB40:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t23 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t23);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB42;

LAB43:    *((unsigned int *)t73) = 1;
    goto LAB46;

LAB45:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB46;

LAB47:    t86 = (t0 + 6136);
    t87 = *((char **)t86);
    t88 = ((((char*)(t87))) + 40U);
    t89 = *((char **)t88);
    memset(t85, 0, 8);
    t88 = (t89 + 4);
    t90 = *((unsigned int *)t88);
    t91 = (~(t90));
    t92 = *((unsigned int *)t89);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t88) == 0)
        goto LAB50;

LAB52:    t95 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t95) = 1;

LAB53:    t96 = (t85 + 4);
    t97 = (t89 + 4);
    t98 = *((unsigned int *)t89);
    t99 = (~(t98));
    *((unsigned int *)t85) = t99;
    *((unsigned int *)t96) = 0;
    if (*((unsigned int *)t97) != 0)
        goto LAB55;

LAB54:    t104 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t104 & 1U);
    t105 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t105 & 1U);
    memset(t106, 0, 8);
    t107 = (t85 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t85);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t107) != 0)
        goto LAB58;

LAB59:    t115 = *((unsigned int *)t73);
    t116 = *((unsigned int *)t106);
    t117 = (t115 & t116);
    *((unsigned int *)t114) = t117;
    t118 = (t73 + 4);
    t119 = (t106 + 4);
    t120 = (t114 + 4);
    t121 = *((unsigned int *)t118);
    t122 = *((unsigned int *)t119);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = *((unsigned int *)t120);
    t125 = (t124 != 0);
    if (t125 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB49;

LAB50:    *((unsigned int *)t85) = 1;
    goto LAB53;

LAB55:    t100 = *((unsigned int *)t85);
    t101 = *((unsigned int *)t97);
    *((unsigned int *)t85) = (t100 | t101);
    t102 = *((unsigned int *)t96);
    t103 = *((unsigned int *)t97);
    *((unsigned int *)t96) = (t102 | t103);
    goto LAB54;

LAB56:    *((unsigned int *)t106) = 1;
    goto LAB59;

LAB58:    t113 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB59;

LAB60:    t126 = *((unsigned int *)t114);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t114) = (t126 | t127);
    t128 = (t73 + 4);
    t129 = (t106 + 4);
    t130 = *((unsigned int *)t73);
    t131 = (~(t130));
    t132 = *((unsigned int *)t128);
    t133 = (~(t132));
    t134 = *((unsigned int *)t106);
    t135 = (~(t134));
    t136 = *((unsigned int *)t129);
    t137 = (~(t136));
    t138 = (t131 & t133);
    t139 = (t135 & t137);
    t140 = (~(t138));
    t141 = (~(t139));
    t142 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t142 & t140);
    t143 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t143 & t141);
    t144 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t144 & t140);
    t145 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t145 & t141);
    goto LAB62;

LAB63:    xsi_set_current_line(102, ng0);
    t152 = (t0 + 6160);
    t153 = *((char **)t152);
    t154 = ((((char*)(t153))) + 56U);
    t155 = *((char **)t154);
    t156 = (t0 + 6184);
    t157 = *((char **)t156);
    t158 = ((((char*)(t157))) + 40U);
    t159 = *((char **)t158);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t155, 10, (char)118, t159, 1);
    goto LAB65;

LAB66:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 6208);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng18)));
    memset(t22, 0, 8);
    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB68;

LAB67:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB68;

LAB71:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB70;

LAB69:    *((unsigned int *)t22) = 1;

LAB70:    memset(t23, 0, 8);
    t16 = (t22 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t22);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t16) != 0)
        goto LAB74;

LAB75:    t18 = (t23 + 4);
    t24 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t18);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB76;

LAB77:    memcpy(t41, t23, 8);

LAB78:    memset(t73, 0, 8);
    t74 = (t41 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t41);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t74) != 0)
        goto LAB93;

LAB94:    t81 = (t73 + 4);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB95;

LAB96:    memcpy(t114, t73, 8);

LAB97:    memset(t160, 0, 8);
    t152 = (t114 + 4);
    t131 = *((unsigned int *)t152);
    t132 = (~(t131));
    t133 = *((unsigned int *)t114);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t152) != 0)
        goto LAB112;

LAB113:    t154 = (t160 + 4);
    t136 = *((unsigned int *)t160);
    t137 = *((unsigned int *)t154);
    t140 = (t136 || t137);
    if (t140 > 0)
        goto LAB114;

LAB115:    memcpy(t168, t160, 8);

LAB116:    memset(t195, 0, 8);
    t196 = (t168 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t168);
    t200 = (t199 & t198);
    t201 = (t200 & 1U);
    if (t201 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t196) != 0)
        goto LAB131;

LAB132:    t203 = (t195 + 4);
    t204 = *((unsigned int *)t195);
    t205 = *((unsigned int *)t203);
    t206 = (t204 || t205);
    if (t206 > 0)
        goto LAB133;

LAB134:    memcpy(t236, t195, 8);

LAB135:    t268 = (t236 + 4);
    t269 = *((unsigned int *)t268);
    t270 = (~(t269));
    t271 = *((unsigned int *)t236);
    t272 = (t271 & t270);
    t273 = (t272 != 0);
    if (t273 > 0)
        goto LAB149;

LAB150:
LAB151:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB152;
    goto LAB1;

LAB68:    t15 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB70;

LAB72:    *((unsigned int *)t23) = 1;
    goto LAB75;

LAB74:    t17 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB75;

LAB76:    t19 = (t0 + 6232);
    t20 = *((char **)t19);
    t21 = ((((char*)(t20))) + 56U);
    t27 = *((char **)t21);
    t28 = ((char*)((ng19)));
    memset(t29, 0, 8);
    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB80;

LAB79:    t31 = (t28 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB80;

LAB83:    if (*((unsigned int *)t27) > *((unsigned int *)t28))
        goto LAB82;

LAB81:    *((unsigned int *)t29) = 1;

LAB82:    memset(t33, 0, 8);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t34) != 0)
        goto LAB86;

LAB87:    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t23 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB88;

LAB89:
LAB90:    goto LAB78;

LAB80:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB82;

LAB84:    *((unsigned int *)t33) = 1;
    goto LAB87;

LAB86:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB87;

LAB88:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t23 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t23);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB90;

LAB91:    *((unsigned int *)t73) = 1;
    goto LAB94;

LAB93:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB94;

LAB95:    t86 = (t0 + 6256);
    t87 = *((char **)t86);
    t88 = ((((char*)(t87))) + 56U);
    t89 = *((char **)t88);
    t95 = ((char*)((ng20)));
    memset(t85, 0, 8);
    t96 = (t89 + 4);
    if (*((unsigned int *)t96) != 0)
        goto LAB99;

LAB98:    t97 = (t95 + 4);
    if (*((unsigned int *)t97) != 0)
        goto LAB99;

LAB102:    if (*((unsigned int *)t89) < *((unsigned int *)t95))
        goto LAB101;

LAB100:    *((unsigned int *)t85) = 1;

LAB101:    memset(t106, 0, 8);
    t113 = (t85 + 4);
    t90 = *((unsigned int *)t113);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t113) != 0)
        goto LAB105;

LAB106:    t98 = *((unsigned int *)t73);
    t99 = *((unsigned int *)t106);
    t100 = (t98 & t99);
    *((unsigned int *)t114) = t100;
    t119 = (t73 + 4);
    t120 = (t106 + 4);
    t128 = (t114 + 4);
    t101 = *((unsigned int *)t119);
    t102 = *((unsigned int *)t120);
    t103 = (t101 | t102);
    *((unsigned int *)t128) = t103;
    t104 = *((unsigned int *)t128);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB107;

LAB108:
LAB109:    goto LAB97;

LAB99:    t107 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB101;

LAB103:    *((unsigned int *)t106) = 1;
    goto LAB106;

LAB105:    t118 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB106;

LAB107:    t108 = *((unsigned int *)t114);
    t109 = *((unsigned int *)t128);
    *((unsigned int *)t114) = (t108 | t109);
    t129 = (t73 + 4);
    t146 = (t106 + 4);
    t110 = *((unsigned int *)t73);
    t111 = (~(t110));
    t112 = *((unsigned int *)t129);
    t115 = (~(t112));
    t116 = *((unsigned int *)t106);
    t117 = (~(t116));
    t121 = *((unsigned int *)t146);
    t122 = (~(t121));
    t138 = (t111 & t115);
    t139 = (t117 & t122);
    t123 = (~(t138));
    t124 = (~(t139));
    t125 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t125 & t123);
    t126 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t126 & t124);
    t127 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t127 & t123);
    t130 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t130 & t124);
    goto LAB109;

LAB110:    *((unsigned int *)t160) = 1;
    goto LAB113;

LAB112:    t153 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB113;

LAB114:    t155 = (t0 + 6280);
    t156 = *((char **)t155);
    t157 = ((((char*)(t156))) + 56U);
    t158 = *((char **)t157);
    t159 = ((char*)((ng21)));
    memset(t161, 0, 8);
    t162 = (t158 + 4);
    if (*((unsigned int *)t162) != 0)
        goto LAB118;

LAB117:    t163 = (t159 + 4);
    if (*((unsigned int *)t163) != 0)
        goto LAB118;

LAB121:    if (*((unsigned int *)t158) > *((unsigned int *)t159))
        goto LAB120;

LAB119:    *((unsigned int *)t161) = 1;

LAB120:    memset(t165, 0, 8);
    t166 = (t161 + 4);
    t141 = *((unsigned int *)t166);
    t142 = (~(t141));
    t143 = *((unsigned int *)t161);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t166) != 0)
        goto LAB124;

LAB125:    t147 = *((unsigned int *)t160);
    t148 = *((unsigned int *)t165);
    t149 = (t147 & t148);
    *((unsigned int *)t168) = t149;
    t169 = (t160 + 4);
    t170 = (t165 + 4);
    t171 = (t168 + 4);
    t150 = *((unsigned int *)t169);
    t151 = *((unsigned int *)t170);
    t172 = (t150 | t151);
    *((unsigned int *)t171) = t172;
    t173 = *((unsigned int *)t171);
    t174 = (t173 != 0);
    if (t174 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB116;

LAB118:    t164 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB120;

LAB122:    *((unsigned int *)t165) = 1;
    goto LAB125;

LAB124:    t167 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t167) = 1;
    goto LAB125;

LAB126:    t175 = *((unsigned int *)t168);
    t176 = *((unsigned int *)t171);
    *((unsigned int *)t168) = (t175 | t176);
    t177 = (t160 + 4);
    t178 = (t165 + 4);
    t179 = *((unsigned int *)t160);
    t180 = (~(t179));
    t181 = *((unsigned int *)t177);
    t182 = (~(t181));
    t183 = *((unsigned int *)t165);
    t184 = (~(t183));
    t185 = *((unsigned int *)t178);
    t186 = (~(t185));
    t187 = (t180 & t182);
    t188 = (t184 & t186);
    t189 = (~(t187));
    t190 = (~(t188));
    t191 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t191 & t189);
    t192 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t192 & t190);
    t193 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t193 & t189);
    t194 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t194 & t190);
    goto LAB128;

LAB129:    *((unsigned int *)t195) = 1;
    goto LAB132;

LAB131:    t202 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB132;

LAB133:    t208 = (t0 + 6304);
    t209 = *((char **)t208);
    t210 = ((((char*)(t209))) + 40U);
    t211 = *((char **)t210);
    memset(t207, 0, 8);
    t210 = (t211 + 4);
    t212 = *((unsigned int *)t210);
    t213 = (~(t212));
    t214 = *((unsigned int *)t211);
    t215 = (t214 & t213);
    t216 = (t215 & 1U);
    if (t216 != 0)
        goto LAB139;

LAB137:    if (*((unsigned int *)t210) == 0)
        goto LAB136;

LAB138:    t217 = (t207 + 4);
    *((unsigned int *)t207) = 1;
    *((unsigned int *)t217) = 1;

LAB139:    t218 = (t207 + 4);
    t219 = (t211 + 4);
    t220 = *((unsigned int *)t211);
    t221 = (~(t220));
    *((unsigned int *)t207) = t221;
    *((unsigned int *)t218) = 0;
    if (*((unsigned int *)t219) != 0)
        goto LAB141;

LAB140:    t226 = *((unsigned int *)t207);
    *((unsigned int *)t207) = (t226 & 1U);
    t227 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t227 & 1U);
    memset(t228, 0, 8);
    t229 = (t207 + 4);
    t230 = *((unsigned int *)t229);
    t231 = (~(t230));
    t232 = *((unsigned int *)t207);
    t233 = (t232 & t231);
    t234 = (t233 & 1U);
    if (t234 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t229) != 0)
        goto LAB144;

LAB145:    t237 = *((unsigned int *)t195);
    t238 = *((unsigned int *)t228);
    t239 = (t237 & t238);
    *((unsigned int *)t236) = t239;
    t240 = (t195 + 4);
    t241 = (t228 + 4);
    t242 = (t236 + 4);
    t243 = *((unsigned int *)t240);
    t244 = *((unsigned int *)t241);
    t245 = (t243 | t244);
    *((unsigned int *)t242) = t245;
    t246 = *((unsigned int *)t242);
    t247 = (t246 != 0);
    if (t247 == 1)
        goto LAB146;

LAB147:
LAB148:    goto LAB135;

LAB136:    *((unsigned int *)t207) = 1;
    goto LAB139;

LAB141:    t222 = *((unsigned int *)t207);
    t223 = *((unsigned int *)t219);
    *((unsigned int *)t207) = (t222 | t223);
    t224 = *((unsigned int *)t218);
    t225 = *((unsigned int *)t219);
    *((unsigned int *)t218) = (t224 | t225);
    goto LAB140;

LAB142:    *((unsigned int *)t228) = 1;
    goto LAB145;

LAB144:    t235 = (t228 + 4);
    *((unsigned int *)t228) = 1;
    *((unsigned int *)t235) = 1;
    goto LAB145;

LAB146:    t248 = *((unsigned int *)t236);
    t249 = *((unsigned int *)t242);
    *((unsigned int *)t236) = (t248 | t249);
    t250 = (t195 + 4);
    t251 = (t228 + 4);
    t252 = *((unsigned int *)t195);
    t253 = (~(t252));
    t254 = *((unsigned int *)t250);
    t255 = (~(t254));
    t256 = *((unsigned int *)t228);
    t257 = (~(t256));
    t258 = *((unsigned int *)t251);
    t259 = (~(t258));
    t260 = (t253 & t255);
    t261 = (t257 & t259);
    t262 = (~(t260));
    t263 = (~(t261));
    t264 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t264 & t262);
    t265 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t265 & t263);
    t266 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t266 & t262);
    t267 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t267 & t263);
    goto LAB148;

LAB149:    xsi_set_current_line(108, ng0);
    t274 = (t0 + 6328);
    t275 = *((char **)t274);
    t276 = ((((char*)(t275))) + 56U);
    t277 = *((char **)t276);
    t278 = (t0 + 6352);
    t279 = *((char **)t278);
    t280 = ((((char*)(t279))) + 40U);
    t281 = *((char **)t280);
    xsi_vlogfile_write(1, 0, 0, ng22, 3, t0, (char)118, t277, 10, (char)118, t281, 1);
    goto LAB151;

LAB152:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 6376);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng23)));
    memset(t22, 0, 8);
    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB154;

LAB153:    t14 = (t7 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB154;

LAB157:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB156;

LAB155:    *((unsigned int *)t22) = 1;

LAB156:    memset(t23, 0, 8);
    t16 = (t22 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t22);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t16) != 0)
        goto LAB160;

LAB161:    t18 = (t23 + 4);
    t24 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t18);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB162;

LAB163:    memcpy(t41, t23, 8);

LAB164:    memset(t73, 0, 8);
    t74 = (t41 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t41);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB177;

LAB178:    if (*((unsigned int *)t74) != 0)
        goto LAB179;

LAB180:    t81 = (t73 + 4);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB181;

LAB182:    memcpy(t114, t73, 8);

LAB183:    memset(t160, 0, 8);
    t152 = (t114 + 4);
    t131 = *((unsigned int *)t152);
    t132 = (~(t131));
    t133 = *((unsigned int *)t114);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t152) != 0)
        goto LAB198;

LAB199:    t154 = (t160 + 4);
    t136 = *((unsigned int *)t160);
    t137 = *((unsigned int *)t154);
    t140 = (t136 || t137);
    if (t140 > 0)
        goto LAB200;

LAB201:    memcpy(t168, t160, 8);

LAB202:    memset(t195, 0, 8);
    t196 = (t168 + 4);
    t197 = *((unsigned int *)t196);
    t198 = (~(t197));
    t199 = *((unsigned int *)t168);
    t200 = (t199 & t198);
    t201 = (t200 & 1U);
    if (t201 != 0)
        goto LAB215;

LAB216:    if (*((unsigned int *)t196) != 0)
        goto LAB217;

LAB218:    t203 = (t195 + 4);
    t204 = *((unsigned int *)t195);
    t205 = *((unsigned int *)t203);
    t206 = (t204 || t205);
    if (t206 > 0)
        goto LAB219;

LAB220:    memcpy(t236, t195, 8);

LAB221:    t268 = (t236 + 4);
    t269 = *((unsigned int *)t268);
    t270 = (~(t269));
    t271 = *((unsigned int *)t236);
    t272 = (t271 & t270);
    t273 = (t272 != 0);
    if (t273 > 0)
        goto LAB235;

LAB236:
LAB237:    goto LAB2;

LAB154:    t15 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB156;

LAB158:    *((unsigned int *)t23) = 1;
    goto LAB161;

LAB160:    t17 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB161;

LAB162:    t19 = (t0 + 6400);
    t20 = *((char **)t19);
    t21 = ((((char*)(t20))) + 56U);
    t27 = *((char **)t21);
    t28 = ((char*)((ng24)));
    memset(t29, 0, 8);
    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB166;

LAB165:    t31 = (t28 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB166;

LAB169:    if (*((unsigned int *)t27) > *((unsigned int *)t28))
        goto LAB168;

LAB167:    *((unsigned int *)t29) = 1;

LAB168:    memset(t33, 0, 8);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t34) != 0)
        goto LAB172;

LAB173:    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t33);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t23 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB174;

LAB175:
LAB176:    goto LAB164;

LAB166:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB168;

LAB170:    *((unsigned int *)t33) = 1;
    goto LAB173;

LAB172:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB173;

LAB174:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t23 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t23);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t33);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB176;

LAB177:    *((unsigned int *)t73) = 1;
    goto LAB180;

LAB179:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB180;

LAB181:    t86 = (t0 + 6424);
    t87 = *((char **)t86);
    t88 = ((((char*)(t87))) + 56U);
    t89 = *((char **)t88);
    t95 = ((char*)((ng25)));
    memset(t85, 0, 8);
    t96 = (t89 + 4);
    if (*((unsigned int *)t96) != 0)
        goto LAB185;

LAB184:    t97 = (t95 + 4);
    if (*((unsigned int *)t97) != 0)
        goto LAB185;

LAB188:    if (*((unsigned int *)t89) < *((unsigned int *)t95))
        goto LAB187;

LAB186:    *((unsigned int *)t85) = 1;

LAB187:    memset(t106, 0, 8);
    t113 = (t85 + 4);
    t90 = *((unsigned int *)t113);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB189;

LAB190:    if (*((unsigned int *)t113) != 0)
        goto LAB191;

LAB192:    t98 = *((unsigned int *)t73);
    t99 = *((unsigned int *)t106);
    t100 = (t98 & t99);
    *((unsigned int *)t114) = t100;
    t119 = (t73 + 4);
    t120 = (t106 + 4);
    t128 = (t114 + 4);
    t101 = *((unsigned int *)t119);
    t102 = *((unsigned int *)t120);
    t103 = (t101 | t102);
    *((unsigned int *)t128) = t103;
    t104 = *((unsigned int *)t128);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB193;

LAB194:
LAB195:    goto LAB183;

LAB185:    t107 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB187;

LAB189:    *((unsigned int *)t106) = 1;
    goto LAB192;

LAB191:    t118 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB192;

LAB193:    t108 = *((unsigned int *)t114);
    t109 = *((unsigned int *)t128);
    *((unsigned int *)t114) = (t108 | t109);
    t129 = (t73 + 4);
    t146 = (t106 + 4);
    t110 = *((unsigned int *)t73);
    t111 = (~(t110));
    t112 = *((unsigned int *)t129);
    t115 = (~(t112));
    t116 = *((unsigned int *)t106);
    t117 = (~(t116));
    t121 = *((unsigned int *)t146);
    t122 = (~(t121));
    t138 = (t111 & t115);
    t139 = (t117 & t122);
    t123 = (~(t138));
    t124 = (~(t139));
    t125 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t125 & t123);
    t126 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t126 & t124);
    t127 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t127 & t123);
    t130 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t130 & t124);
    goto LAB195;

LAB196:    *((unsigned int *)t160) = 1;
    goto LAB199;

LAB198:    t153 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB199;

LAB200:    t155 = (t0 + 6448);
    t156 = *((char **)t155);
    t157 = ((((char*)(t156))) + 56U);
    t158 = *((char **)t157);
    t159 = ((char*)((ng26)));
    memset(t161, 0, 8);
    t162 = (t158 + 4);
    if (*((unsigned int *)t162) != 0)
        goto LAB204;

LAB203:    t163 = (t159 + 4);
    if (*((unsigned int *)t163) != 0)
        goto LAB204;

LAB207:    if (*((unsigned int *)t158) > *((unsigned int *)t159))
        goto LAB206;

LAB205:    *((unsigned int *)t161) = 1;

LAB206:    memset(t165, 0, 8);
    t166 = (t161 + 4);
    t141 = *((unsigned int *)t166);
    t142 = (~(t141));
    t143 = *((unsigned int *)t161);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB208;

LAB209:    if (*((unsigned int *)t166) != 0)
        goto LAB210;

LAB211:    t147 = *((unsigned int *)t160);
    t148 = *((unsigned int *)t165);
    t149 = (t147 & t148);
    *((unsigned int *)t168) = t149;
    t169 = (t160 + 4);
    t170 = (t165 + 4);
    t171 = (t168 + 4);
    t150 = *((unsigned int *)t169);
    t151 = *((unsigned int *)t170);
    t172 = (t150 | t151);
    *((unsigned int *)t171) = t172;
    t173 = *((unsigned int *)t171);
    t174 = (t173 != 0);
    if (t174 == 1)
        goto LAB212;

LAB213:
LAB214:    goto LAB202;

LAB204:    t164 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB206;

LAB208:    *((unsigned int *)t165) = 1;
    goto LAB211;

LAB210:    t167 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t167) = 1;
    goto LAB211;

LAB212:    t175 = *((unsigned int *)t168);
    t176 = *((unsigned int *)t171);
    *((unsigned int *)t168) = (t175 | t176);
    t177 = (t160 + 4);
    t178 = (t165 + 4);
    t179 = *((unsigned int *)t160);
    t180 = (~(t179));
    t181 = *((unsigned int *)t177);
    t182 = (~(t181));
    t183 = *((unsigned int *)t165);
    t184 = (~(t183));
    t185 = *((unsigned int *)t178);
    t186 = (~(t185));
    t187 = (t180 & t182);
    t188 = (t184 & t186);
    t189 = (~(t187));
    t190 = (~(t188));
    t191 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t191 & t189);
    t192 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t192 & t190);
    t193 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t193 & t189);
    t194 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t194 & t190);
    goto LAB214;

LAB215:    *((unsigned int *)t195) = 1;
    goto LAB218;

LAB217:    t202 = (t195 + 4);
    *((unsigned int *)t195) = 1;
    *((unsigned int *)t202) = 1;
    goto LAB218;

LAB219:    t208 = (t0 + 6472);
    t209 = *((char **)t208);
    t210 = ((((char*)(t209))) + 40U);
    t211 = *((char **)t210);
    memset(t207, 0, 8);
    t210 = (t211 + 4);
    t212 = *((unsigned int *)t210);
    t213 = (~(t212));
    t214 = *((unsigned int *)t211);
    t215 = (t214 & t213);
    t216 = (t215 & 1U);
    if (t216 != 0)
        goto LAB225;

LAB223:    if (*((unsigned int *)t210) == 0)
        goto LAB222;

LAB224:    t217 = (t207 + 4);
    *((unsigned int *)t207) = 1;
    *((unsigned int *)t217) = 1;

LAB225:    t218 = (t207 + 4);
    t219 = (t211 + 4);
    t220 = *((unsigned int *)t211);
    t221 = (~(t220));
    *((unsigned int *)t207) = t221;
    *((unsigned int *)t218) = 0;
    if (*((unsigned int *)t219) != 0)
        goto LAB227;

LAB226:    t226 = *((unsigned int *)t207);
    *((unsigned int *)t207) = (t226 & 1U);
    t227 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t227 & 1U);
    memset(t228, 0, 8);
    t229 = (t207 + 4);
    t230 = *((unsigned int *)t229);
    t231 = (~(t230));
    t232 = *((unsigned int *)t207);
    t233 = (t232 & t231);
    t234 = (t233 & 1U);
    if (t234 != 0)
        goto LAB228;

LAB229:    if (*((unsigned int *)t229) != 0)
        goto LAB230;

LAB231:    t237 = *((unsigned int *)t195);
    t238 = *((unsigned int *)t228);
    t239 = (t237 & t238);
    *((unsigned int *)t236) = t239;
    t240 = (t195 + 4);
    t241 = (t228 + 4);
    t242 = (t236 + 4);
    t243 = *((unsigned int *)t240);
    t244 = *((unsigned int *)t241);
    t245 = (t243 | t244);
    *((unsigned int *)t242) = t245;
    t246 = *((unsigned int *)t242);
    t247 = (t246 != 0);
    if (t247 == 1)
        goto LAB232;

LAB233:
LAB234:    goto LAB221;

LAB222:    *((unsigned int *)t207) = 1;
    goto LAB225;

LAB227:    t222 = *((unsigned int *)t207);
    t223 = *((unsigned int *)t219);
    *((unsigned int *)t207) = (t222 | t223);
    t224 = *((unsigned int *)t218);
    t225 = *((unsigned int *)t219);
    *((unsigned int *)t218) = (t224 | t225);
    goto LAB226;

LAB228:    *((unsigned int *)t228) = 1;
    goto LAB231;

LAB230:    t235 = (t228 + 4);
    *((unsigned int *)t228) = 1;
    *((unsigned int *)t235) = 1;
    goto LAB231;

LAB232:    t248 = *((unsigned int *)t236);
    t249 = *((unsigned int *)t242);
    *((unsigned int *)t236) = (t248 | t249);
    t250 = (t195 + 4);
    t251 = (t228 + 4);
    t252 = *((unsigned int *)t195);
    t253 = (~(t252));
    t254 = *((unsigned int *)t250);
    t255 = (~(t254));
    t256 = *((unsigned int *)t228);
    t257 = (~(t256));
    t258 = *((unsigned int *)t251);
    t259 = (~(t258));
    t260 = (t253 & t255);
    t261 = (t257 & t259);
    t262 = (~(t260));
    t263 = (~(t261));
    t264 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t264 & t262);
    t265 = *((unsigned int *)t242);
    *((unsigned int *)t242) = (t265 & t263);
    t266 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t266 & t262);
    t267 = *((unsigned int *)t236);
    *((unsigned int *)t236) = (t267 & t263);
    goto LAB234;

LAB235:    xsi_set_current_line(114, ng0);
    t274 = (t0 + 6496);
    t275 = *((char **)t274);
    t276 = ((((char*)(t275))) + 56U);
    t277 = *((char **)t276);
    t278 = (t0 + 6520);
    t279 = *((char **)t278);
    t280 = ((((char*)(t279))) + 40U);
    t281 = *((char **)t280);
    xsi_vlogfile_write(1, 0, 0, ng27, 3, t0, (char)118, t277, 10, (char)118, t281, 1);
    goto LAB237;

}


extern void work_m_00000000004004809804_1614638775_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Initial_39_1,(void *)Always_60_2,(void *)Always_77_3};
	xsi_register_didat("work_m_00000000004004809804_1614638775", "isim/VGA_synchronization_tf_isim_beh.exe.sim/work/m_00000000004004809804_1614638775.didat");
	xsi_register_executes(pe);
}

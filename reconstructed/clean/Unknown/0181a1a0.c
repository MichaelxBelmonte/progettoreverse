// Function: FUN_0181a1a0
// Address: 0181a1a0
// Size: 10729 bytes
// Class: Unknown

void FUN_0181a1a0(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *plVar3;
  void*this_ptr;
  int64_t lVar4;
  bool bVar5;
  
  puVar2 = g_028af820;
  if ((g_028af820 == (void*)0x0) || (g_028af829 == '\0')) {
    FUN_00e8cb50();
    if (g_028af820 == (void*)0x0) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      bVar5 = g_028af820 == (void*)0x0;
      g_028af820 = puVar2;
      if (((bVar5) || (FUN_00d50b20(), g_028af820 != (void*)0x0)) && (g_028af828 == '\0')
         ) {
        g_028af828 = '\x01';
        FUN_00e8cb90();
      }
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d21140();
      lVar1 = g_027d6358;
      if (g_027d6358 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181a2c5;
LAB_0181a2d9:
        if (lVar1 != 0) goto LAB_0181a2de;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a2c5:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a2d9;
        }
LAB_0181a2de:
        FUN_00d50b20();
      }
      lVar1 = g_0276c390;
      if (g_0276c390 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181a316;
LAB_0181a32d:
        if (lVar1 != 0) goto LAB_0181a332;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a316:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a32d;
        }
LAB_0181a332:
        FUN_00d50b20();
      }
      FUN_01819b10(g_0240df18,g_02390124,g_023b16a0);
      FUN_01819b10(g_0241b640,g_02391090,g_023b8c38);
      FUN_01819b10(g_023941e8,g_02416da8,g_023908e0);
      FUN_01819b10(g_02416dac,g_02416db0,g_023908e8);
      FUN_01819b10(g_02416db4,g_02416db8,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027df420;
      if (g_027df420 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181a452;
LAB_0181a466:
        if (lVar1 != 0) goto LAB_0181a46b;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a452:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a466;
        }
LAB_0181a46b:
        FUN_00d50b20();
      }
      lVar1 = g_0276c390;
      if (g_0276c390 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181a4a3;
LAB_0181a4ba:
        if (lVar1 != 0) goto LAB_0181a4bf;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a4a3:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a4ba;
        }
LAB_0181a4bf:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02411264,g_02390124,g_023b16a0);
      FUN_01819b10(g_02416dbc,g_02416dc0,g_023b8c38);
      FUN_01819b10(g_023941e8,g_02416dc4,g_023908e0);
      FUN_01819b10(g_02390110,g_02391090,g_023908e8);
      FUN_01819b10(g_02416dc8,g_02394254,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027c0ae8;
      if (g_027c0ae8 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181a5f6;
LAB_0181a60b:
        if (lVar1 != 0) goto LAB_0181a610;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a5f6:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a60b;
        }
LAB_0181a610:
        FUN_00d50b20();
      }
      lVar1 = g_0276c390;
      if (g_0276c390 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181a64a;
LAB_0181a661:
        if (lVar1 != 0) goto LAB_0181a666;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a64a:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a661;
        }
LAB_0181a666:
        FUN_00d50b20();
      }
      FUN_01819b10(g_0241b640,g_02390124,g_023941f0);
      FUN_01819b10(g_02416dcc,g_02416dd0,g_02390438);
      FUN_01819b10(g_02416dd4,g_02416dd8,g_0239043c);
      FUN_01819b10(g_02416ddc,g_02416dd8,g_023908e8);
      FUN_01819b10(g_02416de0,g_02391090,g_02423bc0);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_02781628;
      if (g_02781628 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181a79b;
LAB_0181a7af:
        if (lVar1 != 0) goto LAB_0181a7b4;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a79b:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a7af;
        }
LAB_0181a7b4:
        FUN_00d50b20();
      }
      lVar1 = g_0276c390;
      if (g_0276c390 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181a7ec;
LAB_0181a803:
        if (lVar1 != 0) goto LAB_0181a808;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a7ec:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a803;
        }
LAB_0181a808:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02411264,g_02390124,g_023b16a0);
      FUN_01819b10(g_02416de4,g_02416de8,g_023b8c38);
      FUN_01819b10(g_023941e8,g_02416dd8,g_023908e0);
      FUN_01819b10(g_0240df00,g_02416de8,g_023908e8);
      FUN_01819b10(g_02416dec,g_02416df0,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027cc920;
      if (g_027cc920 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181a93f;
LAB_0181a954:
        if (lVar1 != 0) goto LAB_0181a959;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a93f:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a954;
        }
LAB_0181a959:
        FUN_00d50b20();
      }
      lVar1 = g_0276c390;
      if (g_0276c390 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181a993;
LAB_0181a9aa:
        if (lVar1 != 0) goto LAB_0181a9af;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181a993:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181a9aa;
        }
LAB_0181a9af:
        FUN_00d50b20();
      }
      FUN_01819b10(g_0240df18,g_02390124,g_023941f0);
      FUN_01819b10(g_02416df4,g_02416df8,g_023b5d7c);
      FUN_01819b10(g_02390110,g_02416dfc,g_023908e0);
      FUN_01819b10(g_02416e00,g_02416e04,g_023908e8);
      FUN_01819b10(g_02416e08,g_02416db0,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027d6358;
      if (g_027d6358 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181aae4;
LAB_0181aaf8:
        if (lVar1 != 0) goto LAB_0181aafd;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181aae4:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181aaf8;
        }
LAB_0181aafd:
        FUN_00d50b20();
      }
      lVar1 = g_027d6360;
      if (g_027d6360 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181ab35;
LAB_0181ab4c:
        if (lVar1 != 0) goto LAB_0181ab51;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181ab35:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181ab4c;
        }
LAB_0181ab51:
        FUN_00d50b20();
      }
      FUN_01819b10(g_0240df18,g_02390124,g_023b16a0);
      FUN_01819b10(g_0241b640,g_02391090,g_023941f0);
      FUN_01819b10(g_02416e0c,g_02416e10,g_023908e0);
      FUN_01819b10(g_02416dc8,g_02416e14,g_023908e8);
      FUN_01819b10(g_02416e18,g_0240df04,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027df420;
      if (g_027df420 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181ac88;
LAB_0181ac9d:
        if (lVar1 != 0) goto LAB_0181aca2;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181ac88:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181ac9d;
        }
LAB_0181aca2:
        FUN_00d50b20();
      }
      lVar1 = g_027d6360;
      if (g_027d6360 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181acdc;
LAB_0181acf3:
        if (lVar1 != 0) goto LAB_0181acf8;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181acdc:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181acf3;
        }
LAB_0181acf8:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02411264,g_02390124,g_023b16a0);
      FUN_01819b10(g_0241b65c,g_02416e1c,g_023b8c38);
      FUN_01819b10(g_02390110,g_02416de8,g_023908e0);
      FUN_01819b10(g_0240df00,g_02416de8,g_023908e8);
      FUN_01819b10(g_02411424,g_0240df04,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027c0ae8;
      if (g_027c0ae8 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181ae2d;
LAB_0181ae41:
        if (lVar1 != 0) goto LAB_0181ae46;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181ae2d:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181ae41;
        }
LAB_0181ae46:
        FUN_00d50b20();
      }
      lVar1 = g_027d6360;
      if (g_027d6360 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181ae7e;
LAB_0181ae95:
        if (lVar1 != 0) goto LAB_0181ae9a;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181ae7e:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181ae95;
        }
LAB_0181ae9a:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416e20,g_02390124,g_023b8c38);
      FUN_01819b10(g_02416e24,g_02416e28,g_023b5d7c);
      FUN_01819b10(g_02416e2c,g_02416dd0,g_023908e8);
      FUN_01819b10(g_02416dc8,g_02416e30,g_02423bc0);
      FUN_01819b10(g_02416e34,g_02416e04,g_02416e38);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_02781628;
      if (g_02781628 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181afd1;
LAB_0181afe6:
        if (lVar1 != 0) goto LAB_0181afeb;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181afd1:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181afe6;
        }
LAB_0181afeb:
        FUN_00d50b20();
      }
      lVar1 = g_027d6360;
      if (g_027d6360 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181b025;
LAB_0181b03c:
        if (lVar1 != 0) goto LAB_0181b041;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b025:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b03c;
        }
LAB_0181b041:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02411264,g_02390124,g_02390438);
      FUN_01819b10(g_02416e3c,g_02416e14,g_023b8c38);
      FUN_01819b10(g_02390110,g_02416de8,g_023908e0);
      FUN_01819b10(g_02416e40,g_02416e14,g_023908e8);
      FUN_01819b10(g_02416e44,g_02391090,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027cc920;
      if (g_027cc920 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181b176;
LAB_0181b18a:
        if (lVar1 != 0) goto LAB_0181b18f;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b176:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b18a;
        }
LAB_0181b18f:
        FUN_00d50b20();
      }
      lVar1 = g_027d6360;
      if (g_027d6360 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181b1c7;
LAB_0181b1de:
        if (lVar1 != 0) goto LAB_0181b1e3;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b1c7:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b1de;
        }
LAB_0181b1e3:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416e48,g_02390124,g_023b16a0);
      FUN_01819b10(g_02416e4c,g_02416e50,g_023b5d7c);
      FUN_01819b10(g_0240df00,g_02416df0,g_023908e0);
      FUN_01819b10(g_02416e34,g_02391090,g_023908e8);
      FUN_01819b10(g_02416e54,g_02416df8,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027d6358;
      if (g_027d6358 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181b31a;
LAB_0181b32f:
        if (lVar1 != 0) goto LAB_0181b334;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b31a:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b32f;
        }
LAB_0181b334:
        FUN_00d50b20();
      }
      lVar1 = g_027d6368;
      if (g_027d6368 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181b36e;
LAB_0181b385:
        if (lVar1 != 0) goto LAB_0181b38a;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b36e:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b385;
        }
LAB_0181b38a:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416e58,g_02390124,g_023b16a0);
      FUN_01819b10(g_02416e5c,g_02391090,g_023941f0);
      FUN_01819b10(g_02416de0,g_02416e60,g_023908e0);
      FUN_01819b10(g_02411424,g_02416df8,g_023908e8);
      FUN_01819b10(g_02416e64,g_023b81d4,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027df420;
      if (g_027df420 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181b4bf;
LAB_0181b4d3:
        if (lVar1 != 0) goto LAB_0181b4d8;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b4bf:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b4d3;
        }
LAB_0181b4d8:
        FUN_00d50b20();
      }
      lVar1 = g_027d6368;
      if (g_027d6368 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181b510;
LAB_0181b527:
        if (lVar1 != 0) goto LAB_0181b52c;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b510:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b527;
        }
LAB_0181b52c:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416e68,g_02390124,g_023b16a0);
      FUN_01819b10(g_02416e6c,g_02416e1c,g_023b8c38);
      FUN_01819b10(g_02416e0c,g_0240df04,g_023908e0);
      FUN_01819b10(g_02411424,g_02416e04,g_023908e8);
      FUN_01819b10(g_02416e18,g_023b81d4,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027c0ae8;
      if (g_027c0ae8 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181b663;
LAB_0181b678:
        if (lVar1 != 0) goto LAB_0181b67d;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b663:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b678;
        }
LAB_0181b67d:
        FUN_00d50b20();
      }
      lVar1 = g_027d6368;
      if (g_027d6368 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181b6b7;
LAB_0181b6ce:
        if (lVar1 != 0) goto LAB_0181b6d3;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b6b7:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b6ce;
        }
LAB_0181b6d3:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416e70,g_02390124,g_023b8c38);
      FUN_01819b10(g_02416e74,g_02416e28,g_023b5d7c);
      FUN_01819b10(g_02416de0,g_02416e60,g_023908e8);
      FUN_01819b10(g_02411424,g_02416e78,g_02423bc0);
      FUN_01819b10(g_02416e7c,g_02416e80,g_02416e38);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_02781628;
      if (g_02781628 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181b808;
LAB_0181b81c:
        if (lVar1 != 0) goto LAB_0181b821;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b808:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b81c;
        }
LAB_0181b821:
        FUN_00d50b20();
      }
      lVar1 = g_027d6368;
      if (g_027d6368 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181b859;
LAB_0181b870:
        if (lVar1 != 0) goto LAB_0181b875;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b859:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b870;
        }
LAB_0181b875:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02411fd0,g_02390124,g_02390438);
      FUN_01819b10(g_02416e84,g_02416e14,g_023b8c38);
      FUN_01819b10(g_02416e0c,g_02416df0,g_023908e0);
      FUN_01819b10(g_02411424,g_02391090,g_023908e8);
      FUN_01819b10(g_02416e18,g_02391090,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027cc920;
      if (g_027cc920 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181b9ac;
LAB_0181b9c1:
        if (lVar1 != 0) goto LAB_0181b9c6;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181b9ac:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181b9c1;
        }
LAB_0181b9c6:
        FUN_00d50b20();
      }
      lVar1 = g_027d6368;
      if (g_027d6368 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181ba00;
LAB_0181ba17:
        if (lVar1 != 0) goto LAB_0181ba1c;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181ba00:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181ba17;
        }
LAB_0181ba1c:
        FUN_00d50b20();
      }
      FUN_01819b10(g_023b5d78,g_02390124,g_023b16a0);
      FUN_01819b10(g_02416e88,g_02416e78,g_023b5d7c);
      FUN_01819b10(g_02416dc8,g_02416e78,g_023908e0);
      FUN_01819b10(g_02416e7c,g_02416db8,g_023908e8);
      FUN_01819b10(g_02416e8c,g_02416db8,g_023908e8);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027d6358;
      if (g_027d6358 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181bb51;
LAB_0181bb65:
        if (lVar1 != 0) goto LAB_0181bb6a;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181bb51:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181bb65;
        }
LAB_0181bb6a:
        FUN_00d50b20();
      }
      lVar1 = g_027d6370;
      if (g_027d6370 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181bba2;
LAB_0181bbb9:
        if (lVar1 != 0) goto LAB_0181bbbe;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181bba2:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181bbb9;
        }
LAB_0181bbbe:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416e90,g_02390124,g_02394240);
      FUN_01819b10(g_02411dec,g_02416de8,g_023941f0);
      FUN_01819b10(g_02416e94,g_02416df8,g_02416e98);
      FUN_01819b10(g_0240ce04,g_02394254,g_023b5d84);
      FUN_01819b10(g_02416e9c,g_02416ea0,g_02390d38);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027df420;
      if (g_027df420 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181bcf5;
LAB_0181bd0a:
        if (lVar1 != 0) goto LAB_0181bd0f;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181bcf5:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181bd0a;
        }
LAB_0181bd0f:
        FUN_00d50b20();
      }
      lVar1 = g_027d6370;
      if (g_027d6370 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181bd49;
LAB_0181bd60:
        if (lVar1 != 0) goto LAB_0181bd65;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181bd49:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181bd60;
        }
LAB_0181bd65:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416ea4,g_02390124,g_02390438);
      FUN_01819b10(g_0241b65c,g_02416dd8,g_023b8c38);
      FUN_01819b10(g_02416ea8,g_02416dfc,g_023908e0);
      FUN_01819b10(g_0240ce04,g_02416db0,g_02423bc0);
      FUN_01819b10(g_02416e9c,g_02416eac,g_02416eb0);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027c0ae8;
      if (g_027c0ae8 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181be9a;
LAB_0181beae:
        if (lVar1 != 0) goto LAB_0181beb3;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181be9a:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181beae;
        }
LAB_0181beb3:
        FUN_00d50b20();
      }
      lVar1 = g_027d6370;
      if (g_027d6370 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181beeb;
LAB_0181bf02:
        if (lVar1 != 0) goto LAB_0181bf07;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181beeb:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181bf02;
        }
LAB_0181bf07:
        FUN_00d50b20();
      }
      FUN_01819b10(g_0241b65c,g_02390124,g_023b8c38);
      FUN_01819b10(g_02416eb4,g_02416eb8,g_023b5d7c);
      FUN_01819b10(g_0240df00,g_02391090,g_023908e8);
      FUN_01819b10(g_0240ce04,g_02416db8,g_02423bc0);
      FUN_01819b10(g_02416e9c,g_0239425c,g_02416e38);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_02781628;
      if (g_02781628 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181c03e;
LAB_0181c053:
        if (lVar1 != 0) goto LAB_0181c058;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c03e:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c053;
        }
LAB_0181c058:
        FUN_00d50b20();
      }
      lVar1 = g_027d6370;
      if (g_027d6370 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181c092;
LAB_0181c0a9:
        if (lVar1 != 0) goto LAB_0181c0ae;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c092:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c0a9;
        }
LAB_0181c0ae:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02411264,g_02390124,g_023941f0);
      FUN_01819b10(g_02416ebc,g_02416e78,g_023b8c38);
      FUN_01819b10(g_02416e0c,g_02416df8,g_023908e8);
      FUN_01819b10(g_02416e18,g_02416ec0,g_0241d9d0);
      FUN_01819b10(g_02416e9c,g_0239425c,g_02390d38);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027cc920;
      if (g_027cc920 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181c1e3;
LAB_0181c1f7:
        if (lVar1 != 0) goto LAB_0181c1fc;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c1e3:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c1f7;
        }
LAB_0181c1fc:
        FUN_00d50b20();
      }
      lVar1 = g_027d6370;
      if (g_027d6370 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181c234;
LAB_0181c24b:
        if (lVar1 != 0) goto LAB_0181c250;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c234:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c24b;
        }
LAB_0181c250:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416ec4,g_02390124,g_02394240);
      FUN_01819b10(g_02416e3c,g_02391090,g_023908e0);
      FUN_01819b10(g_02416e0c,g_02416df8,g_023908e8);
      FUN_01819b10(g_02416ec8,g_02416db8,g_0241d9d0);
      FUN_01819b10(g_02416e9c,g_0239425c,g_02390d38);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027d6358;
      if (g_027d6358 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181c387;
LAB_0181c39c:
        if (lVar1 != 0) goto LAB_0181c3a1;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c387:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c39c;
        }
LAB_0181c3a1:
        FUN_00d50b20();
      }
      lVar1 = g_027d6378;
      if (g_027d6378 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181c3db;
LAB_0181c3f2:
        if (lVar1 != 0) goto LAB_0181c3f7;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c3db:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c3f2;
        }
LAB_0181c3f7:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416e90,g_02390124,g_02394240);
      FUN_01819b10(g_02411dec,g_02416dfc,g_023941f0);
      FUN_01819b10(g_02416e0c,g_02416ec0,g_02416e98);
      FUN_01819b10(g_02416ecc,g_02394254,g_023b5d84);
      FUN_01819b10(g_02416e9c,g_0239425c,g_02390d38);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027df420;
      if (g_027df420 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181c52c;
LAB_0181c540:
        if (lVar1 != 0) goto LAB_0181c545;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c52c:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c540;
        }
LAB_0181c545:
        FUN_00d50b20();
      }
      lVar1 = g_027d6378;
      if (g_027d6378 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181c57d;
LAB_0181c594:
        if (lVar1 != 0) goto LAB_0181c599;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c57d:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c594;
        }
LAB_0181c599:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416ea4,g_02390124,g_02390438);
      FUN_01819b10(g_0241b65c,g_02416dc0,g_023b8c38);
      FUN_01819b10(g_02416ea8,g_02416e04,g_023908e0);
      FUN_01819b10(g_02416ecc,g_02416e04,g_02423bc0);
      FUN_01819b10(g_02416e9c,g_02416ed0,g_02416eb0);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027c0ae8;
      if (g_027c0ae8 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181c6d0;
LAB_0181c6e5:
        if (lVar1 != 0) goto LAB_0181c6ea;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c6d0:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c6e5;
        }
LAB_0181c6ea:
        FUN_00d50b20();
      }
      lVar1 = g_027d6378;
      if (g_027d6378 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181c724;
LAB_0181c73b:
        if (lVar1 != 0) goto LAB_0181c740;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c724:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c73b;
        }
LAB_0181c740:
        FUN_00d50b20();
      }
      FUN_01819b10(g_0241b65c,g_02390124,g_023b8c38);
      FUN_01819b10(g_02416eb4,g_02416e28,g_023b5d7c);
      FUN_01819b10(g_02416dc8,g_02416da8,g_023908e8);
      FUN_01819b10(g_02416ed4,g_02391090,g_02423bc0);
      FUN_01819b10(g_02416e9c,g_02416ed0,g_02416e38);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_02781628;
      if (g_02781628 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181c875;
LAB_0181c889:
        if (lVar1 != 0) goto LAB_0181c88e;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c875:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c889;
        }
LAB_0181c88e:
        FUN_00d50b20();
      }
      lVar1 = g_027d6378;
      if (g_027d6378 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181c8c6;
LAB_0181c8dd:
        if (lVar1 != 0) goto LAB_0181c8e2;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181c8c6:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181c8dd;
        }
LAB_0181c8e2:
        FUN_00d50b20();
      }
      FUN_01819b10(g_02416ec4,g_02390124,g_023941f0);
      FUN_01819b10(g_023941ec,g_02391090,g_023908e0);
      FUN_01819b10(g_0240df00,g_02416e50,g_023908e8);
      FUN_01819b10(g_023941e4,g_02394254,g_0241d9d0);
      FUN_01819b10(g_02416e9c,g_02416ed8,g_02390d38);
      plVar3 = (int64_t *)FUN_00870e60();
      (**(code **)(*plVar3 + 0x18))();
      FUN_00d50b20();
      FUN_00d21140();
      lVar1 = g_027cc920;
      if (g_027cc920 == 0) {
        lVar4 = plVar3[4];
        if (lVar4 != 0) goto LAB_0181ca19;
LAB_0181ca2e:
        if (lVar1 != 0) goto LAB_0181ca33;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[4];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181ca19:
          plVar3[4] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181ca2e;
        }
LAB_0181ca33:
        FUN_00d50b20();
      }
      lVar1 = g_027d6378;
      if (g_027d6378 == 0) {
        lVar4 = plVar3[3];
        if (lVar4 != 0) goto LAB_0181ca6d;
LAB_0181ca84:
        if (lVar1 != 0) goto LAB_0181ca89;
      }
      else {
        FUN_00d50b00();
        lVar4 = plVar3[3];
        if (lVar4 != lVar1) {
          FUN_00d50b00();
LAB_0181ca6d:
          plVar3[3] = lVar1;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0181ca84;
        }
LAB_0181ca89:
        FUN_00d50b20();
      }
      FUN_01819b10(g_023b5d78,g_02390124,g_023941f0);
      FUN_01819b10(g_02416edc,g_02416de8,g_023b5d7c);
      FUN_01819b10(g_02416db4,g_0240df04,g_023908e0);
      FUN_01819b10(g_02416ed4,g_0240df04,g_023908e8);
      FUN_01819b10(g_02416e9c,g_02416ee0,g_023908e8);
      FUN_00d50b20();
      g_028af829 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028af829 = '\x01';
      FUN_00e8cb70();
    }
    puVar2 = g_028af820;
    *(void*)(this_ptr + 1) = 0;
    if (puVar2 == (void*)0x0) {
      puVar2 = (void*)0x0;
      goto LAB_0181cb6d;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_0181cb6d:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}


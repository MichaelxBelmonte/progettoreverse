// Reconstructed implementation of GNSoundFile
// From MikeCore binary — reverse-engineered pseudocode

#include "GNSoundFile.h"

// ============================================================
// @0010db00 — 3362 bytes
// str: ""GNSoundFile""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0010e1f5) */
/* WARNING: Removing unreachable block (ram,0x0010e201) */
/* WARNING: Removing unreachable block (ram,0x0010dd6a) */
/* WARNING: Removing unreachable block (ram,0x0010dda0) */
/* WARNING: Removing unreachable block (ram,0x0010dd6c) */
/* WARNING: Removing unreachable block (ram,0x0010dda2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0010db00(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong **pplVar9;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  int local_188;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined8 *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_68;
  char local_60 [8];
  undefined8 *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  local_88 = puVar6;
  uVar12 = (*DAT_02572370)();
  local_168 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_160 = '\x01';
  uVar12 = FUN_01cac990(uVar12,&local_168);
  plVar11 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (longlong *)0x0) && (uVar12 = FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar7 = DAT_027e92b0;
  if ((plVar11 == (longlong *)0x0) || (plVar10 = plVar11, *(int *)((longlong)plVar11 + 0xc) == 0)) {
    if (DAT_027e92b0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_158 = lVar7;
    local_150 = '\x01';
    FUN_01cac990(uVar12,&local_158);
    plVar10 = local_68;
    if (plVar11 == local_68) {
LAB_0010dc74:
      plVar10 = plVar11;
      if (local_60[0] != '\0') {
LAB_0010dc7a:
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_60[0] == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar11 = plVar10;
          goto LAB_0010dc74;
        }
        if (local_60[0] == '\0') goto LAB_0010dc88;
        goto LAB_0010dc7a;
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_60[0] = '\0';
    }
LAB_0010dc88:
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar10 == (longlong *)0x0) {
LAB_0010e812:
    *unaff_RDI = local_88;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    if (1 < *(int *)((longlong)plVar10 + 0xc)) {
      FUN_0010f160(0,FUN_0010f200);
      if (local_68 == plVar10) {
LAB_0010dd08:
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar10 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_0010dd08;
        }
        FUN_00d50b20();
      }
      if (plVar10 == (longlong *)0x0) goto LAB_0010e812;
    }
    local_188 = -1;
LAB_0010dd60:
    lVar7 = (longlong)local_188;
    local_188 = local_188 + 1;
    if (local_188 < *(int *)((longlong)plVar10 + 0xc)) {
      lVar7 = *(longlong *)(plVar10[2] + 8 + lVar7 * 8);
      uVar12 = FUN_01f27fe0();
      local_140 = '\0';
      local_148 = lVar7;
      FUN_002a0320(uVar12,&local_148);
      plVar11 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 == (longlong *)0x0) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_024c5080;
        uVar12 = FUN_00d500e0();
        local_80 = (longlong *)0xbff0000000000000;
        local_120 = '\0';
        local_128 = lVar7;
        cVar4 = FUN_00b70580(uVar12,&local_80);
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          bVar2 = true;
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)FUN_00e8fc40();
          FUN_00022d50();
          uVar12 = (**(code **)(*plVar8 + 0x18))();
          plVar1 = DAT_026d8408;
          local_110 = '\0';
          local_118 = lVar7;
          if (DAT_026d8408 != (longlong *)0x0) {
            uVar12 = FUN_00d50b00();
          }
          local_68 = plVar1;
          local_60[0] = '\0';
          FUN_00ca0840(uVar12,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          uVar12 = FUN_00d470c0((int)local_80);
          plVar3 = local_40;
          local_b0 = 0;
          plVar1 = DAT_026f6ee0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              uVar12 = FUN_00d50b00();
              plVar1 = DAT_026f6ee0;
            }
          }
          else {
            local_38 = '\0';
          }
          local_b0 = '\x01';
          local_b8 = plVar3;
          DAT_026f6ee0 = plVar1;
          if (plVar1 != (longlong *)0x0) {
            local_b0 = '\x01';
            uVar12 = FUN_00d50b00();
          }
          local_60[0] = '\0';
          local_68 = plVar1;
          FUN_00ca0840(uVar12,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_100 = '\0';
          local_108 = plVar8;
          FUN_00d21140();
          bVar2 = false;
          if ((local_100 != '\0') && (bVar2 = false, local_108 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar2 = false;
          }
        }
        FUN_00d50b20();
        if (plVar8 == (longlong *)0x0) {
          FUN_00d23310();
          plVar8 = local_68;
          local_80 = (longlong *)CONCAT71(local_80._1_7_,local_60[0]);
          pplVar9 = (longlong **)local_60;
          if (local_60[0] == '\0') {
            pplVar9 = &local_80;
          }
          *(char *)pplVar9 = '\0';
          if ((local_60[0] != '\0') && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar8 + 0x370))();
          plVar1 = local_40;
          FUN_014ffc90();
          plVar8 = local_68;
          local_a0 = 0;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60[0] = '\0';
          }
          local_a0 = '\x01';
          local_a8 = plVar8;
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_80 != '\0') {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            FUN_00d23310();
            plVar8 = local_68;
            local_80 = (longlong *)CONCAT71(local_80._1_7_,local_60[0]);
            pplVar9 = (longlong **)local_60;
            if (local_60[0] == '\0') {
              pplVar9 = &local_80;
            }
            *(char *)pplVar9 = '\0';
            if ((local_60[0] != '\0') && (plVar8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_90 = 0;
            if ((char)local_80 == '\0') {
              if (plVar8 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_80 = (longlong *)((ulonglong)local_80 & 0xffffffffffffff00);
            }
            local_90 = '\x01';
            local_98 = plVar8;
            FUN_01500300();
            plVar8 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar8 != (longlong *)0x0) {
              local_68 = plVar8;
              local_60[0] = '\0';
              cVar4 = FUN_00d23d70();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') {
                uVar12 = FUN_01f27fe0();
                local_f8 = plVar8;
                local_f0 = '\0';
                FUN_002a0320(uVar12,&local_f8);
                if (local_68 == (longlong *)0x0) {
LAB_0010e73e:
                  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_60[0] == '\0') {
                    plVar11 = local_68;
                    if (local_68 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    goto LAB_0010e73e;
                  }
                  local_60[0] = '\0';
                  plVar11 = local_68;
                }
                if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar11 == (longlong *)0x0) {
                  plVar11 = (longlong *)0x0;
                }
                else {
                  local_e0 = '\0';
                  local_e8 = plVar11;
                  FUN_00d21140();
                  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00d50b20();
            }
          }
        }
        else if (!bVar2) {
          FUN_00d50b20();
        }
      }
      else {
        iVar5 = FUN_00b88670();
        if (iVar5 == 1) {
          FUN_00b88600();
          plVar8 = local_80;
          local_38 = 0;
          if (local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_38 = '\x01';
          local_40 = plVar8;
          uVar12 = FUN_00b84ae0();
          plVar8 = local_68;
          if (local_60[0] == '\0') {
            if (((local_68 != (longlong *)0x0) && (uVar12 = FUN_00d50b00(), local_60[0] != '\0')) &&
               (local_68 != (longlong *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
          }
          else {
            local_60[0] = '\0';
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          local_60[0] = '\0';
          local_68 = (longlong *)0x0;
          local_58 = local_88;
          local_50 = 0xffffffff;
          local_48 = 0;
          iVar5 = 0;
          do {
            if (iVar5 != 0) {
              if (iVar5 < 1) {
                iVar5 = -iVar5;
              }
              else {
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar5);
                uVar12 = FUN_00d23690(uVar12,iVar5);
                local_48 = local_48 + iVar5;
                iVar5 = 0;
              }
              local_50 = CONCAT44(iVar5,(int)local_50);
            }
            lVar7 = (longlong)(int)local_50;
            iVar5 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar5);
            if (*(int *)((longlong)local_58 + 0xc) <= iVar5) {
              FUN_00114fb0();
              if (plVar8 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              break;
            }
            plVar1 = *(longlong **)(local_58[2] + 8 + lVar7 * 8);
            local_68 = plVar1;
            local_80 = plVar1;
            if ((DAT_026d8478 == '\0') &&
               (iVar5 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_01, iVar5 != 0)) {
              _DAT_026f9358 = FUN_00d4fe50();
              _DAT_026f9340 = "GNSoundFile";
              _DAT_026f9348 = 0x98;
              _DAT_026f9350 = FUN_00083bc0;
              _DAT_026f9360 = 0;
              uRam00000000026f9368 = 0;
              _DAT_026f9370 = 0;
              _DAT_026f93e8 = 0;
              uRam00000000026f93f0 = 0;
              _DAT_026f93f8 = 0;
              DAT_026f93fa = 3;
              _DAT_026f9378 = 0;
              uRam00000000026f9380 = 0;
              _DAT_026f9388 = 0;
              uRam00000000026f9390 = 0;
              _DAT_026f9398 = 0;
              uRam00000000026f93a0 = 0;
              _DAT_026f93a8 = 0;
              uRam00000000026f93b0 = 0;
              _DAT_026f93b8 = 0;
              uRam00000000026f93c0 = 0;
              _DAT_026f93c8 = 0;
              uRam00000000026f93d0 = 0;
              _DAT_026f93d8 = 0;
              uRam00000000026f93e0 = 0;
              DAT_026f9403 = 0;
              _DAT_026f93fb = 0;
              uVar12 = ___cxa_guard_release();
            }
            pplVar9 = (longlong **)&DAT_02802688;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar4 = FUN_00e85ea0();
              pplVar9 = &local_80;
              uVar12 = extraout_XMM0_Da;
              if (cVar4 == '\0') {
                pplVar9 = (longlong **)&DAT_02802688;
              }
            }
            if (*pplVar9 != (longlong *)0x0) {
              FUN_00b88600();
              local_c8 = local_d8;
              local_c0 = 0;
              if (local_d0 == '\0') {
                if (local_d8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_d0 = '\0';
              }
              local_c0 = '\x01';
              FUN_00b84ae0();
              cVar4 = (**(code **)(*local_80 + 0x50))();
              uVar12 = extraout_XMM0_Da_00;
              if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                uVar12 = FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                uVar12 = FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                uVar12 = FUN_00d50b20();
              }
              if (cVar4 != '\0') goto LAB_0010e37c;
            }
            iVar5 = local_50._4_4_;
          } while( true );
        }
        local_138 = plVar11;
        local_130 = '\0';
        FUN_00d21140();
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0010e7d0;
    }
    FUN_00115910();
    *unaff_RDI = local_88;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_0010e37c:
  FUN_00114fb0();
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0010e7d0:
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_0010dd60;
}




// ============================================================
// @00244b20 — 2266 bytes
// str: ""GNSoundFile""
// str: ""GNString""
// str: ""GNDictionary""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00244d7f) */
/* WARNING: Removing unreachable block (ram,0x00244d84) */
/* WARNING: Removing unreachable block (ram,0x00244e7f) */
/* WARNING: Removing unreachable block (ram,0x00244e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00244b20(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  double dVar14;
  undefined8 uVar15;
  float extraout_XMM0_Db;
  ulonglong uVar16;
  uint extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  double local_80;
  longlong *local_78;
  char local_70;
  longlong *local_58;
  bool local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar6 = FUN_00245720();
  if (cVar6 == '\0') goto LAB_00244c11;
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar10 = local_48;
  local_38[0] = local_40[0];
  pcVar9 = local_38;
  if (local_40[0] != '\0') {
    pcVar9 = local_40;
  }
  *pcVar9 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) {
    plVar10 = *(longlong **)(unaff_RDI + 0x90);
LAB_00244ba0:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_00244ba0;
  (**(code **)(*plVar10 + 0x988))();
  iVar8 = *(int *)((longlong)local_58 + 0xc);
  if (local_50 != false) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (iVar8 == 0) {
LAB_00244c11:
    local_98 = *unaff_RSI;
    local_90 = '\0';
    uVar7 = FUN_01e56d30();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    return uVar7;
  }
  pplVar11 = &local_58;
  FUN_01d384d0();
  local_78 = local_58;
  local_70 = 0;
  if (local_50 == false) {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = false;
  }
  local_70 = '\x01';
  FUN_0010f340();
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar1;
  cVar6 = FUN_0010f8e0();
  uVar7 = 0;
  if (cVar6 == '\0') goto LAB_0024517c;
  FUN_0010db00();
  plVar1 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  plVar10 = local_48;
  bVar12 = local_40[0] == '\0';
  local_58 = local_48;
  if (bVar12) {
    local_50 = false;
  }
  else {
    local_50 = true;
    local_40[0] = '\0';
  }
  local_50 = !bVar12;
  if ((DAT_026d8478 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_026f9358 = FUN_00d4fe50();
    _DAT_026f9340 = "GNSoundFile";
    _DAT_026f9348 = 0x98;
    _DAT_026f9350 = FUN_00083bc0;
    _DAT_026f9360 = 0;
    uRam00000000026f9368 = 0;
    _DAT_026f9370 = 0;
    _DAT_026f93e8 = 0;
    uRam00000000026f93f0 = 0;
    _DAT_026f93f8 = 0;
    DAT_026f93fa = 3;
    _DAT_026f9378 = 0;
    uRam00000000026f9380 = 0;
    _DAT_026f9388 = 0;
    uRam00000000026f9390 = 0;
    _DAT_026f9398 = 0;
    uRam00000000026f93a0 = 0;
    _DAT_026f93a8 = 0;
    uRam00000000026f93b0 = 0;
    _DAT_026f93b8 = 0;
    uRam00000000026f93c0 = 0;
    _DAT_026f93c8 = 0;
    uRam00000000026f93d0 = 0;
    _DAT_026f93d8 = 0;
    uRam00000000026f93e0 = 0;
    DAT_026f9403 = 0;
    _DAT_026f93fb = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (longlong *)0x0) {
LAB_00244dbe:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00244dbe;
  }
  plVar10 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) {
    uVar13 = FUN_00d23310();
    plVar2 = local_48;
    bVar12 = local_40[0] == '\0';
    local_58 = local_48;
    if (bVar12) {
      local_50 = false;
    }
    else {
      local_50 = true;
      local_40[0] = '\0';
    }
    local_50 = !bVar12;
    if ((DAT_026fdd40 == '\0') &&
       (iVar8 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_01, iVar8 != 0)) {
      _DAT_026cd0e8 = FUN_00d4fe50();
      DAT_026cd0d0 = "GNDictionary";
      _DAT_026cd0d8 = 0x28;
      _DAT_026cd0e0 = FUN_00022d20;
      _DAT_026cd0f0 = 0;
      uRam00000000026cd0f8 = 0;
      _DAT_026cd100 = 0;
      _DAT_026cd178 = 0;
      uRam00000000026cd180 = 0;
      _DAT_026cd188 = 0;
      DAT_026cd18a = 6;
      _DAT_026cd108 = 0;
      uRam00000000026cd110 = 0;
      _DAT_026cd118 = 0;
      uRam00000000026cd120 = 0;
      _DAT_026cd128 = 0;
      uRam00000000026cd130 = 0;
      _DAT_026cd138 = 0;
      uRam00000000026cd140 = 0;
      _DAT_026cd148 = 0;
      uRam00000000026cd150 = 0;
      _DAT_026cd158 = 0;
      uRam00000000026cd160 = 0;
      _DAT_026cd168 = 0;
      uRam00000000026cd170 = 0;
      DAT_026cd193 = 0;
      _DAT_026cd18b = 0;
      uVar13 = ___cxa_guard_release();
    }
    pplVar11 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar6 = FUN_00e85ea0();
      uVar13 = extraout_XMM0_Da;
      if (cVar6 != '\0') {
        if ((DAT_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
        cVar6 = FUN_00e8db60();
        uVar13 = extraout_XMM0_Da_00;
        if (cVar6 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
        else {
          pplVar11 = &local_58;
        }
      }
    }
    plVar2 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar2 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar11 + 1) = 0;
    }
    if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    lVar4 = DAT_026f6ee0;
    if (DAT_026f6ee0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_a8 = lVar4;
    local_a0 = '\x01';
    FUN_000175c0(uVar13,&local_a8);
    plVar5 = local_48;
    FUN_00053ac0();
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      FUN_00e85ea0();
    }
    local_80 = (double)FUN_00d45bc0();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((0 < *(int *)((longlong)plVar1 + 0xc)) && (0.0 < local_80)) goto LAB_0024500d;
  }
  else {
    local_80 = (double)FUN_00b7a6e0();
    if ((0 < *(int *)((longlong)plVar1 + 0xc)) && (0.0 < local_80)) {
LAB_0024500d:
      fVar21 = 0.0;
      dVar14 = local_80;
      FUN_01d384c0();
      fVar29 = (float)((ulonglong)dVar14 >> 0x20);
      dVar14 = (double)FUN_00244970();
      uVar15 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 3000))();
      FUN_01e436c0();
      uVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x938))(SUB84(dVar14,0));
      uVar16 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x938))(SUB84(local_80 + dVar14,0));
      fVar22 = (float)uVar15 * DAT_02394dc4;
      auVar26._0_4_ = _DAT_023945e0 & (uint)fVar22;
      auVar26._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar15 >> 0x20);
      auVar26._8_4_ = _UNK_023945e8 & extraout_XMM0_Dc;
      auVar26._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
      auVar27._4_4_ = _UNK_023945f4;
      auVar27._0_4_ = _DAT_023945f0;
      auVar27._8_4_ = _UNK_023945f8;
      auVar27._12_4_ = _UNK_023945fc;
      auVar17._4_12_ = SUB1612(auVar26 | auVar27,4);
      auVar17._0_4_ = SUB164(auVar26 | auVar27,0) + fVar22;
      auVar26 = roundss(in_XMM3,auVar17,0xb);
      fVar29 = fVar29 + extraout_XMM0_Db;
      auVar23._4_4_ = fVar29;
      auVar23._0_4_ = fVar29;
      auVar23._8_4_ = fVar21 + extraout_XMM0_Dd_00;
      auVar23._12_4_ = fVar21 + extraout_XMM0_Dd_00;
      auVar24._4_12_ = auVar23._4_12_;
      auVar24._0_4_ =
           (((fVar29 + DAT_02390d00) - extraout_XMM0_Db) - auVar26._0_4_) * DAT_0239011c +
           extraout_XMM0_Db;
      auVar25._8_4_ = extraout_XMM0_Dc_00;
      auVar25._0_8_ = uVar3;
      auVar25._12_4_ = extraout_XMM0_Dd_01;
      auVar27 = insertps(auVar25,auVar24,0x10);
      auVar18._0_4_ = (float)(_DAT_023945e0 & (uint)auVar27._0_4_ | _DAT_023945f0) + auVar27._0_4_;
      auVar18._4_4_ = (float)(_UNK_023945e4 & (uint)auVar27._4_4_ | _UNK_023945f4) + auVar27._4_4_;
      auVar18._8_4_ = (float)(_UNK_023945e8 & (uint)auVar27._8_4_ | _UNK_023945f8) + auVar27._8_4_;
      auVar18._12_4_ =
           (float)(_UNK_023945ec & (uint)auVar27._12_4_ | _UNK_023945fc) + auVar27._12_4_;
      auVar25 = roundps(auVar24,auVar18,0xb);
      auVar28._0_8_ = DAT_02394dc8 & _DAT_02390140;
      auVar28._8_8_ = 0;
      auVar19._0_8_ = ~_DAT_02390140 & uVar16;
      auVar19._8_8_ = ~_UNK_02390148 & CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_01);
      auVar20._4_12_ = SUB1612(auVar19 | auVar28,4);
      auVar20._0_4_ = SUB164(auVar19 | auVar28,0) + (float)uVar16;
      auVar27 = roundss(auVar20,auVar20,0xb);
      auVar27 = insertps(auVar27,auVar26,0x10);
      (**(code **)((longlong)&dylib_command_00001348.cmd + **(longlong **)(unaff_RDI + 0x90)))
                (auVar25._0_4_,auVar27._0_8_);
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar7 = 1;
      FUN_00d50b20();
      goto LAB_0024517c;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0024517c:
  if (local_88 == (longlong *)0x0) {
    return uVar7;
  }
  FUN_00d50b20();
  return uVar7;
}




// ============================================================
// @007b0440 — 1992 bytes
// str: ""GNSoundFile""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b0440(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02540e88;
  FUN_007b0d60();
  FUN_007b1080();
  *(undefined1 *)(unaff_RDI + 4) = 0;
  if (DAT_026d8478 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f9358 = FUN_00d4fe50();
      _DAT_026f9340 = "GNSoundFile";
      _DAT_026f9348 = 0x98;
      _DAT_026f9350 = FUN_00083bc0;
      _DAT_026f9360 = 0;
      uRam00000000026f9368 = 0;
      _DAT_026f9370 = 0;
      _DAT_026f93e8 = 0;
      uRam00000000026f93f0 = 0;
      _DAT_026f93f8 = 0;
      DAT_026f93fa = 3;
      _DAT_026f9378 = 0;
      uRam00000000026f9380 = 0;
      _DAT_026f9388 = 0;
      uRam00000000026f9390 = 0;
      _DAT_026f9398 = 0;
      uRam00000000026f93a0 = 0;
      _DAT_026f93a8 = 0;
      uRam00000000026f93b0 = 0;
      _DAT_026f93b8 = 0;
      uRam00000000026f93c0 = 0;
      _DAT_026f93c8 = 0;
      uRam00000000026f93d0 = 0;
      _DAT_026f93d8 = 0;
      uRam00000000026f93e0 = 0;
      DAT_026f9403 = 0;
      _DAT_026f93fb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f93fb == '\0') {
    FUN_007b13a0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_026d8478 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f9358 = FUN_00d4fe50();
      _DAT_026f9340 = "GNSoundFile";
      _DAT_026f9348 = 0x98;
      _DAT_026f9350 = FUN_00083bc0;
      _DAT_026f9360 = 0;
      uRam00000000026f9368 = 0;
      _DAT_026f9370 = 0;
      _DAT_026f93e8 = 0;
      uRam00000000026f93f0 = 0;
      _DAT_026f93f8 = 0;
      DAT_026f93fa = 3;
      _DAT_026f9378 = 0;
      uRam00000000026f9380 = 0;
      _DAT_026f9388 = 0;
      uRam00000000026f9390 = 0;
      _DAT_026f9398 = 0;
      uRam00000000026f93a0 = 0;
      _DAT_026f93a8 = 0;
      uRam00000000026f93b0 = 0;
      _DAT_026f93b8 = 0;
      uRam00000000026f93c0 = 0;
      _DAT_026f93c8 = 0;
      uRam00000000026f93d0 = 0;
      _DAT_026f93d8 = 0;
      uRam00000000026f93e0 = 0;
      DAT_026f9403 = 0;
      _DAT_026f93fb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f93fb == '\0') {
    FUN_007b1530();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 5) = 0;
  if (DAT_026d8478 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f9358 = FUN_00d4fe50();
      _DAT_026f9340 = "GNSoundFile";
      _DAT_026f9348 = 0x98;
      _DAT_026f9350 = FUN_00083bc0;
      _DAT_026f9360 = 0;
      uRam00000000026f9368 = 0;
      _DAT_026f9370 = 0;
      _DAT_026f93e8 = 0;
      uRam00000000026f93f0 = 0;
      _DAT_026f93f8 = 0;
      DAT_026f93fa = 3;
      _DAT_026f9378 = 0;
      uRam00000000026f9380 = 0;
      _DAT_026f9388 = 0;
      uRam00000000026f9390 = 0;
      _DAT_026f9398 = 0;
      uRam00000000026f93a0 = 0;
      _DAT_026f93a8 = 0;
      uRam00000000026f93b0 = 0;
      _DAT_026f93b8 = 0;
      uRam00000000026f93c0 = 0;
      _DAT_026f93c8 = 0;
      uRam00000000026f93d0 = 0;
      _DAT_026f93d8 = 0;
      uRam00000000026f93e0 = 0;
      DAT_026f9403 = 0;
      _DAT_026f93fb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f93fb == '\0') {
    FUN_007b17b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = 0;
  if (DAT_026d8478 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f9358 = FUN_00d4fe50();
      _DAT_026f9340 = "GNSoundFile";
      _DAT_026f9348 = 0x98;
      _DAT_026f9350 = FUN_00083bc0;
      _DAT_026f9360 = 0;
      uRam00000000026f9368 = 0;
      _DAT_026f9370 = 0;
      _DAT_026f93e8 = 0;
      uRam00000000026f93f0 = 0;
      _DAT_026f93f8 = 0;
      DAT_026f93fa = 3;
      _DAT_026f9378 = 0;
      uRam00000000026f9380 = 0;
      _DAT_026f9388 = 0;
      uRam00000000026f9390 = 0;
      _DAT_026f9398 = 0;
      uRam00000000026f93a0 = 0;
      _DAT_026f93a8 = 0;
      uRam00000000026f93b0 = 0;
      _DAT_026f93b8 = 0;
      uRam00000000026f93c0 = 0;
      _DAT_026f93c8 = 0;
      uRam00000000026f93d0 = 0;
      _DAT_026f93d8 = 0;
      uRam00000000026f93e0 = 0;
      DAT_026f9403 = 0;
      _DAT_026f93fb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f93fb == '\0') {
    FUN_007b1940();
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  if (DAT_026d8478 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f9358 = FUN_00d4fe50();
      _DAT_026f9340 = "GNSoundFile";
      _DAT_026f9348 = 0x98;
      _DAT_026f9350 = FUN_00083bc0;
      _DAT_026f9360 = 0;
      uRam00000000026f9368 = 0;
      _DAT_026f9370 = 0;
      _DAT_026f93e8 = 0;
      uRam00000000026f93f0 = 0;
      _DAT_026f93f8 = 0;
      DAT_026f93fa = 3;
      _DAT_026f9378 = 0;
      uRam00000000026f9380 = 0;
      _DAT_026f9388 = 0;
      uRam00000000026f9390 = 0;
      _DAT_026f9398 = 0;
      uRam00000000026f93a0 = 0;
      _DAT_026f93a8 = 0;
      uRam00000000026f93b0 = 0;
      _DAT_026f93b8 = 0;
      uRam00000000026f93c0 = 0;
      _DAT_026f93c8 = 0;
      uRam00000000026f93d0 = 0;
      _DAT_026f93d8 = 0;
      uRam00000000026f93e0 = 0;
      DAT_026f9403 = 0;
      _DAT_026f93fb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f93fb == '\0') {
    FUN_007b1d70();
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  if (DAT_026d8478 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f9358 = FUN_00d4fe50();
      _DAT_026f9340 = "GNSoundFile";
      _DAT_026f9348 = 0x98;
      _DAT_026f9350 = FUN_00083bc0;
      _DAT_026f9360 = 0;
      uRam00000000026f9368 = 0;
      _DAT_026f9370 = 0;
      _DAT_026f93e8 = 0;
      uRam00000000026f93f0 = 0;
      _DAT_026f93f8 = 0;
      DAT_026f93fa = 3;
      _DAT_026f9378 = 0;
      uRam00000000026f9380 = 0;
      _DAT_026f9388 = 0;
      uRam00000000026f9390 = 0;
      _DAT_026f9398 = 0;
      uRam00000000026f93a0 = 0;
      _DAT_026f93a8 = 0;
      uRam00000000026f93b0 = 0;
      _DAT_026f93b8 = 0;
      uRam00000000026f93c0 = 0;
      _DAT_026f93c8 = 0;
      uRam00000000026f93d0 = 0;
      _DAT_026f93d8 = 0;
      uRam00000000026f93e0 = 0;
      DAT_026f9403 = 0;
      _DAT_026f93fb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f93fb == '\0') {
    FUN_007b1f00();
    FUN_00e87980();
  }
  FUN_007b2090();
  FUN_007b2350();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  if (DAT_026d8478 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f9358 = FUN_00d4fe50();
      _DAT_026f9340 = "GNSoundFile";
      _DAT_026f9348 = 0x98;
      _DAT_026f9350 = FUN_00083bc0;
      _DAT_026f9360 = 0;
      uRam00000000026f9368 = 0;
      _DAT_026f9370 = 0;
      _DAT_026f93e8 = 0;
      uRam00000000026f93f0 = 0;
      _DAT_026f93f8 = 0;
      DAT_026f93fa = 3;
      _DAT_026f9378 = 0;
      uRam00000000026f9380 = 0;
      _DAT_026f9388 = 0;
      uRam00000000026f9390 = 0;
      _DAT_026f9398 = 0;
      uRam00000000026f93a0 = 0;
      _DAT_026f93a8 = 0;
      uRam00000000026f93b0 = 0;
      _DAT_026f93b8 = 0;
      uRam00000000026f93c0 = 0;
      _DAT_026f93c8 = 0;
      uRam00000000026f93d0 = 0;
      _DAT_026f93d8 = 0;
      uRam00000000026f93e0 = 0;
      DAT_026f9403 = 0;
      _DAT_026f93fb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f93fb == '\0') {
    FUN_007b2680();
    FUN_00e87980();
  }
  FUN_007b28d0();
  FUN_007b2c00();
  FUN_007b2ec0();
  FUN_007b31f0();
  FUN_007b3520();
  FUN_007b3850();
  FUN_007b3b80();
  FUN_007b3eb0();
  return;
}




// ============================================================
// @002457d0 — 1706 bytes
// str: ""GNSoundFile""
// str: ""GNString""
// str: ""GNDictionary""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00245950) */
/* WARNING: Removing unreachable block (ram,0x00245955) */
/* WARNING: Removing unreachable block (ram,0x00245a4e) */
/* WARNING: Removing unreachable block (ram,0x00245a53) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_002457d0(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong *plVar6;
  longlong **pplVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong *plVar10;
  undefined8 extraout_XMM0_Qa_01;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  bool local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = FUN_00245720();
  if (cVar2 == '\0') {
    uVar5 = 0;
    goto LAB_00245c0e;
  }
  pplVar7 = &local_50;
  FUN_01d384d0();
  local_78 = local_50;
  local_70 = 0;
  if (local_48 == false) {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = false;
  }
  local_70 = '\x01';
  FUN_0010f340();
  local_60 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_0010f8e0();
  if (cVar2 == '\0') {
LAB_00245bd2:
    local_88 = *unaff_RSI;
    local_80 = '\0';
    uVar3 = FUN_01e56e20();
    uVar5 = (ulonglong)uVar3;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_0010db00();
    local_58 = local_40;
    plVar6 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (FUN_00d50b00(), plVar6 = local_58, local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)((longlong)plVar6 + 0xc) == 0) {
LAB_00245bca:
      FUN_00d50b20();
      goto LAB_00245bd2;
    }
    FUN_00d23310();
    plVar6 = local_40;
    bVar8 = local_38 == '\0';
    local_50 = local_40;
    if (bVar8) {
      local_48 = false;
    }
    else {
      local_48 = true;
      local_38 = '\0';
    }
    local_48 = !bVar8;
    if ((DAT_026d8478 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026f9358 = FUN_00d4fe50();
      _DAT_026f9340 = "GNSoundFile";
      _DAT_026f9348 = 0x98;
      _DAT_026f9350 = FUN_00083bc0;
      _DAT_026f9360 = 0;
      uRam00000000026f9368 = 0;
      _DAT_026f9370 = 0;
      _DAT_026f93e8 = 0;
      uRam00000000026f93f0 = 0;
      _DAT_026f93f8 = 0;
      DAT_026f93fa = 3;
      _DAT_026f9378 = 0;
      uRam00000000026f9380 = 0;
      _DAT_026f9388 = 0;
      uRam00000000026f9390 = 0;
      _DAT_026f9398 = 0;
      uRam00000000026f93a0 = 0;
      _DAT_026f93a8 = 0;
      uRam00000000026f93b0 = 0;
      _DAT_026f93b8 = 0;
      uRam00000000026f93c0 = 0;
      _DAT_026f93c8 = 0;
      uRam00000000026f93d0 = 0;
      _DAT_026f93d8 = 0;
      uRam00000000026f93e0 = 0;
      DAT_026f9403 = 0;
      _DAT_026f93fb = 0;
      ___cxa_guard_release();
    }
    if (plVar6 == (longlong *)0x0) {
LAB_0024598f:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0024598f;
    }
    plVar6 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
      uVar9 = FUN_00d23310();
      plVar6 = local_40;
      bVar8 = local_38 == '\0';
      local_50 = local_40;
      if (bVar8) {
        local_48 = false;
      }
      else {
        local_48 = true;
        local_38 = '\0';
      }
      local_48 = !bVar8;
      if ((DAT_026fdd40 == '\0') &&
         (iVar4 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Qa_01, iVar4 != 0)) {
        _DAT_026cd0e8 = FUN_00d4fe50();
        DAT_026cd0d0 = "GNDictionary";
        _DAT_026cd0d8 = 0x28;
        _DAT_026cd0e0 = FUN_00022d20;
        _DAT_026cd0f0 = 0;
        uRam00000000026cd0f8 = 0;
        _DAT_026cd100 = 0;
        _DAT_026cd178 = 0;
        uRam00000000026cd180 = 0;
        _DAT_026cd188 = 0;
        DAT_026cd18a = 6;
        _DAT_026cd108 = 0;
        uRam00000000026cd110 = 0;
        _DAT_026cd118 = 0;
        uRam00000000026cd120 = 0;
        _DAT_026cd128 = 0;
        uRam00000000026cd130 = 0;
        _DAT_026cd138 = 0;
        uRam00000000026cd140 = 0;
        _DAT_026cd148 = 0;
        uRam00000000026cd150 = 0;
        _DAT_026cd158 = 0;
        uRam00000000026cd160 = 0;
        _DAT_026cd168 = 0;
        uRam00000000026cd170 = 0;
        DAT_026cd193 = 0;
        _DAT_026cd18b = 0;
        uVar9 = ___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar9 = extraout_XMM0_Qa;
        if (cVar2 != '\0') {
          if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            _DAT_026d5e58 = FUN_00d4fe50();
            DAT_026d5e40 = "GNString";
            _DAT_026d5e48 = 0x40;
            _DAT_026d5e50 = FUN_0005d920;
            _DAT_026d5e60 = 0;
            uRam00000000026d5e68 = 0;
            _DAT_026d5e70 = 0;
            uRam00000000026d5e78 = 0;
            _DAT_026d5e80 = 0;
            uRam00000000026d5e88 = 0;
            _DAT_026d5e90 = 0;
            uRam00000000026d5e98 = 0;
            _DAT_026d5ea0 = 0;
            uRam00000000026d5ea8 = 0;
            _DAT_026d5eb0 = 0;
            uRam00000000026d5eb8 = 0;
            _DAT_026d5ec0 = 0;
            uRam00000000026d5ec8 = 0;
            _DAT_026d5ed0 = 0;
            uRam00000000026d5ed8 = 0;
            _DAT_026d5ee0 = 0;
            uRam00000000026d5ee8 = 0;
            _DAT_026d5ef0 = 0;
            uRam00000000026d5ef8 = 0;
            _DAT_026d5f00 = 0;
            ___cxa_guard_release();
          }
          cVar2 = FUN_00e8db60();
          uVar9 = extraout_XMM0_Qa_00;
          if (cVar2 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
          else {
            pplVar7 = &local_50;
          }
        }
      }
      plVar6 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar6 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar7 + 1) = 0;
      }
      if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      lVar1 = DAT_026f6ee0;
      local_68 = plVar6;
      if (DAT_026f6ee0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      FUN_000175c0(uVar9,&local_98);
      plVar6 = local_40;
      FUN_00053ac0();
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x360))();
        FUN_00e85ea0();
      }
      plVar10 = (longlong *)FUN_00d45bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar6 = local_68;
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = (longlong *)FUN_00b7a6e0();
      FUN_00d50b20();
      plVar10 = local_68;
    }
    if ((double)plVar10 <= 0.0) goto LAB_00245bca;
    uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    FUN_00d50b20();
  }
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00245c0e:
  return uVar5 & 0xffffffff;
}




// ============================================================
// @0010f8e0 — 1627 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0010fdf7) */
/* WARNING: Removing unreachable block (ram,0x0010fe03) */

ulonglong FUN_0010f8e0(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    FUN_00d50b00();
  }
  FUN_01cac990();
  plVar5 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027e92b0;
  if ((plVar5 == (longlong *)0x0) || (plVar7 = plVar5, *(int *)((longlong)plVar5 + 0xc) == 0)) {
    if (DAT_027e92b0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cac990();
    plVar7 = local_48;
    if (plVar5 == local_48) {
LAB_0010fa20:
      plVar7 = plVar5;
      if (local_40[0] != '\0') {
LAB_0010fa26:
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar5 = plVar7;
          goto LAB_0010fa20;
        }
        if (local_40[0] == '\0') goto LAB_0010fa34;
        goto LAB_0010fa26;
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
    }
LAB_0010fa34:
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar7 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_0010ff27;
  }
  if (*(int *)((longlong)plVar7 + 0xc) < 1) {
LAB_0010ff1d:
    uVar6 = 0;
  }
  else {
    FUN_01f27fe0();
    FUN_00d23310();
    plVar5 = local_48;
    local_38[0] = local_40[0];
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_88 = 0;
    if (local_38[0] == '\0') {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_88 = '\x01';
    local_90 = plVar5;
    FUN_002a0320();
    plVar5 = (longlong *)CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (((plVar5 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      local_60 = plVar5;
      FUN_00d23310();
      plVar5 = local_48;
      local_a0 = local_40[0];
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = &local_a0;
      }
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x370))();
      plVar5 = (longlong *)CONCAT71(uStack_57,local_58);
      FUN_014ffc90();
      local_80 = local_48;
      local_78 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_78 = '\x01';
      cVar2 = (**(code **)(*plVar5 + 0x50))();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (local_a0 != '\0') {
        FUN_00d50b20();
      }
      plVar5 = local_60;
      if (cVar2 == '\0') {
LAB_0010fe3f:
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_024c5080;
        FUN_00d500e0();
        FUN_00d23310();
        pcVar3 = local_40;
        if (local_40[0] == '\0') {
          pcVar3 = &local_58;
        }
        local_58 = local_40[0];
        *pcVar3 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 == '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00b70580();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto joined_r0x0010ff0c;
      }
      FUN_00d23310();
      plVar7 = local_48;
      pcVar3 = &local_a0;
      if (local_40[0] != '\0') {
        pcVar3 = local_40;
      }
      local_a0 = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_68 = 0;
      if (local_a0 == '\0') {
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_68 = '\x01';
      local_70 = plVar7;
      FUN_01500300();
      plVar7 = (longlong *)CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (((plVar7 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) goto LAB_0010fe3f;
      local_40[0] = '\0';
      local_48 = plVar7;
      cVar2 = FUN_00d23d70();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
LAB_0010fe37:
        FUN_00d50b20();
        goto LAB_0010fe3f;
      }
      FUN_01f27fe0();
      FUN_002a0320();
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_0010fe37;
      }
      cVar2 = '\x01';
      FUN_00d50b20();
LAB_0010ff0e:
      FUN_00d50b20();
    }
    else {
      cVar2 = '\x01';
joined_r0x0010ff0c:
      if (plVar5 != (longlong *)0x0) goto LAB_0010ff0e;
    }
    uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    if (cVar2 == '\0') goto LAB_0010ff1d;
  }
  FUN_00d50b20();
LAB_0010ff27:
  return uVar6 & 0xffffffff;
}




// ============================================================
// @007b1940 — 1030 bytes
// str: ""GNSoundFile""
// str: ""GNAudioSampleFormat""
// str: ""_sampleFormat""
// str: ""=GNAudioInvalidSampleFormat""
// str: ""=GNAudioPCM16IntMSB""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_007b1940(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (DAT_026e3100 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026e3080 = -(uint)(*DAT_026e2f80 == '=');
      uVar3 = (uint)(*DAT_026e2f80 != '=');
      DAT_026e3084 = 0;
      if (*DAT_026e2f88 != '=') {
        DAT_026e3084 = uVar3;
      }
      iVar2 = DAT_026e3084 + 1;
      DAT_026e3088 = 1;
      if (*DAT_026e2f90 != '=') {
        DAT_026e3088 = iVar2;
      }
      iVar6 = DAT_026e3088 + 1;
      DAT_026e308c = 2;
      if (*DAT_026e2f98 != '=') {
        DAT_026e308c = iVar6;
      }
      iVar8 = DAT_026e308c + 1;
      DAT_026e3090 = 3;
      if (*DAT_026e2fa0 != '=') {
        DAT_026e3090 = iVar8;
      }
      iVar7 = DAT_026e3090 + 1;
      DAT_026e3094 = 4;
      if (*DAT_026e2fa8 != '=') {
        DAT_026e3094 = iVar7;
      }
      iVar5 = DAT_026e3094 + 1;
      DAT_026e3098 = 8;
      if (*DAT_026e2fb0 != '=') {
        DAT_026e3098 = iVar5;
      }
      iVar4 = DAT_026e3098 + 1;
      bVar1 = FUN_00136020(9,iVar4,10,0xb,0x14,0x18,0x19,0x1a,0x1b,0x40,0x41,0x42,0x43,0x44,0x45);
      DAT_026e30f8 = DAT_026e3084 == uVar3 &
                     (DAT_026e3088 == iVar2 &&
                     (DAT_026e308c == iVar6 &&
                     (DAT_026e3090 == iVar8 && (DAT_026e3094 == iVar7 && DAT_026e3098 == iVar5)))) &
                     bVar1 & DAT_026e309c == iVar4;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e3138 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026e3108 = "GNAudioSampleFormat";
      _DAT_026e3110 = 0x1e;
      DAT_026e3114 = DAT_026e30f8;
      _DAT_026e3118 = &DAT_026e3080;
      _DAT_026e3120 = &DAT_026e2f80;
      _DAT_026e3128 = 0;
      uRam00000000026e3130 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0272b828 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_026d8478 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026f9358 = FUN_00d4fe50();
          _DAT_026f9340 = "GNSoundFile";
          _DAT_026f9348 = 0x98;
          _DAT_026f9350 = FUN_00083bc0;
          _DAT_026f9360 = 0;
          uRam00000000026f9368 = 0;
          _DAT_026f9370 = 0;
          _DAT_026f93e8 = 0;
          uRam00000000026f93f0 = 0;
          _DAT_026f93f8 = 0;
          DAT_026f93fa = 3;
          _DAT_026f9378 = 0;
          uRam00000000026f9380 = 0;
          _DAT_026f9388 = 0;
          uRam00000000026f9390 = 0;
          _DAT_026f9398 = 0;
          uRam00000000026f93a0 = 0;
          _DAT_026f93a8 = 0;
          uRam00000000026f93b0 = 0;
          _DAT_026f93b8 = 0;
          uRam00000000026f93c0 = 0;
          _DAT_026f93c8 = 0;
          uRam00000000026f93d0 = 0;
          _DAT_026f93d8 = 0;
          uRam00000000026f93e0 = 0;
          DAT_026f9403 = 0;
          _DAT_026f93fb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0272b7e8 = "_sampleFormat";
      _DAT_0272b7f0 = &DAT_026f9340;
      _DAT_0272b7f8 = 0;
      _DAT_0272b800 = 0x6500;
      _DAT_0272b808 = "GNAudioSampleFormat";
      _DAT_0272b810 = &DAT_026e3108;
      _DAT_0272b818 = 0;
      uRam000000000272b820 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0272b7e8;
}




// ============================================================
// @0010f410 — 758 bytes
// ============================================================

void FUN_0010f410(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  char *pcVar4;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    FUN_00d50b00();
  }
  FUN_01cac990();
  plVar2 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027e92b0;
  if ((plVar2 == (longlong *)0x0) || (plVar5 = plVar2, *(int *)((longlong)plVar2 + 0xc) == 0)) {
    if (DAT_027e92b0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cac990();
    plVar5 = local_48;
    if (plVar2 == local_48) {
LAB_0010f538:
      plVar5 = plVar2;
      if (local_40[0] != '\0') {
LAB_0010f53e:
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar2 = plVar5;
          goto LAB_0010f538;
        }
        if (local_40[0] == '\0') goto LAB_0010f54c;
        goto LAB_0010f53e;
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
    }
LAB_0010f54c:
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar5 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if (0 < *(int *)((longlong)plVar5 + 0xc)) {
    FUN_00d23310();
    plVar2 = local_48;
    local_38[0] = local_40[0];
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar2 + 0x370))();
    plVar2 = (longlong *)CONCAT71(uStack_67,local_68);
    FUN_017a52b0();
    local_58 = local_48;
    local_50 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_50 = '\x01';
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d23310();
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = &local_68;
      }
      local_68 = local_40[0];
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((local_68 == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto LAB_0010f6da;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_0010f6da:
  FUN_00d50b20();
  return;
}




// ============================================================
// @007b1530 — 599 bytes
// str: ""GNSoundFile""
// str: ""GNSoundFileFormat""
// str: ""_format""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_007b1530(void)

{
  int iVar1;
  
  if (DAT_026e1e00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e1dd0 = _DAT_0238fcc0;
      uRam00000000026e1dd8 = _UNK_0238fcc8;
      _DAT_026e1de0 = _DAT_0238ff10;
      uRam00000000026e1de4 = _UNK_0238ff14;
      uRam00000000026e1de8 = _UNK_0238ff18;
      uRam00000000026e1dec = _UNK_0238ff1c;
      _DAT_026e1df0 = 0x900000008;
      _DAT_026e1df8 = 10;
      DAT_026e1dfc = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e1e38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e1e08 = "GNSoundFileFormat";
      _DAT_026e1e10 = 0xb;
      DAT_026e1e14 = DAT_026e1dfc;
      _DAT_026e1e18 = &DAT_026e1dd0;
      _DAT_026e1e20 = &DAT_026e1d70;
      _DAT_026e1e28 = 0;
      uRam00000000026e1e30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0272b798 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8478 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f9358 = FUN_00d4fe50();
          _DAT_026f9340 = "GNSoundFile";
          _DAT_026f9348 = 0x98;
          _DAT_026f9350 = FUN_00083bc0;
          _DAT_026f9360 = 0;
          uRam00000000026f9368 = 0;
          _DAT_026f9370 = 0;
          _DAT_026f93e8 = 0;
          uRam00000000026f93f0 = 0;
          _DAT_026f93f8 = 0;
          DAT_026f93fa = 3;
          _DAT_026f9378 = 0;
          uRam00000000026f9380 = 0;
          _DAT_026f9388 = 0;
          uRam00000000026f9390 = 0;
          _DAT_026f9398 = 0;
          uRam00000000026f93a0 = 0;
          _DAT_026f93a8 = 0;
          uRam00000000026f93b0 = 0;
          _DAT_026f93b8 = 0;
          uRam00000000026f93c0 = 0;
          _DAT_026f93c8 = 0;
          uRam00000000026f93d0 = 0;
          _DAT_026f93d8 = 0;
          uRam00000000026f93e0 = 0;
          DAT_026f9403 = 0;
          _DAT_026f93fb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0272b758 = "_format";
      _DAT_0272b760 = &DAT_026f9340;
      _DAT_0272b768 = 0;
      _DAT_0272b770 = 0x6500;
      _DAT_0272b778 = "GNSoundFileFormat";
      _DAT_0272b780 = &DAT_026e1e08;
      _DAT_0272b788 = 0;
      uRam000000000272b790 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0272b758;
}




// ============================================================
// @007b2680 — 550 bytes
// str: ""GNSoundFile""
// str: ""GNSoundFileLayout""
// str: ""_fileLayout""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_007b2680(void)

{
  int iVar1;
  
  if (DAT_0272b9c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272b9b8 = 0x100000000;
      DAT_0272b9c0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272ba00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272b9d0 = "GNSoundFileLayout";
      _DAT_0272b9d8 = 2;
      DAT_0272b9dc = DAT_0272b9c0;
      _DAT_0272b9e0 = &DAT_0272b9b8;
      _DAT_0272b9e8 = &DAT_0272b9a0;
      _DAT_0272b9f0 = 0;
      uRam000000000272b9f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0272b990 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8478 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f9358 = FUN_00d4fe50();
          _DAT_026f9340 = "GNSoundFile";
          _DAT_026f9348 = 0x98;
          _DAT_026f9350 = FUN_00083bc0;
          _DAT_026f9360 = 0;
          uRam00000000026f9368 = 0;
          _DAT_026f9370 = 0;
          _DAT_026f93e8 = 0;
          uRam00000000026f93f0 = 0;
          _DAT_026f93f8 = 0;
          DAT_026f93fa = 3;
          _DAT_026f9378 = 0;
          uRam00000000026f9380 = 0;
          _DAT_026f9388 = 0;
          uRam00000000026f9390 = 0;
          _DAT_026f9398 = 0;
          uRam00000000026f93a0 = 0;
          _DAT_026f93a8 = 0;
          uRam00000000026f93b0 = 0;
          _DAT_026f93b8 = 0;
          uRam00000000026f93c0 = 0;
          _DAT_026f93c8 = 0;
          uRam00000000026f93d0 = 0;
          _DAT_026f93d8 = 0;
          uRam00000000026f93e0 = 0;
          DAT_026f9403 = 0;
          _DAT_026f93fb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0272b950 = "_fileLayout";
      _DAT_0272b958 = &DAT_026f9340;
      _DAT_0272b960 = 0;
      _DAT_0272b968 = 0x6500;
      _DAT_0272b970 = "GNSoundFileLayout";
      _DAT_0272b978 = &DAT_0272b9d0;
      _DAT_0272b980 = 0;
      uRam000000000272b988 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0272b950;
}




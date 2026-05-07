// Function: FUN_01588180
// Address: 01588180
// Size: 2699 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01588a40) */
/* WARNING: Removing unreachable block (ram,0x01588a49) */
/* WARNING: Removing unreachable block (ram,0x015889e8) */
/* WARNING: Removing unreachable block (ram,0x015889f1) */
/* WARNING: Removing unreachable block (ram,0x01588990) */
/* WARNING: Removing unreachable block (ram,0x01588999) */
/* WARNING: Removing unreachable block (ram,0x01588938) */
/* WARNING: Removing unreachable block (ram,0x01588941) */
/* WARNING: Removing unreachable block (ram,0x015888e0) */
/* WARNING: Removing unreachable block (ram,0x015888e9) */
/* WARNING: Removing unreachable block (ram,0x01588888) */
/* WARNING: Removing unreachable block (ram,0x01588891) */
/* WARNING: Removing unreachable block (ram,0x01588830) */
/* WARNING: Removing unreachable block (ram,0x01588839) */
/* WARNING: Removing unreachable block (ram,0x015887d8) */
/* WARNING: Removing unreachable block (ram,0x015887e1) */
/* WARNING: Removing unreachable block (ram,0x01588804) */
/* WARNING: Removing unreachable block (ram,0x0158880d) */
/* WARNING: Removing unreachable block (ram,0x0158885c) */
/* WARNING: Removing unreachable block (ram,0x01588865) */
/* WARNING: Removing unreachable block (ram,0x015888b4) */
/* WARNING: Removing unreachable block (ram,0x015888bd) */
/* WARNING: Removing unreachable block (ram,0x0158890c) */
/* WARNING: Removing unreachable block (ram,0x01588915) */
/* WARNING: Removing unreachable block (ram,0x01588964) */
/* WARNING: Removing unreachable block (ram,0x0158896d) */
/* WARNING: Removing unreachable block (ram,0x015889bc) */
/* WARNING: Removing unreachable block (ram,0x015889c5) */
/* WARNING: Removing unreachable block (ram,0x01588a14) */
/* WARNING: Removing unreachable block (ram,0x01588a1d) */
/* WARNING: Removing unreachable block (ram,0x01588a9c) */
/* WARNING: Removing unreachable block (ram,0x01588aa5) */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_01588180(double param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 *local_40;
  char local_38;
  
  if ((param_1 != 0.0) || (NAN(param_1))) {
    if ((param_1 != DAT_0238fee8) || (NAN(param_1) || NAN(DAT_0238fee8))) {
      if ((param_1 != DAT_0241b6a0) || (NAN(param_1) || NAN(DAT_0241b6a0))) {
        if ((DAT_027c71e0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_027c71d8 = '\0';
          DAT_027c71d9 = '\0';
          uRam00000000027c71da = 0;
          DAT_027c71d0._0_7_ = 0;
          DAT_027c71d0._7_1_ = 0;
          ___cxa_atexit(extraout_XMM0_Qa_02,0);
          ___cxa_guard_release();
        }
        if ((CONCAT17(DAT_027c71d0._7_1_,(undefined7)DAT_027c71d0) == 0) || (DAT_027c71d9 == '\0'))
        {
          FUN_00e8cb50();
          if (CONCAT17(DAT_027c71d0._7_1_,(undefined7)DAT_027c71d0) != 0) {
            DAT_027c71d9 = '\x01';
            FUN_00e8cb70();
            goto LAB_01588333;
          }
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02572358;
          (*DAT_02572370)();
          puVar5 = (undefined8 *)CONCAT17(DAT_027c71d0._7_1_,(undefined7)DAT_027c71d0);
          if (puVar5 == puVar4) {
            bVar1 = false;
          }
          else {
            DAT_027c71d0._0_7_ = SUB87(puVar4,0);
            DAT_027c71d0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
            bVar1 = true;
            if (puVar5 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (DAT_027c71d8 == '\0') {
            DAT_027c71d8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar1) {
            FUN_00d50b20();
          }
          FUN_00d21370();
          puVar5 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar5 = &DAT_02575d80;
          (*DAT_02575d98)();
          FUN_00d460b0(param_1);
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          FUN_00d21140();
          local_38 = '\0';
          FUN_00d21140();
          DAT_027c71d9 = '\x01';
          FUN_00e8cb70();
          bVar1 = true;
          lVar6 = 0;
          local_40 = puVar5;
        }
        else {
LAB_01588333:
          puVar5 = (undefined8 *)0x0;
          bVar1 = false;
          lVar6 = 0;
        }
        do {
          puVar4 = *(undefined8 **)
                    (*(longlong *)(CONCAT17(DAT_027c71d0._7_1_,(undefined7)DAT_027c71d0) + 0x10) +
                    lVar6 * 8);
          if (puVar5 == puVar4) {
            if ((!bVar1) && (puVar5 != (undefined8 *)0x0)) {
              bVar1 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (puVar4 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (puVar5 != (undefined8 *)0x0)) {
              FUN_00d50b20();
              bVar1 = true;
              puVar5 = puVar4;
            }
            else {
              bVar1 = true;
              puVar5 = puVar4;
            }
          }
          dVar7 = (double)FUN_00d45bc0();
          puVar4 = puVar5;
          bVar2 = bVar1;
          if ((dVar7 == param_1) && (!NAN(dVar7) && !NAN(param_1))) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            goto joined_r0x0158853f;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0xf);
        FUN_00d23620();
        uVar8 = FUN_00d470c0(param_1);
        if (local_40 == puVar5) {
          if ((!bVar1) && (local_40 != (undefined8 *)0x0)) {
            bVar2 = true;
            if (local_38 != '\0') goto LAB_01588a7c;
            uVar8 = FUN_00d50b00();
            bVar2 = true;
          }
LAB_01588a68:
          if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        else {
          puVar4 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (undefined8 *)0x0) {
              uVar8 = FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (puVar5 != (undefined8 *)0x0)) {
              uVar8 = FUN_00d50b20();
            }
            goto LAB_01588a68;
          }
          bVar2 = true;
          if ((bVar1) && (puVar5 != (undefined8 *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
        }
LAB_01588a7c:
        FUN_00d23370(uVar8,0);
        *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x0158853f:
        if ((!bVar2) && (puVar4 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        *unaff_RDI = (longlong)puVar4;
        goto LAB_01588519;
      }
      if ((DAT_027c71c8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_027c71c0 = '\0';
        DAT_027c71c1 = '\0';
        uRam00000000027c71c2 = 0;
        DAT_027c71b8._0_7_ = 0;
        DAT_027c71b8._7_1_ = 0;
        ___cxa_atexit(extraout_XMM0_Qa_01,0);
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_027c71b8._7_1_,(undefined7)DAT_027c71b8);
      if ((lVar6 != 0) && (DAT_027c71c1 != '\0')) goto LAB_0158827d;
      FUN_00e8cb50();
      if (CONCAT17(DAT_027c71b8._7_1_,(undefined7)DAT_027c71b8) == 0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02575d80;
        (*DAT_02575d98)();
        puVar5 = (undefined8 *)CONCAT17(DAT_027c71b8._7_1_,(undefined7)DAT_027c71b8);
        if (puVar5 == puVar4) {
          bVar1 = false;
        }
        else {
          DAT_027c71b8._0_7_ = SUB87(puVar4,0);
          DAT_027c71b8._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
          bVar1 = true;
          if (puVar5 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (DAT_027c71c0 == '\0') {
          DAT_027c71c0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        FUN_00d460b0(DAT_0241b6a0);
        DAT_027c71c1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_027c71c1 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(DAT_027c71b8._7_1_,(undefined7)DAT_027c71b8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      if ((DAT_027c71b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_027c71a8 = '\0';
        DAT_027c71a9 = '\0';
        uRam00000000027c71aa = 0;
        DAT_027c71a0._0_7_ = 0;
        DAT_027c71a0._7_1_ = 0;
        ___cxa_atexit(extraout_XMM0_Qa_00,0);
        ___cxa_guard_release();
      }
      lVar6 = CONCAT17(DAT_027c71a0._7_1_,(undefined7)DAT_027c71a0);
      if ((lVar6 != 0) && (DAT_027c71a9 != '\0')) goto LAB_0158827d;
      FUN_00e8cb50();
      if (CONCAT17(DAT_027c71a0._7_1_,(undefined7)DAT_027c71a0) == 0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02575d80;
        (*DAT_02575d98)();
        puVar5 = (undefined8 *)CONCAT17(DAT_027c71a0._7_1_,(undefined7)DAT_027c71a0);
        if (puVar5 == puVar4) {
          bVar1 = false;
        }
        else {
          DAT_027c71a0._0_7_ = SUB87(puVar4,0);
          DAT_027c71a0._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
          bVar1 = true;
          if (puVar5 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (DAT_027c71a8 == '\0') {
          DAT_027c71a8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        FUN_00d460b0(DAT_0238fee8);
        DAT_027c71a9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_027c71a9 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(DAT_027c71a0._7_1_,(undefined7)DAT_027c71a0);
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
joined_r0x015886f1:
    if (lVar6 == 0) {
      *unaff_RDI = 0;
      goto LAB_01588519;
    }
  }
  else {
    if ((DAT_027c7198 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      DAT_027c7190 = '\0';
      DAT_027c7191 = '\0';
      uRam00000000027c7192 = 0;
      DAT_027c7188._0_7_ = 0;
      DAT_027c7188._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Qa,0);
      ___cxa_guard_release();
    }
    lVar6 = CONCAT17(DAT_027c7188._7_1_,(undefined7)DAT_027c7188);
    if ((lVar6 == 0) || (DAT_027c7191 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(DAT_027c7188._7_1_,(undefined7)DAT_027c7188) == 0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02575d80;
        (*DAT_02575d98)();
        puVar5 = (undefined8 *)CONCAT17(DAT_027c7188._7_1_,(undefined7)DAT_027c7188);
        if (puVar5 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          DAT_027c7188._0_7_ = SUB87(puVar4,0);
          DAT_027c7188._7_1_ = (undefined1)((ulonglong)puVar4 >> 0x38);
          bVar2 = true;
          bVar1 = true;
          if (puVar5 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (DAT_027c7190 == '\0') {
          DAT_027c7190 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        FUN_00d460b0(0);
        DAT_027c7191 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_027c7191 = '\x01';
        FUN_00e8cb70();
      }
      lVar6 = CONCAT17(DAT_027c7188._7_1_,(undefined7)DAT_027c7188);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x015886f1;
    }
LAB_0158827d:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
  *unaff_RDI = lVar6;
LAB_01588519:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}



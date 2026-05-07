// Function: FUN_01d87940
// Address: 01d87940
// Size: 1819 bytes
// Class: GNString


void FUN_01d87940(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int in_EDX;
  int iVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar12;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar12 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar11 = (undefined4)param_2;
  if ((char)unaff_RDI[0x2b] != '\0') {
    return;
  }
  *(undefined1 *)(unaff_RDI + 0x2b) = 1;
  FUN_00c8e2b0(param_1,in_EDX << 4);
  plVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  (**(code **)(*unaff_RDI + 0x9a0))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d87a05;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01d87a05:
    (**(code **)(*unaff_RDI + 0x640))();
    plVar7 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*unaff_RDI + 0x640))();
      FUN_01cc5a70();
      FUN_01d4ab50();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = FUN_01d480c0();
    local_a8 = plVar5;
    local_a0 = '\0';
    (**(code **)(*plVar2 + 0x568))(uVar10,&local_a8);
    plVar7 = local_40;
    if (plVar5 == local_40) {
LAB_01d87aed:
      plVar7 = plVar5;
      if (local_38 != '\0') {
LAB_01d87af3:
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar5 = plVar7;
          goto LAB_01d87aed;
        }
        if (local_38 == '\0') goto LAB_01d87b01;
        goto LAB_01d87af3;
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_01d87b01:
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48370();
    (**(code **)(*plVar2 + 0x530))();
    local_48 = plVar7;
    if (DAT_028b8638 != '\0') {
      if ((DAT_028b8650 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        DAT_028b8648 = '\0';
        DAT_028b8649 = '\0';
        uRam00000000028b864a = 0;
        DAT_028b8640._0_7_ = 0;
        DAT_028b8640._7_1_ = 0;
        ___cxa_atexit(extraout_XMM0_Da,0);
        ___cxa_guard_release();
      }
      if ((CONCAT17(DAT_028b8640._7_1_,(undefined7)DAT_028b8640) == 0) || (DAT_028b8649 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028b8640._7_1_,(undefined7)DAT_028b8640) == 0) {
          uVar12 = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          uVar11 = DAT_02390124;
          FUN_01cfcdc0(DAT_02390124,DAT_02390124,0,DAT_02390124);
          plVar5 = (longlong *)CONCAT17(DAT_028b8640._7_1_,(undefined7)DAT_028b8640);
          plVar3 = plVar5;
          if (plVar5 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == (longlong *)0x0) {
                plVar3 = (longlong *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar5 = (longlong *)CONCAT17(DAT_028b8640._7_1_,(undefined7)DAT_028b8640);
                plVar3 = local_40;
              }
            }
            else {
              local_38 = '\0';
              plVar3 = local_40;
            }
            DAT_028b8640._0_7_ = SUB87(plVar3,0);
            DAT_028b8640._7_1_ = (undefined1)((ulonglong)plVar3 >> 0x38);
            if (plVar5 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar3 = local_40;
            }
          }
          if ((plVar3 != (longlong *)0x0) && (DAT_028b8648 == '\0')) {
            DAT_028b8648 = '\x01';
            FUN_00e8cb90();
            plVar3 = local_40;
          }
          if ((local_38 != '\0') && (plVar3 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          DAT_028b8649 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028b8649 = '\x01';
          FUN_00e8cb70();
        }
      }
      if ((DAT_028b8668 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
        DAT_028b8660 = '\0';
        DAT_028b8661 = '\0';
        uRam00000000028b8662 = 0;
        DAT_028b8658._0_7_ = 0;
        DAT_028b8658._7_1_ = 0;
        ___cxa_atexit(extraout_XMM0_Da_00,0);
        ___cxa_guard_release();
      }
      if ((CONCAT17(DAT_028b8658._7_1_,(undefined7)DAT_028b8658) == 0) || (DAT_028b8661 == '\0')) {
        FUN_00e8cb50();
        if (CONCAT17(DAT_028b8658._7_1_,(undefined7)DAT_028b8658) == 0) {
          uVar11 = 0;
          uVar12 = 0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          FUN_01cfcdc0(DAT_0239011c,0,0,DAT_02390124);
          plVar5 = (longlong *)CONCAT17(DAT_028b8658._7_1_,(undefined7)DAT_028b8658);
          plVar3 = plVar5;
          if (plVar5 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == (longlong *)0x0) {
                plVar3 = (longlong *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar5 = (longlong *)CONCAT17(DAT_028b8658._7_1_,(undefined7)DAT_028b8658);
                plVar3 = local_40;
              }
            }
            else {
              local_38 = '\0';
              plVar3 = local_40;
            }
            DAT_028b8658._0_7_ = SUB87(plVar3,0);
            DAT_028b8658._7_1_ = (undefined1)((ulonglong)plVar3 >> 0x38);
            if (plVar5 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar3 = local_40;
            }
          }
          if ((plVar3 != (longlong *)0x0) && (DAT_028b8660 == '\0')) {
            DAT_028b8660 = '\x01';
            FUN_00e8cb90();
            plVar3 = local_40;
          }
          if ((local_38 != '\0') && (plVar3 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          DAT_028b8661 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028b8661 = '\x01';
          FUN_00e8cb70();
        }
      }
      if (plVar7 != (longlong *)0x0) {
        iVar8 = -1;
        lVar9 = 8;
        while( true ) {
          iVar8 = iVar8 + 1;
          iVar6 = (int)plVar7[3];
          iVar4 = iVar6 + 0xf;
          if (-1 < iVar6) {
            iVar4 = iVar6;
          }
          if (iVar4 >> 4 <= iVar8) break;
          local_88 = *(undefined8 *)(plVar7[2] + -8 + lVar9);
          uStack_80 = 0;
          local_78 = *(undefined8 *)(plVar7[2] + lVar9);
          uStack_70 = 0;
          local_60 = 0;
          lVar1 = CONCAT17(DAT_028b8640._7_1_,(undefined7)DAT_028b8640);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          local_68 = lVar1;
          FUN_01d488d0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar2 + 0x3b0))((undefined4)local_88,(undefined4)local_78);
          local_50 = 0;
          lVar1 = CONCAT17(DAT_028b8658._7_1_,(undefined7)DAT_028b8658);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_50 = '\x01';
          local_58 = lVar1;
          FUN_01d488d0();
          plVar7 = local_48;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 0x10;
          uVar11 = (undefined4)local_78;
          uVar12 = local_78._4_4_;
          in_XMM1_Dc = (undefined4)uStack_70;
          in_XMM1_Dd = uStack_70._4_4_;
          (**(code **)(*plVar2 + 0x3b8))((undefined4)local_88);
        }
      }
      (**(code **)(*plVar2 + 0x540))();
    }
    plVar5 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      iVar8 = -1;
      lVar9 = 8;
      while( true ) {
        iVar8 = iVar8 + 1;
        iVar6 = (int)local_48[3];
        iVar4 = iVar6 + 0xf;
        if (-1 < iVar6) {
          iVar4 = iVar6;
        }
        plVar5 = local_48;
        if (iVar4 >> 4 <= iVar8) break;
        local_88 = *(undefined8 *)(local_48[2] + -8 + lVar9);
        uStack_80 = 0;
        local_78 = *(undefined8 *)(local_48[2] + lVar9);
        uStack_70 = 0;
        FUN_01e3f820();
        local_88 = FUN_00d05360();
        uStack_80 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
        local_78 = CONCAT44(uVar12,uVar11);
        uStack_70 = CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
        FUN_01d48370();
        (**(code **)(*plVar2 + 0x390))((undefined4)local_88,(undefined4)local_78);
        local_98 = plVar2;
        local_90 = '\0';
        uVar11 = (undefined4)local_78;
        uVar12 = local_78._4_4_;
        in_XMM1_Dc = (undefined4)uStack_70;
        in_XMM1_Dd = uStack_70._4_4_;
        (**(code **)(*unaff_RDI + 0x610))((undefined4)local_88);
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 0x10;
        FUN_01d48390();
      }
    }
    uVar11 = FUN_01d48390();
    iVar8 = (int)plVar5[3];
    iVar6 = iVar8 + 0xf;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    FUN_01d481d0(uVar11,iVar6 >> 4);
    *(undefined1 *)(unaff_RDI + 0x2b) = 0;
    FUN_00d50b20();
    goto LAB_01d87f9d;
  }
  *(undefined1 *)(unaff_RDI + 0x2b) = 0;
LAB_01d87f9d:
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



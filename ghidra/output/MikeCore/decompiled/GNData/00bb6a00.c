// Function: FUN_00bb6a00
// Address: 00bb6a00
// Size: 1592 bytes
// Class: GNData
// String references:
//   "cue "


/* WARNING: Removing unreachable block (ram,0x00bb6adc) */
/* WARNING: Removing unreachable block (ram,0x00bb6ae8) */

undefined4 FUN_00bb6a00(void)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined7 uVar8;
  longlong *unaff_RSI;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 *local_d8;
  undefined1 local_d0;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_78;
  char local_70;
  longlong local_60;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*unaff_RSI == 0) {
    uVar12 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (longlong)&DAT_0256d868;
    plVar4[2] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
    (*DAT_0256d880)();
    FUN_00cccf90();
    FUN_00ccce90();
    FUN_00ccce80();
    local_48 = 0;
    uStack_40 = 0;
    uVar12 = FUN_00ccdf50(0,*(undefined4 *)(*unaff_RSI + 0xc));
    if ((local_140 != '\0') && (local_148 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar5 = *unaff_RSI;
    if (*(int *)(lVar5 + 0xc) < 1) {
      local_50 = 0;
      lVar11 = 0;
      bVar1 = false;
      local_60 = 0;
    }
    else {
      lVar10 = 0;
      local_60 = 0;
      bVar1 = false;
      lVar11 = 0;
      local_50 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar10 * 8);
        if (local_60 == lVar5) {
          lVar2 = DAT_02765258;
          if ((!bVar1) && (local_60 != 0)) {
            bVar1 = true;
            uVar12 = FUN_00d50b00();
            lVar2 = DAT_02765258;
          }
        }
        else {
          if (lVar5 != 0) {
            uVar12 = FUN_00d50b00();
          }
          if ((bVar1) && (local_60 != 0)) {
            uVar12 = FUN_00d50b20();
            bVar1 = true;
            lVar2 = DAT_02765258;
            local_60 = lVar5;
          }
          else {
            bVar1 = true;
            lVar2 = DAT_02765258;
            local_60 = lVar5;
          }
        }
        DAT_02765258 = lVar2;
        if (lVar2 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_a8 = '\x01';
        local_b0 = lVar2;
        uVar12 = FUN_000175c0(uVar12,&local_b0);
        uVar8 = (undefined7)((ulonglong)lVar2 >> 8);
        if (local_78 == lVar11) {
          lVar5 = lVar11;
          if (((char)local_50 == '\0') && (local_78 != 0)) {
            if (local_70 != '\0') goto LAB_00bb6cd4;
            uVar7 = (uint)CONCAT71(uVar8,1);
            uVar12 = FUN_00d50b00();
          }
          else {
            uVar7 = (uint)local_50;
          }
        }
        else {
          lVar5 = local_78;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              uVar12 = FUN_00d50b00();
            }
            uVar7 = (uint)CONCAT71(uVar8,1);
            if (((char)local_50 != '\0') && (lVar11 != 0)) {
              uVar12 = FUN_00d50b20();
            }
          }
          else {
            if (((char)local_50 != '\0') && (lVar11 != 0)) {
              uVar12 = FUN_00d50b20();
            }
LAB_00bb6cd4:
            local_70 = '\0';
            uVar7 = (uint)CONCAT71(uVar8,1);
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if (lVar5 == 0) {
          uVar12 = FUN_00ccdf50(uVar12,0);
          if ((local_120 != '\0') && (local_128 != 0)) {
            uVar12 = FUN_00d50b20();
          }
        }
        else {
          uVar12 = FUN_00d45870();
          uVar12 = FUN_00ccdf50(uVar7,uVar12);
          if ((local_130 != '\0') && (local_138 != 0)) {
            uVar12 = FUN_00d50b20();
          }
        }
        lVar11 = DAT_02765260;
        if (DAT_02765260 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_a0 = lVar11;
        local_98 = '\x01';
        uVar6 = FUN_000175c0(uVar12,&local_a0);
        cVar9 = (char)uVar7;
        uVar12 = extraout_XMM0_Da;
        if (local_78 == lVar5) {
          lVar11 = lVar5;
          if ((cVar9 == '\0') && (local_78 != 0)) {
            if (local_70 != '\0') goto LAB_00bb6e53;
            local_50 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            uVar12 = FUN_00d50b00();
          }
          else {
            local_50 = (ulonglong)uVar7;
          }
        }
        else {
          lVar11 = local_78;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              uVar6 = FUN_00d50b00();
              uVar12 = extraout_XMM0_Da_01;
            }
            local_50 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            if ((cVar9 != '\0') && (lVar5 != 0)) {
              uVar12 = FUN_00d50b20();
            }
          }
          else {
            if ((cVar9 != '\0') && (lVar5 != 0)) {
              uVar6 = FUN_00d50b20();
              uVar12 = extraout_XMM0_Da_00;
            }
LAB_00bb6e53:
            local_70 = '\0';
            local_50 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if (lVar11 == 0) {
          FUN_00ccdf50(uVar12,0);
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar12 = FUN_00d45870();
          FUN_00ccdf50(extraout_XMM0_Da_02,uVar12);
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar12 = (**(code **)(*plVar4 + 0x388))(0x10,&local_48);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
        lVar5 = *unaff_RSI;
      } while (lVar10 < *(int *)(lVar5 + 0xc));
    }
    uVar12 = (**(code **)(*plVar4 + 0x368))();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    local_d0 = 0;
    local_d8 = puVar3;
    uVar12 = FUN_00bb0460(uVar12,&local_d8);
    FUN_00d50b20();
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar1) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



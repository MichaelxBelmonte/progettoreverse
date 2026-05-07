// Function: FUN_01db5b00
// Address: 01db5b00
// Size: 1623 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01db5b00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong **pplVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  longlong *local_70;
  char local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_31;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  uVar12 = (**(code **)(*plVar4 + 0x18))();
  plVar7 = (longlong *)*unaff_RSI;
  if ((DAT_026fdd40 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_00, iVar3 != 0)) {
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
    uVar12 = ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_01db5b72:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar7 = unaff_RSI;
    uVar12 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_01db5b72;
  }
  if (*plVar7 == 0) {
    local_60 = 0;
    local_50 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)*unaff_RSI;
    if (plVar4 == plVar7) {
      local_31 = '\x01';
      plVar7 = plVar4;
      local_c0 = DAT_027f22d0;
    }
    else {
      local_31 = (char)unaff_RSI[1];
      if ((local_31 != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      uVar12 = FUN_00d50b20();
      local_c0 = DAT_027f22d0;
    }
    DAT_027f22d0 = local_c0;
    if (local_c0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_b8 = '\x01';
    uVar12 = FUN_000175c0(uVar12,&local_c0);
    plVar4 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (longlong *)0x0) && (uVar12 = FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar9 = DAT_027f22d0;
    local_80 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      local_b0 = plVar4;
      local_a8 = '\0';
      if (DAT_027f22d0 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_a0 = lVar9;
      local_98 = '\x01';
      uVar12 = (**(code **)(*unaff_RDI + 0x80))(uVar12,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    lVar9 = DAT_027f22c8;
    if (DAT_027f22c8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_90 = lVar9;
    local_88 = '\x01';
    FUN_000175c0(uVar12,&local_90);
    local_50 = local_70;
    if (local_70 == (longlong *)0x0) {
      local_60 = 0;
      local_50 = (longlong *)0x0;
joined_r0x01db5d55:
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68 == '\0') {
        uVar6 = FUN_00d50b00();
        local_60 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        goto joined_r0x01db5d55;
      }
      local_68 = '\0';
      local_60 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 == (longlong *)0x0) ||
       (*(int *)((longlong)local_50 + 0xc) != *(int *)(unaff_RDI[0x28] + 0xc))) {
      local_40 = 0;
      lVar9 = 0;
      local_48 = 0;
      lVar11 = 0;
    }
    else {
      local_58 = plVar7;
      if (*(int *)((longlong)local_50 + 0xc) < 1) {
LAB_01db5ff4:
        local_40 = 0;
        lVar9 = 0;
        local_48 = 0;
        lVar11 = 0;
      }
      else {
        lVar9 = 0;
        do {
          plVar7 = *(longlong **)(local_50[2] + lVar9 * 8);
          local_70 = plVar7;
          FUN_00053ac0();
          pplVar8 = (longlong **)&DAT_02802688;
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar8 = &local_70;
            if (cVar2 == '\0') {
              pplVar8 = (longlong **)&DAT_02802688;
            }
          }
          if (*pplVar8 == (longlong *)0x0) {
            local_40 = 0;
            lVar9 = 0;
            local_48 = 0;
            lVar11 = 0;
            plVar7 = local_58;
            goto joined_r0x01db603f;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((longlong)local_50 + 0xc));
        if (*(int *)((longlong)local_50 + 0xc) < 1) goto LAB_01db5ff4;
        lVar10 = 0;
        lVar11 = 0;
        local_48 = 0;
        lVar9 = 0;
        local_40 = 0;
        do {
          lVar5 = local_50[2];
          lVar1 = *(longlong *)(lVar5 + lVar10 * 8);
          if (lVar11 == lVar1) {
            if (((char)local_48 == '\0') && (lVar11 != 0)) {
              local_48 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              lVar5 = FUN_00d50b00();
            }
            if (((char)local_48 == '\0') || (lVar11 == 0)) {
              local_48 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              lVar11 = lVar1;
            }
            else {
              uVar6 = FUN_00d50b20();
              local_48 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
              lVar11 = lVar1;
            }
          }
          lVar5 = *(longlong *)(unaff_RDI[0x28] + 0x10);
          lVar1 = *(longlong *)(lVar5 + lVar10 * 8);
          if (lVar9 == lVar1) {
            if (((char)local_40 == '\0') && (lVar9 != 0)) {
              local_40 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              lVar5 = FUN_00d50b00();
            }
            if (((char)local_40 == '\0') || (lVar9 == 0)) {
              local_40 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              lVar9 = lVar1;
            }
            else {
              uVar6 = FUN_00d50b20();
              local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
              lVar9 = lVar1;
            }
          }
          iVar3 = FUN_00d45870();
          if (iVar3 != -1) {
            uVar12 = (**(code **)(**(longlong **)(lVar9 + 0x20) + 0x4d8))();
            local_c8 = param_2;
            uVar13 = FUN_00d459e0();
            *(undefined4 *)((longlong)&local_c8 + (ulonglong)((char)unaff_RDI[0x27] == '\0') * 4) =
                 uVar13;
            param_2 = local_c8;
            (**(code **)(**(longlong **)(lVar9 + 0x20) + 0x4d0))(uVar12);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)local_50 + 0xc));
      }
      (**(code **)(*unaff_RDI + 0x920))();
      plVar7 = local_58;
    }
joined_r0x01db603f:
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((local_31 == '\0') || (plVar7 == (longlong *)0x0)) goto LAB_01db607f;
  }
  FUN_00d50b20();
LAB_01db607f:
  if (((char)local_60 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



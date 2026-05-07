// Function: FUN_01e6dab0
// Address: 01e6dab0
// Size: 2133 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e6dbbf) */
/* WARNING: Removing unreachable block (ram,0x01e6dbcb) */
/* WARNING: Removing unreachable block (ram,0x01e6e246) */
/* WARNING: Removing unreachable block (ram,0x01e6e252) */
/* WARNING: Removing unreachable block (ram,0x01e6e2ab) */
/* WARNING: Removing unreachable block (ram,0x01e6e2b7) */
/* WARNING: Removing unreachable block (ram,0x01e6dc0a) */
/* WARNING: Removing unreachable block (ram,0x01e6dc16) */
/* WARNING: Removing unreachable block (ram,0x01e6e0ec) */
/* WARNING: Removing unreachable block (ram,0x01e6e0f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e6dab0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  longlong *plVar5;
  longlong *in_RDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar6;
  undefined8 uVar7;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  longlong local_88;
  char local_80;
  longlong *local_58;
  longlong *local_40;
  char local_38;
  
  fVar9 = (float)((ulonglong)param_2 >> 0x20);
  local_d8._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_d8._0_4_ = (undefined4)param_1;
  local_e8._8_4_ = in_XMM1_Dc;
  local_e8._0_8_ = param_2;
  local_e8._12_4_ = in_XMM1_Dd;
  if (*in_RDX == unaff_RDI[0x2d]) {
    local_d8._0_4_ = (float)local_d8._0_4_ + _DAT_023b5570;
    local_d8._4_4_ = (float)local_d8._4_4_ + _UNK_023b5574;
    in_XMM0_Dc = in_XMM0_Dc + _UNK_023b5578;
    in_XMM0_Dd = in_XMM0_Dd + _UNK_023b557c;
  }
  fStack_d0 = in_XMM0_Dc;
  fStack_cc = in_XMM0_Dd;
  iVar1 = (int)unaff_RDI[0x2b];
  if (iVar1 == 0) {
    if (((float)DAT_028ba110 != 0.0) || (NAN((float)DAT_028ba110))) {
      if ((DAT_028ba110._4_4_ == 0.0) && (!NAN(DAT_028ba110._4_4_))) goto LAB_01e6dc66;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = DAT_028ba110;
    }
    else {
LAB_01e6dc66:
      auVar8._8_8_ = _UNK_024202c8;
      auVar8._0_8_ = _DAT_024202c0;
      DAT_028ba110 = _DAT_024202c0;
    }
    blendps(auVar8,local_e8,0xd);
    auVar3._4_4_ = fVar9;
    auVar3._0_4_ = fVar9 + DAT_02421224 + (float)local_d8._4_4_;
    auVar3._8_4_ = in_XMM1_Dd;
    auVar3._12_4_ = in_XMM1_Dd;
    insertps(_local_d8,auVar3,0x10);
    blendps(local_e8,_DAT_02421240,0xe);
LAB_01e6dcc5:
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_40 + 0x378))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    FUN_01d48a10();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (*(char *)(*in_RDX + 0xc) == '\0') {
      FUN_01cfc3c0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cfbc00();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar5 = (longlong *)*unaff_RSI;
    lVar2 = *(longlong *)(*in_RDX + 0x10);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar5 + 0x3f8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (1 < *(uint *)(unaff_RDI + 0x2b)) {
      return;
    }
    plVar5 = *(longlong **)(*in_RDX + 0x20);
  }
  else {
    if (iVar1 == 2) goto LAB_01e6dcc5;
    if (iVar1 != 1) {
      return;
    }
    plVar5 = *(longlong **)(*in_RDX + 0x20);
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar5 + 0x4d8))();
    FUN_00d05510();
    (**(code **)(*plVar5 + 0x4d0))();
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) {
      (**(code **)(*unaff_RDI + 0x450))();
      FUN_01e3f820();
      (**(code **)(*unaff_RDI + 0x798))();
    }
    FUN_00d50b20();
    return;
  }
  local_58 = *(longlong **)(*in_RDX + 0x38);
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b00();
    bVar4 = false;
    goto LAB_01e6e1ad;
  }
  if ((DAT_028ba118 == (longlong *)0x0) || (DAT_028ba121 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ba118 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028ba118 == plVar5) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
        bVar6 = DAT_028ba118 != (longlong *)0x0;
        DAT_028ba118 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ba120 == '\0') {
        DAT_028ba120 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar4) {
        FUN_00d50b20();
      }
      if (((float)DAT_028ba110 != 0.0) || (NAN((float)DAT_028ba110))) {
        if ((DAT_028ba110._4_4_ == 0.0) && (!NAN(DAT_028ba110._4_4_))) goto LAB_01e6e038;
      }
      else {
LAB_01e6e038:
        DAT_028ba110 = _DAT_024202c0;
      }
      FUN_01d4ed60();
      FUN_01d52700();
      FUN_01d52740();
      FUN_01cfbee0();
      if ((local_80 == '\0') && (local_88 != 0)) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01d530c0();
      FUN_00d05530();
      (**(code **)(*local_40 + 0x3b8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      DAT_028ba121 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ba121 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028ba118 == (longlong *)0x0) {
      bVar4 = true;
      local_58 = (longlong *)0x0;
      goto LAB_01e6e1ad;
    }
  }
  local_58 = DAT_028ba118;
  FUN_00d50b00();
  bVar4 = false;
LAB_01e6e1ad:
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  if (*(char *)(*in_RDX + 0xc) == '\0') {
    FUN_01d526f0();
    uVar7 = FUN_00d05510();
    FUN_01d49110(uVar7,DAT_0239011c);
  }
  else {
    FUN_01d526f0();
    uVar7 = FUN_00d05510();
    FUN_01d49110(uVar7,DAT_02390124);
  }
  FUN_01d48390();
  if (!bVar4 && local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// Function: FUN_00c0ea10
// Address: 00c0ea10
// Size: 932 bytes
// Class: GNOverloudGainReductionView


/* WARNING: Removing unreachable block (ram,0x00c0eaa7) */
/* WARNING: Removing unreachable block (ram,0x00c0eaac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00c0ea10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong *in_RDX;
  int unaff_ESI;
  longlong unaff_RDI;
  float fVar7;
  undefined8 in_XMM1_Qb;
  undefined1 auVar8 [16];
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  local_88 = *in_RDX;
  local_80 = '\0';
  uVar2 = FUN_00b3c720(param_1,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_ESI != 0) {
    return uVar2;
  }
  FUN_00d23340();
  plVar6 = local_38;
  local_70 = local_30 != '\0';
  local_78 = local_38;
  if ((bool)local_70) {
    local_30 = '\0';
  }
  FUN_00c4d260();
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      pplVar5 = &local_78;
      plVar3 = local_78;
      cVar4 = local_70;
      goto joined_r0x00c0eaea;
    }
  }
  pplVar5 = &DAT_02802688;
  plVar3 = DAT_02802688;
  cVar4 = DAT_02802690;
joined_r0x00c0eaea:
  if (cVar4 == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_70 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    fVar7 = (float)(**(code **)(*(longlong *)plVar3[0x12] + 0x4d8))();
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar6 + 0x27) = 0;
    plVar6[0x2e] = 0;
    *(undefined4 *)(plVar6 + 0x2f) = 0;
    plVar6[0x30] = 0;
    *(undefined1 *)(plVar6 + 0x31) = 0;
    plVar6[0x28] = 0;
    plVar6[0x29] = 0;
    *(undefined4 *)(plVar6 + 0x2a) = 0;
    plVar6[0x2b] = 0;
    plVar6[0x2c] = 0;
    *(undefined8 *)((longlong)plVar6 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x199) = 0;
    plVar6[0x35] = 0;
    plVar6[0x36] = 0;
    plVar6[0x37] = 0;
    plVar6[0x38] = 0;
    *plVar6 = (longlong)&DAT_02677e10;
    plVar6[2] = (longlong)&DAT_026788e8;
    plVar6[0x39] = (longlong)&DAT_02678928;
    *(undefined4 *)((longlong)plVar6 + 500) = 0;
    *(undefined1 *)(plVar6 + 0x3f) = 0;
    plVar6[0x43] = 0;
    plVar6[0x3c] = 0;
    plVar6[0x3d] = 0;
    plVar6[0x3a] = 0;
    plVar6[0x3b] = 0;
    *(undefined1 *)(plVar6 + 0x3e) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x1fc) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x204) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x20c) = 0;
    (*DAT_02677e28)();
    lVar1 = *(longlong *)(unaff_RDI + 0xb8);
    *(longlong **)(unaff_RDI + 0xb8) = plVar6;
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar6 = *(longlong **)(unaff_RDI + 0xb8);
    }
    auVar8._8_8_ = in_XMM1_Qb;
    auVar8._0_8_ = param_2;
    auVar8 = blendps(auVar8,_DAT_023b5da0,0xd);
    (**(code **)(*plVar6 + 0x4d0))(fVar7 + DAT_02390d30 + (float)param_2,auVar8._0_8_);
    local_68 = DAT_0276c280;
    plVar6 = *(longlong **)(unaff_RDI + 0xb8);
    if (DAT_0276c280 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    (**(code **)(*plVar6 + 0x958))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_0276c288;
    plVar6 = *(longlong **)(unaff_RDI + 0xb8);
    if (DAT_0276c288 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar1;
    local_50 = '\x01';
    (**(code **)(*plVar6 + 0xa10))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar6 = local_38;
    local_40 = 0;
    local_48 = *(longlong *)(unaff_RDI + 0xb8);
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    (**(code **)(*plVar6 + 0x450))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar2;
}



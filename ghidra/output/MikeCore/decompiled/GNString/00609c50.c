// Function: FUN_00609c50
// Address: 00609c50
// Size: 636 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00609dbf) */
/* WARNING: Removing unreachable block (ram,0x00609dc8) */

void FUN_00609c50(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong *plVar5;
  uint uVar6;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 in_XMM1_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(*(longlong *)(unaff_RDI[0x31] + 0x10) + (longlong)unaff_ESI * 8);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = plVar1;
  FUN_00d23f50();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = '\0';
  local_40 = plVar1;
  cVar4 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    local_38 = '\0';
    local_40 = plVar1;
    FUN_00d23f50();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)unaff_RDI[0x33] == plVar1) {
    uVar6 = unaff_ESI - (uint)(*(int *)(unaff_RDI[0x31] + 0xc) == unaff_ESI);
    if ((-1 < (int)uVar6) &&
       (plVar2 = *(longlong **)(*(longlong *)(unaff_RDI[0x31] + 0x10) + (ulonglong)uVar6 * 8),
       plVar1 != plVar2)) {
      plVar5 = plVar1;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        plVar5 = (longlong *)unaff_RDI[0x33];
      }
      unaff_RDI[0x33] = (longlong)plVar2;
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_006083c0();
  if (*(int *)(unaff_RDI[0x31] + 0xc) != 1) goto LAB_00609e0a;
  pplVar7 = &local_40;
  FUN_01e40eb0();
  plVar2 = local_40;
  FUN_000a94a0();
  if (plVar2 == (longlong *)0x0) {
LAB_00609d71:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00609d71;
  }
  plVar2 = *pplVar7;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_01e40eb0();
    FUN_006c5ee0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e40eb0();
    FUN_006c4ec0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00609e0a:
  uVar8 = (**(code **)(*unaff_RDI + 0x4d8))();
  uVar9 = (**(code **)(*unaff_RDI + 0x528))();
  auVar11._8_8_ = in_XMM1_Qb;
  auVar11._0_8_ = param_2;
  auVar10._8_4_ = extraout_XMM0_Dc;
  auVar10._0_8_ = uVar9;
  auVar10._12_4_ = extraout_XMM0_Dd;
  if ((float)uVar9 <= (float)param_2) {
    auVar10 = auVar11;
  }
  auVar3._8_4_ = extraout_XMM0_Dc;
  auVar3._0_8_ = uVar9;
  auVar3._12_4_ = extraout_XMM0_Dd;
  auVar11 = blendps(auVar10,auVar3,2);
  (**(code **)(*unaff_RDI + 0x4d0))(uVar8,auVar11._0_8_);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



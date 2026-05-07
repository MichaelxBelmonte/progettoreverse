// Function: FUN_007e0970
// Address: 007e0970
// Size: 1604 bytes
// Class: GNString


void FUN_007e0970(undefined4 param_1)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  undefined4 uVar8;
  longlong **pplVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_48;
  char local_40;
  undefined4 local_34;
  
  lVar3 = DAT_0270b8b0;
  if (DAT_0270b8b0 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_b0 = lVar3;
  local_a8 = '\x01';
  pplVar9 = &local_48;
  FUN_000175c0(param_1,&local_b0);
  plVar6 = local_48;
  uVar11 = FUN_00053ac0();
  if (plVar6 == (longlong *)0x0) {
LAB_007e09f3:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar11 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_007e09f3;
  }
  plVar6 = *pplVar9;
  if (plVar6 == (longlong *)0x0) {
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)pplVar9 >> 8),1);
    bVar1 = 0;
    bVar2 = false;
    bVar10 = false;
    plVar6 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar9 + 1) == '\0') {
      uVar11 = FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    bVar1 = 1;
    uVar8 = 0;
    bVar2 = true;
    bVar10 = true;
  }
  if ((local_40 != '\0') && (bVar10 = bVar2, local_48 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    uVar11 = FUN_00d459e0();
    *(undefined4 *)(unaff_RDI + 0x54) = uVar11;
  }
  lVar3 = DAT_0272f300;
  local_34 = uVar8;
  if (DAT_0272f300 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_a0 = lVar3;
  local_98 = '\x01';
  pplVar9 = &local_48;
  FUN_000175c0(uVar11,&local_a0);
  plVar7 = local_48;
  uVar11 = FUN_00053ac0();
  if (plVar7 == (longlong *)0x0) {
LAB_007e0aea:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar11 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_007e0aea;
  }
  plVar7 = *pplVar9;
  if (plVar7 == plVar6) {
    if (((byte)local_34 & plVar7 != (longlong *)0x0) == 1) {
      if (*(char *)(pplVar9 + 1) != '\0') goto LAB_007e0b37;
      bVar10 = true;
      uVar11 = FUN_00d50b00();
    }
  }
  else if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar7 != (longlong *)0x0) {
      uVar11 = FUN_00d50b00();
    }
    if ((bool)(bVar1 & plVar6 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
      bVar10 = true;
      plVar6 = plVar7;
    }
    else {
      bVar10 = true;
      plVar6 = plVar7;
    }
  }
  else {
    bVar10 = plVar6 != (longlong *)0x0;
    plVar6 = plVar7;
    if ((bool)(bVar1 & bVar10)) {
      uVar11 = FUN_00d50b20();
    }
LAB_007e0b37:
    *(undefined1 *)(pplVar9 + 1) = 0;
    bVar10 = true;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    uVar11 = FUN_00d459e0();
    *(undefined4 *)(unaff_RDI + 0x60) = uVar11;
  }
  lVar3 = DAT_0272f308;
  if (DAT_0272f308 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_90 = lVar3;
  local_88 = '\x01';
  pplVar9 = &local_48;
  FUN_000175c0(uVar11,&local_90);
  plVar7 = local_48;
  uVar11 = FUN_00053ac0();
  if (plVar7 == (longlong *)0x0) {
LAB_007e0c38:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar11 = extraout_XMM0_Da_01;
    if (cVar4 == '\0') goto LAB_007e0c38;
  }
  plVar7 = *pplVar9;
  if (plVar7 == plVar6) {
    if ((!bVar10) && (plVar7 != (longlong *)0x0)) {
      plVar7 = plVar6;
      if (*(char *)(pplVar9 + 1) != '\0') goto LAB_007e0c85;
      uVar11 = FUN_00d50b00();
      goto joined_r0x007e0cbf;
    }
  }
  else {
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        uVar11 = FUN_00d50b00();
      }
      if ((bVar10) && (plVar6 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    else {
      if ((bVar10) && (plVar6 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
LAB_007e0c85:
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
joined_r0x007e0cbf:
    bVar10 = true;
    plVar6 = plVar7;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    uVar11 = FUN_00d459e0();
    *(undefined4 *)(unaff_RDI + 0x5c) = uVar11;
  }
  lVar3 = DAT_0270b8a0;
  if (DAT_0270b8a0 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_80 = lVar3;
  local_78 = '\x01';
  pplVar9 = &local_48;
  FUN_000175c0(uVar11,&local_80);
  plVar7 = local_48;
  uVar11 = FUN_00053ac0();
  if (plVar7 == (longlong *)0x0) {
LAB_007e0d62:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar11 = extraout_XMM0_Da_02;
    if (cVar4 == '\0') goto LAB_007e0d62;
  }
  plVar7 = *pplVar9;
  if (plVar7 == plVar6) {
    if ((bVar10 == false) && (plVar7 != (longlong *)0x0)) {
      plVar7 = plVar6;
      if (*(char *)(pplVar9 + 1) != '\0') goto LAB_007e0da5;
      local_34 = CONCAT31(local_34._1_3_,1);
      uVar11 = FUN_00d50b00();
    }
    else {
      local_34 = CONCAT31(local_34._1_3_,bVar10);
      plVar7 = plVar6;
    }
  }
  else if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar7 != (longlong *)0x0) {
      uVar11 = FUN_00d50b00();
    }
    local_34 = CONCAT31(local_34._1_3_,1);
    if ((bVar10 != false) && (plVar6 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  else {
    if ((bVar10 != false) && (plVar6 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
LAB_007e0da5:
    *(undefined1 *)(pplVar9 + 1) = 0;
    local_34 = CONCAT31(local_34._1_3_,1);
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (char)local_34;
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    uVar11 = FUN_00d459e0();
    *(undefined4 *)(unaff_RDI + 0x50) = uVar11;
  }
  lVar3 = DAT_02726cd0;
  if (DAT_02726cd0 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_70 = lVar3;
  local_68 = '\x01';
  pplVar9 = &local_48;
  FUN_000175c0(uVar11,&local_70);
  plVar6 = local_48;
  FUN_00053ac0();
  if (plVar6 == (longlong *)0x0) {
LAB_007e0ebe:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_007e0ebe;
  }
  plVar6 = *pplVar9;
  if (plVar6 == plVar7) {
    if ((cVar4 != '\0') || (plVar6 == (longlong *)0x0)) goto joined_r0x007e0f45;
    plVar6 = plVar7;
    if (*(char *)(pplVar9 + 1) == '\0') {
      FUN_00d50b00();
      goto LAB_007e0f41;
    }
LAB_007e0f0b:
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  else {
    if (*(char *)(pplVar9 + 1) != '\0') {
      if ((cVar4 != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_007e0f0b;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if ((cVar4 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
      plVar7 = plVar6;
LAB_007e0f41:
      cVar4 = '\x01';
      goto joined_r0x007e0f45;
    }
  }
  cVar4 = '\x01';
  plVar7 = plVar6;
joined_r0x007e0f45:
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    uVar11 = FUN_00d459e0();
    *(undefined4 *)(unaff_RDI + 0x58) = uVar11;
    if (cVar4 != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}



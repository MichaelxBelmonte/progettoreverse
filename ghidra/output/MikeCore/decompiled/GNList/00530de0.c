// Function: FUN_00530de0
// Address: 00530de0
// Size: 1603 bytes
// Class: GNList


void FUN_00530de0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong **pplVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  char local_39;
  
  FUN_00d3ecf0();
  plVar7 = local_50;
  local_d0 = local_50;
  if (local_48 == '\0') {
    if (local_50 == (longlong *)0x0) {
      local_d0 = (longlong *)0x0;
      local_c8 = 1;
      plVar7 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      local_c8 = 1;
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_c8 = 1;
  }
  FUN_000914a0();
  if (plVar7 == (longlong *)0x0) {
LAB_00530e46:
    pplVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00530e46;
    pplVar4 = &local_d0;
  }
  plVar1 = *pplVar4;
  local_39 = *(char *)(pplVar4 + 1);
  if ((local_39 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_70 = plVar1;
  if (plVar7 == unaff_RDI) {
LAB_00530f6e:
    uVar10 = FUN_00d3ed20();
    local_58 = local_50;
    if ((((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_48 != '\0')) && (local_50 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = DAT_0270b900;
    if (DAT_0270b900 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    pplVar4 = &local_50;
    FUN_000175c0(uVar10,&local_c0);
    plVar1 = local_50;
    uVar10 = FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_00531011:
      pplVar4 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Qa;
      if (cVar3 == '\0') goto LAB_00531011;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    local_60 = plVar1;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = DAT_0270b908;
    if (DAT_0270b908 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_b0 = lVar2;
    local_a8 = '\x01';
    pplVar4 = &local_50;
    FUN_000175c0(uVar10,&local_b0);
    plVar1 = local_50;
    uVar10 = FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_005310d0:
      pplVar4 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Qa_00;
      if (cVar3 == '\0') goto LAB_005310d0;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    local_68 = plVar1;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = DAT_0270b910;
    if (DAT_0270b910 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a0 = lVar2;
    local_98 = '\x01';
    pplVar4 = &local_50;
    FUN_000175c0(uVar10,&local_a0);
    plVar1 = local_50;
    uVar10 = FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_00531193:
      pplVar4 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Qa_01;
      if (cVar3 == '\0') goto LAB_00531193;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = DAT_0270b918;
    if (DAT_0270b918 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    pplVar4 = &local_50;
    FUN_000175c0(uVar10,&local_90);
    plVar8 = local_50;
    FUN_00053ac0();
    if (plVar8 == (longlong *)0x0) {
      pplVar4 = &DAT_02802688;
      plVar8 = DAT_02802688;
      if (DAT_02802690 != '\0') goto LAB_00531262;
LAB_00531281:
      plVar6 = local_60;
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') {
        pplVar4 = &DAT_02802688;
      }
      plVar8 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') goto LAB_00531281;
LAB_00531262:
      *(undefined1 *)(pplVar4 + 1) = 0;
      plVar6 = local_60;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((((plVar6 != (longlong *)0x0) && (local_68 != (longlong *)0x0)) &&
        (plVar1 != (longlong *)0x0)) && (plVar8 != (longlong *)0x0)) {
      lVar2 = unaff_RDI[0x22];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_00d45bc0();
      uVar11 = FUN_00d45bc0();
      uVar12 = FUN_00d45bc0();
      uVar9 = FUN_00d45bc0();
      FUN_0015db00(uVar10,uVar11,uVar12,uVar9);
      plVar6 = local_60;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (plVar1 == (longlong *)0x0) goto LAB_005313ea;
    (**(code **)(*plVar1 + 0x988))();
    FUN_0051b4f0();
    plVar1 = local_80;
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_50 = plVar1;
    local_48 = '\0';
    cVar3 = FUN_00d23d70();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') goto LAB_00530f6e;
  }
  if ((local_39 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_005313ea:
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



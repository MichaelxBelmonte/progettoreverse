// Function: FUN_01f329a0
// Address: 01f329a0
// Size: 2721 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f33234) */
/* WARNING: Removing unreachable block (ram,0x01f33240) */
/* WARNING: Removing unreachable block (ram,0x01f330b0) */
/* WARNING: Removing unreachable block (ram,0x01f330bc) */
/* WARNING: Removing unreachable block (ram,0x01f32f77) */
/* WARNING: Removing unreachable block (ram,0x01f32f83) */
/* WARNING: Removing unreachable block (ram,0x01f32ad3) */
/* WARNING: Removing unreachable block (ram,0x01f32adf) */
/* WARNING: Removing unreachable block (ram,0x01f32c6f) */
/* WARNING: Removing unreachable block (ram,0x01f32c7b) */
/* WARNING: Removing unreachable block (ram,0x01f32df3) */
/* WARNING: Removing unreachable block (ram,0x01f32dff) */
/* WARNING: Removing unreachable block (ram,0x01f33388) */
/* WARNING: Removing unreachable block (ram,0x01f33391) */
/* WARNING: Removing unreachable block (ram,0x01f32a1c) */
/* WARNING: Removing unreachable block (ram,0x01f32a25) */
/* WARNING: Removing unreachable block (ram,0x01f32a75) */
/* WARNING: Removing unreachable block (ram,0x01f32a7e) */

void FUN_01f329a0(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[8];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[8] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x4a0))();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_01f333aa;
    FUN_00d50b00();
  }
  else if (local_48 == (longlong *)0x0) goto LAB_01f333aa;
  cVar5 = FUN_01d64c70();
  if (cVar5 == '\0') {
    local_38 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*local_38 + 0x18))();
    FUN_01d654e0();
    bVar3 = true;
  }
  else {
    FUN_01d64cb0();
    local_38 = local_48;
    if (local_48 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (longlong)&DAT_026846d0;
  plVar6[2] = (longlong)&DAT_02684a60;
  *(undefined1 *)(plVar6 + 3) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x34) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x3a) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x42) = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  *(undefined2 *)(plVar6 + 0xe) = 0;
  pcVar4 = DAT_026846e8;
  (*DAT_026846e8)();
  if (local_48 == plVar6) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    local_48 = plVar6;
  }
  lVar1 = DAT_02800048;
  if (DAT_02800048 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02800050;
  if (DAT_02800050 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02800058;
  if (DAT_02800058 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,0);
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (longlong)&DAT_026846d0;
  plVar6[2] = (longlong)&DAT_02684a60;
  *(undefined1 *)(plVar6 + 3) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x34) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x3a) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x42) = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  *(undefined2 *)(plVar6 + 0xe) = 0;
  (*pcVar4)();
  if (plVar6 == local_48) {
    FUN_00d50b20();
    plVar6 = local_48;
    lVar1 = DAT_02800060;
  }
  else {
    lVar1 = DAT_02800060;
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b20();
      lVar1 = DAT_02800060;
    }
  }
  DAT_02800060 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02800068;
  if (DAT_02800068 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02800070;
  if (DAT_02800070 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,1);
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (longlong)&DAT_026846d0;
  plVar7[2] = (longlong)&DAT_02684a60;
  *(undefined1 *)(plVar7 + 3) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x42) = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  *(undefined2 *)(plVar7 + 0xe) = 0;
  (*pcVar4)();
  if (plVar7 == plVar6) {
    FUN_00d50b20();
    plVar7 = plVar6;
    lVar1 = DAT_02800078;
  }
  else {
    lVar1 = DAT_02800078;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
      lVar1 = DAT_02800078;
    }
  }
  DAT_02800078 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02800080;
  if (DAT_02800080 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02800088;
  if (DAT_02800088 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,2);
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (longlong)&DAT_026846d0;
  plVar6[2] = (longlong)&DAT_02684a60;
  *(undefined1 *)(plVar6 + 3) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x34) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x3a) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x42) = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  *(undefined2 *)(plVar6 + 0xe) = 0;
  (*pcVar4)();
  if (plVar6 == plVar7) {
    FUN_00d50b20();
    plVar6 = plVar7;
    lVar1 = DAT_02800090;
  }
  else {
    lVar1 = DAT_02800090;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
      lVar1 = DAT_02800090;
    }
  }
  DAT_02800090 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02800098;
  if (DAT_02800098 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65120();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,3);
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (longlong)&DAT_026846d0;
  plVar7[2] = (longlong)&DAT_02684a60;
  *(undefined1 *)(plVar7 + 3) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x34) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x3a) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x42) = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  *(undefined2 *)(plVar7 + 0xe) = 0;
  (*pcVar4)();
  if (plVar7 == plVar6) {
    FUN_00d50b20();
    plVar7 = plVar6;
    lVar1 = DAT_028000a0;
  }
  else {
    lVar1 = DAT_028000a0;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
      lVar1 = DAT_028000a0;
    }
  }
  DAT_028000a0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027fff88;
  if (DAT_027fff88 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_028000a8;
  if (DAT_028000a8 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,4);
  local_48 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_48 = (longlong)&DAT_026846d0;
  local_48[2] = (longlong)&DAT_02684a60;
  *(undefined1 *)(local_48 + 3) = 0;
  *(undefined8 *)((longlong)local_48 + 0x1c) = 0;
  *(undefined8 *)((longlong)local_48 + 0x24) = 0;
  *(undefined8 *)((longlong)local_48 + 0x2c) = 0;
  *(undefined8 *)((longlong)local_48 + 0x34) = 0;
  *(undefined8 *)((longlong)local_48 + 0x3a) = 0;
  *(undefined8 *)((longlong)local_48 + 0x42) = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  *(undefined2 *)(local_48 + 0xe) = 0;
  (*pcVar4)();
  if (local_48 == plVar7) {
    FUN_00d50b20();
    local_48 = plVar7;
    lVar1 = DAT_028000b0;
  }
  else {
    lVar1 = DAT_028000b0;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
      lVar1 = DAT_028000b0;
    }
  }
  DAT_028000b0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d64eb0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_028000b8;
  if (DAT_028000b8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d65120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_028000c0;
  if (DAT_028000c0 != 0) {
    FUN_00d50b00();
  }
  uVar8 = FUN_01d65190();
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  FUN_01d5d7f0(uVar8,5);
  if ((bVar3) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f333aa:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



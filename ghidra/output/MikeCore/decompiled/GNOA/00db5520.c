// Function: FUN_00db5520
// Address: 00db5520
// Size: 2146 bytes
// Class: GNOA


void FUN_00db5520(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  undefined8 local_f0;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  undefined8 *local_60;
  char local_58 [8];
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RDI + 0x34) != 0) {
    return;
  }
  if (*(int *)(*(longlong *)(unaff_RDI + 0x18) + 0xc) == 0) {
    return;
  }
  FUN_00db98a0();
  iVar1 = *(int *)((longlong)local_60 + 0xc);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    FUN_00db32a0();
  }
  lVar2 = DAT_02782f78;
  if (DAT_02782f78 != 0) {
    FUN_00d50b00();
  }
  lVar7 = DAT_02782f90;
  if (DAT_02782f90 != 0) {
    FUN_00d50b00();
  }
  local_178 = lVar7;
  FUN_00083ea0(2,&local_178);
  FUN_0036bfe0();
  lVar4 = CONCAT71(uStack_6f,local_70);
  if (local_68 == '\0') {
    if (((lVar4 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (CONCAT71(uStack_6f,local_70) != 0))
    {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  local_60 = (undefined8 *)&DAT_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar2 = DAT_02702300;
  if (DAT_02702300 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar2;
  local_168 = '\x01';
  FUN_00d50b00();
  local_158 = '\0';
  local_160 = lVar4;
  FUN_00d40470(&local_160,&stack0xffffffffffffff18,3,3);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  puVar13 = local_60;
  pcVar11 = &local_70;
  if (local_58[0] != '\0') {
    pcVar11 = local_58;
  }
  local_70 = local_58[0];
  *pcVar11 = '\0';
  if ((local_58[0] != '\0') && (puVar13 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    bVar6 = true;
    uVar9 = 0;
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
    bVar6 = false;
  }
  local_f0 = uVar9;
  FUN_00db98a0();
  puVar12 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    bVar5 = true;
    puVar12 = (undefined8 *)0x0;
  }
  else {
    if (local_58[0] == '\0') {
      FUN_00d50b00();
      bVar5 = false;
      if ((local_58[0] == '\0') || (local_60 == (undefined8 *)0x0)) goto LAB_00db5843;
      FUN_00d50b20();
    }
    bVar5 = false;
  }
LAB_00db5843:
  *(undefined1 *)(unaff_RDI + 0x38) = 1;
  for (uVar10 = (ulonglong)*(uint *)((longlong)puVar12 + 0xc); 0 < (int)uVar10; uVar10 = uVar10 - 1)
  {
    (**(code **)(**(longlong **)(puVar12[2] + -8 + uVar10 * 8) + 0x368))();
  }
  FUN_00d403d0();
  local_150 = DAT_02782f88;
  if (DAT_02782f88 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  FUN_00d50b00();
  local_138 = '\0';
  local_140 = lVar4;
  FUN_00d40470(&local_140,&stack0xffffffffffffff28,3,3);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00db9870();
  lVar2 = CONCAT71(uStack_6f,local_70);
  if (local_68 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_58[0] = '\0';
  local_60 = (undefined8 *)lVar2;
  FUN_00db9820();
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  FUN_00db98a0();
  iVar1 = *(int *)((longlong)local_60 + 0xc);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    FUN_00db9870();
    puVar12 = local_60;
    if (local_58[0] == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_00db9820();
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_58[0] = '\0';
    local_60 = (undefined8 *)lVar2;
    FUN_00d21140();
    if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar8 = (longlong *)FUN_000679b0();
    (**(code **)(*plVar8 + 0x18))();
    plVar3 = *(longlong **)(unaff_RDI + 0x20);
    if (plVar3 == plVar8) {
      FUN_00d50b20();
    }
    else {
      *(longlong **)(unaff_RDI + 0x20) = plVar8;
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    FUN_00d23340();
    puVar12 = local_60;
    pcVar11 = local_58;
    if (local_58[0] == '\0') {
      pcVar11 = &local_70;
    }
    local_70 = local_58[0];
    *pcVar11 = '\0';
    if ((local_58[0] != '\0') && (puVar12 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x28);
    if ((local_70 != '\0') && (puVar12 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar12 == (undefined8 *)lVar2) {
      *(undefined8 *)(unaff_RDI + 0x28) = 0;
    }
  }
  FUN_00d23740();
  *(undefined1 *)(unaff_RDI + 0x38) = 0;
  FUN_00d403d0();
  local_130 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_00d50b00();
  local_118 = '\0';
  local_120 = lVar4;
  FUN_00d40470(&local_120,&stack0xffffffffffffff38,3,3);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_110 = DAT_026e0f70;
  if (DAT_026e0f70 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_00d50b00();
  local_f8 = '\0';
  local_100 = lVar4;
  FUN_00d40470(&local_100,&stack0xffffffffffffff48,3,3);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (!bVar5) {
    FUN_00d50b20();
  }
  if (!bVar6 && puVar13 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}



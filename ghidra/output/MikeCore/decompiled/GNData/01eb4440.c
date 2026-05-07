// Function: FUN_01eb4440
// Address: 01eb4440
// Size: 1440 bytes
// Class: GNData


void FUN_01eb4440(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  uint uVar8;
  bool bVar9;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  fVar1 = *(float *)((longlong)unaff_RDI + 0x1cc);
  fVar2 = *(float *)(unaff_RDI + 0x3a);
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_48 + 0x6c0))();
  if (cVar4 == '\0') {
    bVar9 = false;
  }
  else {
    lVar5 = FUN_00cafdf0();
    bVar9 = lVar5 != 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (uint)(fVar1 * fVar2);
  if (bVar9) {
    while( true ) {
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar3 = *(int *)((longlong)local_48 + 0xc);
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar3 <= (int)uVar8) break;
      (**(code **)(*unaff_RDI + 0x4a0))();
      FUN_00d23340();
      local_38[0] = local_40[0];
      pcVar6 = local_40;
      if (local_40[0] == '\0') {
        pcVar6 = local_38;
      }
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01e4cce0();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    while( true ) {
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar3 = *(int *)((longlong)local_48 + 0xc);
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((int)uVar8 <= iVar3) break;
      (**(code **)(*unaff_RDI + 0xaf8))();
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_01e4cb90();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    while( true ) {
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar3 = *(int *)((longlong)local_48 + 0xc);
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar3 <= (int)uVar8) break;
      (**(code **)(*unaff_RDI + 0x4a0))();
      FUN_00d23340();
      local_38[0] = local_40[0];
      pcVar6 = local_40;
      if (local_40[0] == '\0') {
        pcVar6 = local_38;
      }
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x4a0))();
      FUN_00d23340();
      local_38[0] = local_40[0];
      pcVar6 = local_40;
      if (local_40[0] == '\0') {
        pcVar6 = local_38;
      }
      *pcVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_48 + 0x478))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50130();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    while( true ) {
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar3 = *(int *)((longlong)local_48 + 0xc);
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((int)uVar8 <= iVar3) break;
      (**(code **)(*unaff_RDI + 0xaf8))();
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      (**(code **)(*unaff_RDI + 0x450))();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0x4a0))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_01dcb110();
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((int)uVar8 < 1) {
    if (local_48 == (longlong *)0x0) {
      return;
    }
  }
  else if (bVar9) {
    uVar7 = 0;
    do {
      FUN_01d0e530(uVar7 & 0xffffffff);
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
  else {
    uVar7 = 0;
    do {
      (**(code **)(**(longlong **)(local_48[2] + uVar7 * 8) + 0xa80))(uVar7 & 0xffffffff);
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
  }
  FUN_00d50b20();
  return;
}



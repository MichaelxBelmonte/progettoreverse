// Function: FUN_01d20ca0
// Address: 01d20ca0
// Size: 584 bytes
// Class: GNString


undefined8 * FUN_01d20ca0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  longlong local_60;
  char local_58;
  longlong local_40;
  
  lVar4 = *unaff_RSI;
  cVar5 = (char)unaff_RSI[1];
  bVar6 = cVar5 == '\0';
  bVar7 = lVar4 == 0;
  if (!bVar7 && !bVar6) {
    FUN_00d50b00();
  }
  cVar2 = FUN_01d526e0();
  if (cVar2 == '\0') goto LAB_01d20e2c;
  FUN_01d21380(DAT_02390124);
  local_40 = local_60;
  if (lVar4 == local_60) {
    local_40 = lVar4;
    if ((cVar5 == '\0') && (lVar4 != 0)) {
      cVar5 = '\x01';
      if (local_58 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    if (bVar7 || bVar6) goto LAB_01d20d8d;
    FUN_00d50b20();
    cVar5 = '\x01';
  }
  else if (bVar7 || bVar6) {
LAB_01d20d8d:
    cVar5 = '\x01';
  }
  else {
    FUN_00d50b20();
    cVar5 = '\x01';
  }
  FUN_01d21380(DAT_02390d34);
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_01d52660();
  lVar4 = local_40;
  if (local_60 != 0) {
    FUN_00d50b20();
  }
LAB_01d20e2c:
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_0267e0e8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  FUN_00d500e0();
  *(int *)(puVar3 + 3) = (int)param_1;
  *(int *)((longlong)puVar3 + 0x1c) = (int)((ulonglong)param_1 >> 0x20);
  FUN_01d21240();
  lVar1 = puVar3[2];
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    puVar3[2] = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d21240();
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((cVar5 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



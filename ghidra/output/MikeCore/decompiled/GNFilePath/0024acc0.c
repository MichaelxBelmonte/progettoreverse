// Function: FUN_0024acc0
// Address: 0024acc0
// Size: 1156 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x0024ad86) */
/* WARNING: Removing unreachable block (ram,0x0024ad8f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0024acc0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  bool bVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*unaff_RSI == 0) || (*param_2 == 0)) {
    FUN_0021a2c0();
    return;
  }
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar2 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      uVar10 = (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      local_78 = *param_2;
      local_70 = '\0';
      (**(code **)(&UNK_000016a0 + *local_48))(uVar10,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x98) == 0) {
        return;
      }
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = *(longlong *)(unaff_RDI + 0x98);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_68 = *param_2;
      local_60 = '\0';
      FUN_01c50580();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  lVar1 = DAT_026f6f08;
  if (DAT_026f6f08 != 0) {
    FUN_00d50b00();
  }
  dVar11 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar11 * DAT_023907c0);
  dVar11 = dVar11 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = 0xaaaaaaaaaaaaaaab;
  uVar12 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (uVar12 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar11 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_58 = lVar1;
  local_50 = '\0';
  FUN_000175c0(uVar12,&local_58);
  plVar2 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_40[0] = '\0';
    local_48 = plVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((plVar2 != (longlong *)0x0 & bVar3) == 0) {
    plVar2 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar2))();
    plVar8 = local_48;
    uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),local_40[0]);
    pcVar7 = local_38;
    if (local_40[0] != '\0') {
      pcVar7 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar7 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) {
      plVar8 = *(longlong **)(unaff_RDI + 0x90);
LAB_0024afdc:
      FUN_00d50b00();
    }
    else if (local_38[0] == '\0') goto LAB_0024afdc;
    (**(code **)(*plVar8 + 0x988))();
    bVar9 = *(int *)(local_58 + 0xc) == 0;
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    bVar9 = false;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (!bVar9) goto LAB_0024b12d;
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar2))();
  plVar8 = local_48;
  pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar10 >> 8),local_40[0]);
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(unaff_RDI + 0x90);
LAB_0024b089:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_0024b089;
  (**(code **)(*plVar8 + 0xa00))();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00cb1f10();
  FUN_00db3760();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0024b12d:
  FUN_0021a2c0();
  return;
}



// Function: FUN_01771ef0
// Address: 01771ef0
// Size: 848 bytes
// Class: GNInt


pthread_key_t FUN_01771ef0(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  pthread_key_t unaff_ESI;
  longlong unaff_RDI;
  pthread_key_t pVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_48 = CONCAT44(local_48._4_4_,param_1);
  pvVar2 = _pthread_getspecific(unaff_ESI);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar9 = (float)FUN_01779ec0();
  fVar10 = (float)local_48;
  local_48 = CONCAT44(local_48._4_4_,fVar9 + (float)local_48);
  pVar8 = (0.0 <= fVar10) + unaff_ESI;
  fVar10 = (float)FUN_017708f0();
  if ((*(char *)(unaff_RDI + 0x38) != '\0') && (pVar8 == 0)) {
    pVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc) - 1;
    local_48 = CONCAT44(local_48._4_4_,(float)local_48 + fVar10);
  }
  if (0 < (int)pVar8) {
    pvVar2 = _pthread_getspecific(pVar8 - 1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar9 = (float)FUN_01779ec0();
    if ((float)local_48 <= fVar9) {
      return 0xffffffff;
    }
  }
  if ((int)pVar8 < *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc)) {
    pvVar2 = _pthread_getspecific(pVar8);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar9 = (float)FUN_01779ec0();
    if (fVar9 <= (float)local_48) {
      return 0xffffffff;
    }
  }
  iVar1 = *(int *)(unaff_RDI + 0x48);
  if ((int)pVar8 <= iVar1) {
    FUN_00d64850();
    *(int *)(unaff_RDI + 0x48) = iVar1 + 1;
    FUN_00d64910();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x25ffd60;
  *puVar3 = &DAT_025ffd60;
  puVar3[7] = 0;
  puVar3[8] = 0;
  (*DAT_025ffd78)();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_01779ed0((float)local_48);
  FUN_01770f30(uVar11,pVar8);
  if (*(char *)(unaff_RDI + 0x38) != '\0') {
    FUN_00d23340();
    local_40[0] = local_50[0];
    pcVar4 = local_40;
    if (local_50[0] != '\0') {
      pcVar4 = local_50;
    }
    *pcVar4 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if ((pvVar2 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      local_48 = local_58;
    }
    else {
      local_48 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
    FUN_00d23310();
    pcVar4 = local_38;
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = pcVar4;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)pcVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar9 = (float)FUN_01779ec0();
    FUN_01779ed0(fVar10 + fVar9);
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return pVar8;
}



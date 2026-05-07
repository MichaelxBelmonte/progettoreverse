// Function: FUN_00391ff0
// Address: 00391ff0
// Size: 658 bytes
// Class: MDAsyncDocumentAdder

uint64_t FUN_00391ff0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  uint64_t uVar8;
  void* pVar9;
  char *pcVar10;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar11;
  uint64_t uVar12;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(this_ptr + 0x1f8) == '\0') {
    uVar8 = 0;
    goto LAB_00392271;
  }
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  lVar2 = local_48;
  pVar9 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_40[0]);
  pcVar10 = local_38;
  if (local_40[0] != '\0') {
    pcVar10 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar10 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
LAB_003921df:
    local_58 = *arg1;
    local_50 = '\0';
    uVar6 = FUN_0195c3c0();
    uVar8 = (uint64_t)uVar6;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01326de0();
    lVar1 = g_026f6f08;
    if (iVar5 != 3) goto LAB_003921df;
    if (g_026f6f08 != 0) {
      FUN_00d50b00();
    }
    dVar11 = (double)FUN_00e7d6f0();
    uVar8 = (uint64_t)(dVar11 * g_023907c0);
    dVar11 = dVar11 * g_023907c0 - g_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_40[0] == '\0') && (local_48 != 0)) &&
        (uVar12 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar4 = (byte)(((int64_t)dVar11 & (int64_t)uVar8 >> 0x3f | uVar8) / 3);
    local_68 = lVar1;
    local_60 = '\0';
    FUN_000175c0(uVar12,&local_68);
    lVar3 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_40[0] = '\0';
      local_48 = lVar3;
      bVar4 = FUN_00c70bc0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((uint64_t)lVar3 >> 8),lVar3 != 0 & bVar4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
LAB_00392271:
  return uVar8 & 0xffffffff;
}


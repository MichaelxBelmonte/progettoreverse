// Function: FUN_003a2600
// Address: 003a2600
// Size: 1149 bytes
// Class: MDMetaWindowController

uint32_t FUN_003a2600(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint32_t uVar4;
  int iVar5;
  uint64_t uVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t lVar11;
  double dVar12;
  uint64_t uVar13;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  uint32_t local_40;
  char local_38 [8];
  
  lVar1 = g_026f6de0;
  if (g_026f6de0 != 0) {
    FUN_00d50b00();
  }
  dVar12 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar12 * g_023907c0);
  dVar12 = dVar12 * g_023907c0 - g_023907c8;
  uVar13 = FUN_0071a120();
  if ((((local_58 == '\0') && (local_60 != 0)) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) &&
     (local_60 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar12 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_70 = lVar1;
  local_68[0] = '\0';
  FUN_000175c0(uVar13,&local_70);
  lVar11 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    local_58 = '\0';
    local_60 = lVar11;
    bVar3 = FUN_00c70bc0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_026f6f08;
  if ((lVar11 != 0 & bVar3) == 0) {
LAB_003a2a7a:
    uVar4 = 0;
  }
  else {
    if (g_026f6f08 != 0) {
      FUN_00d50b00();
    }
    dVar12 = (double)FUN_00e7d6f0();
    uVar6 = (uint64_t)(dVar12 * g_023907c0);
    pcVar9 = (char *)((int64_t)uVar6 >> 0x3f);
    uVar10 = (int64_t)(dVar12 * g_023907c0 - g_023907c8) & (uint64_t)pcVar9;
    uVar13 = FUN_0071a120();
    if ((((local_58 == '\0') && (local_60 != 0)) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    bVar3 = (byte)((uVar10 | uVar6) / 3);
    local_70 = lVar1;
    local_68[0] = '\0';
    FUN_000175c0(uVar13,&local_70);
    lVar11 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      local_58 = '\0';
      local_60 = lVar11;
      bVar3 = FUN_00c70bc0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((lVar11 != 0 & bVar3) == 0) {
      lVar1 = *arg1;
      if (lVar1 != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_40 = 0;
        local_48 = 0;
        local_50 = lVar1;
        if (0 < *(int *)(lVar1 + 0xc)) {
          lVar11 = 0;
          do {
            local_60 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar11 * 8);
            pvVar7 = _pthread_getspecific((void*)pcVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            lVar2 = local_70;
            local_38[0] = local_68[0];
            pcVar9 = local_38;
            pcVar8 = local_68;
            if (local_68[0] == '\0') {
              pcVar8 = pcVar9;
            }
            *pcVar8 = '\0';
            if ((local_68[0] != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              pvVar7 = _pthread_getspecific((void*)pcVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar5 = FUN_01326de0();
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
              if (iVar5 == 3) {
                FUN_001159b0();
                goto LAB_003a2a7a;
              }
            }
            lVar11 = lVar11 + 1;
            local_48 = CONCAT44(local_48._4_4_,(int)lVar11);
          } while ((int)lVar11 < *(int *)(lVar1 + 0xc));
        }
        FUN_001159b0();
      }
      uVar4 = FUN_019ec420();
    }
    else {
      uVar4 = FUN_019ec420();
    }
  }
  return uVar4;
}


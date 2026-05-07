// Function: FUN_0027a2c0
// Address: 0027a2c0
// Size: 1111 bytes
// Class: Unknown

void FUN_0027a2c0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  char cVar4;
  uint64_t uVar5;
  void *pvVar6;
  void* pVar7;
  bool bVar8;
  double dVar9;
  uint64_t uVar10;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_026f6fa0;
  if (g_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar5 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  pVar7 = 0xaaaaaaab;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar9 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_38 = '\0';
    local_40 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((lVar2 != 0 & bVar3) == 0) {
    FUN_013fb3a0();
    bVar8 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar8 = false;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (!bVar8) {
    FUN_013fb3a0();
    if (local_40 == 0) {
      cVar4 = '\0';
    }
    else {
      FUN_013fb3a0();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_0141bd30();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_013fb3a0();
      if (local_40 == 0) {
        cVar4 = '\0';
      }
      else {
        FUN_013fb3a0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_0141ba80();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_026f6f08;
      if (cVar4 != '\0') {
        if (g_026f6f08 != 0) {
          FUN_00d50b00();
        }
        FUN_00e7d6f0();
        uVar10 = FUN_0071a120();
        if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0'))
           && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        local_50 = lVar1;
        local_48 = '\0';
        FUN_000175c0(uVar10,&local_50);
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          local_38 = '\0';
          local_40 = lVar2;
          FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_01447a60();
        if (lVar1 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
  }
  FUN_01447a60();
  return;
}


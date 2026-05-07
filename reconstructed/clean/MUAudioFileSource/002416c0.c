// Function: FUN_002416c0
// Address: 002416c0
// Size: 999 bytes
// Class: MUAudioFileSource

uint64_t FUN_002416c0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  void *pvVar7;
  void* pVar8;
  undefined7 uVar9;
  int64_t this_ptr;
  double dVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qa;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_026f6de0;
  if (g_026f6de0 != 0) {
    FUN_00d50b00();
  }
  dVar10 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar10 * g_023907c0);
  dVar10 = dVar10 * g_023907c0 - g_023907c8;
  pVar8 = 0xaaaaaaab;
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar11 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar10 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
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
  uVar11 = FUN_00d50b20();
  uVar9 = (undefined7)((uint64_t)lVar2 >> 8);
  if (lVar1 != 0) {
    uVar11 = FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) != 0) {
    uVar6 = CONCAT71(uVar9,1);
    if (*(int *)(this_ptr + 0x198) == 2) goto LAB_002418bc;
    if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
      local_38 = '\0';
      local_40 = 0;
LAB_00241875:
      uVar6 = CONCAT71(uVar9,1);
    }
    else {
      uVar11 = FUN_006f3f00();
      if (local_40 == 0) goto LAB_00241875;
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_48 = '\0';
        local_50 = 0;
      }
      else {
        FUN_006f3f00();
      }
      uVar4 = FUN_0078cda0();
      uVar6 = (uint64_t)uVar4;
      uVar11 = extraout_XMM0_Qa;
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((char)uVar6 == '\0') {
      FUN_00239240(uVar11,0);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0024190d;
        }
      }
      else if (local_40 != 0) {
LAB_0024190d:
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_01326de0();
        lVar1 = g_026f6f08;
        uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
        if (iVar5 == 3) {
          if (g_026f6f08 != 0) {
            FUN_00d50b00();
          }
          dVar10 = (double)FUN_00e7d6f0();
          uVar6 = (uint64_t)(dVar10 * g_023907c0);
          dVar10 = dVar10 * g_023907c0 - g_023907c8;
          uVar11 = FUN_0071a120();
          if ((((local_38 == '\0') && (local_40 != 0)) &&
              (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            uVar11 = FUN_00d50b20();
          }
          bVar3 = (byte)(((int64_t)dVar10 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
          local_50 = lVar1;
          local_48 = '\0';
          FUN_000175c0(uVar11,&local_50);
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
          uVar6 = CONCAT71((int7)((uint64_t)lVar2 >> 8),lVar2 != 0 & bVar3);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        goto LAB_002418bc;
      }
    }
  }
  uVar6 = 0;
LAB_002418bc:
  return uVar6 & 0xffffffff;
}


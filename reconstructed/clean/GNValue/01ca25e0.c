// Function: FUN_01ca25e0
// Address: 01ca25e0
// Size: 742 bytes
// Class: GNValue

int64_t * FUN_01ca25e0(int64_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  void *pvVar3;
  uint64_t uVar4;
  undefined7 uVar6;
  undefined7 extraout_var;
  int64_t lVar5;
  void* pVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  uint32_t uVar9;
  int64_t lVar10;
  double dVar11;
  double extraout_XMM0_Qa;
  double local_68;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_68 = (double)FUN_012646c0();
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d23310();
  uVar6 = (undefined7)((uint64_t)uVar4 >> 8);
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
    uVar6 = extraout_var;
  }
  if (local_58 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (uint32_t)CONCAT71(uVar6,1);
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  local_48 = local_58;
  lVar5 = *arg1;
  if (*(int *)(lVar5 + 0xc) < 2) {
    uVar9 = 0;
    lVar8 = 0;
  }
  else {
    lVar10 = 1;
    lVar8 = 0;
    uVar9 = 0;
    do {
      pVar7 = (void*)param_1;
      lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar10 * 8);
      if (lVar8 == lVar5) {
        if (((char)uVar9 == '\0') && (lVar8 != 0)) {
          uVar9 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar9 == '\0') || (lVar8 == 0)) {
          uVar9 = 1;
          lVar8 = lVar5;
        }
        else {
          FUN_00d50b20();
          uVar9 = 1;
          lVar8 = lVar5;
        }
      }
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_012646c0();
      lVar5 = local_48;
      uVar1 = local_3c;
      if (local_68 < dVar11) {
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012646c0();
        local_68 = extraout_XMM0_Qa;
        if (local_48 == lVar8) {
          lVar5 = local_48;
          uVar1 = local_3c;
          if ((((char)uVar9 != '\0') && ((char)local_3c == '\0')) && (lVar8 != 0)) {
            local_3c = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
            FUN_00d50b00();
            lVar5 = local_48;
            uVar1 = local_3c;
          }
        }
        else {
          if (((char)uVar9 != '\0') && (lVar8 != 0)) {
            FUN_00d50b00();
          }
          lVar5 = lVar8;
          uVar1 = uVar9;
          if (((char)local_3c != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_3c = uVar1;
      local_48 = lVar5;
      lVar10 = lVar10 + 1;
      lVar5 = *arg1;
      param_1 = (int64_t)*(int *)(lVar5 + 0xc);
    } while (lVar10 < param_1);
  }
  lVar5 = local_48;
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar9 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}


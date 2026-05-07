// Function: FUN_01266b80
// Address: 01266b80
// Size: 807 bytes
// Class: MUSampledFunction

int64_t * FUN_01266b80(int64_t param_1)

{
  uint32_t uVar1;
  char *pcVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  undefined7 uVar8;
  undefined7 extraout_var;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar10;
  int64_t lVar11;
  double dVar12;
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
  lVar6 = local_58;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    lVar6 = *(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
  }
  local_68 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_00d23310();
  uVar8 = (undefined7)((uint64_t)uVar5 >> 8);
  pcVar2 = local_50;
  if (local_50[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar2 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_var;
  }
  if (local_58 == 0) {
    local_3c = 0;
  }
  else {
    local_3c = (uint32_t)CONCAT71(uVar8,1);
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  local_48 = local_58;
  lVar6 = *arg1;
  if (*(int *)(lVar6 + 0xc) < 2) {
    uVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar11 = 1;
    lVar4 = 0;
    uVar10 = 0;
    do {
      pVar9 = (void*)param_1;
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar11 * 8);
      if (lVar4 == lVar6) {
        if (((char)uVar10 == '\0') && (lVar4 != 0)) {
          uVar10 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar10 == '\0') || (lVar4 == 0)) {
          uVar10 = 1;
          lVar4 = lVar6;
        }
        else {
          FUN_00d50b20();
          uVar10 = 1;
          lVar4 = lVar6;
        }
      }
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        dVar12 = *(double *)(lVar4 + 0xe8) + *(double *)(lVar4 + 0xf0);
      }
      else {
        lVar6 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        dVar12 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      lVar6 = local_48;
      uVar1 = local_3c;
      if (local_68 < dVar12) {
        pvVar3 = _pthread_getspecific(pVar9);
        lVar7 = lVar4;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          lVar7 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        local_68 = *(double *)(lVar7 + 0xe8) + *(double *)(lVar7 + 0xf0);
        if (local_48 == lVar4) {
          lVar6 = local_48;
          uVar1 = local_3c;
          if ((((char)uVar10 != '\0') && ((char)local_3c == '\0')) && (lVar4 != 0)) {
            local_3c = (uint32_t)CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
            FUN_00d50b00();
            lVar6 = local_48;
            uVar1 = local_3c;
          }
        }
        else {
          if (((char)uVar10 != '\0') && (lVar4 != 0)) {
            FUN_00d50b00();
          }
          lVar6 = lVar4;
          uVar1 = uVar10;
          if (((char)local_3c != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_3c = uVar1;
      local_48 = lVar6;
      lVar11 = lVar11 + 1;
      lVar6 = *arg1;
      param_1 = (int64_t)*(int *)(lVar6 + 0xc);
    } while (lVar11 < param_1);
  }
  lVar6 = local_48;
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar10 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}


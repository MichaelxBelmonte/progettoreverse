// Function: FUN_01266770
// Address: 01266770
// Size: 816 bytes
// Class: MUSampledFunction

int64_t * FUN_01266770(int64_t param_1)

{
  double *pdVar1;
  int64_t lVar2;
  uint32_t uVar3;
  char *pcVar4;
  void *pvVar5;
  int64_t lVar6;
  uint64_t uVar7;
  undefined7 uVar8;
  undefined7 extraout_var;
  void* pVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  uint32_t uVar11;
  int64_t lVar12;
  double local_68;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint32_t local_3c;
  char local_38 [8];
  
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar4 = local_50;
  if (local_50[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    local_68 = *(double *)(local_58 + 0xe8);
  }
  else {
    local_68 = *(double *)
                (*(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                0xe8);
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00d23310();
  uVar8 = (undefined7)((uint64_t)uVar7 >> 8);
  pcVar4 = local_50;
  if (local_50[0] == '\0') {
    pcVar4 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar4 = '\0';
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
    uVar11 = 0;
    lVar10 = 0;
  }
  else {
    lVar12 = 1;
    lVar10 = 0;
    uVar11 = 0;
    do {
      pVar9 = (void*)param_1;
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar12 * 8);
      if (lVar10 == lVar6) {
        if (((char)uVar11 == '\0') && (lVar10 != 0)) {
          uVar11 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if (((char)uVar11 == '\0') || (lVar10 == 0)) {
          uVar11 = 1;
          lVar10 = lVar6;
        }
        else {
          FUN_00d50b20();
          uVar11 = 1;
          lVar10 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        lVar6 = local_48;
        uVar3 = local_3c;
        if (*(double *)(lVar10 + 0xe8) <= local_68 && local_68 != *(double *)(lVar10 + 0xe8))
        goto LAB_012669a6;
      }
      else {
        pdVar1 = (double *)
                 (*(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                 0xe8);
        lVar6 = local_48;
        uVar3 = local_3c;
        if (*pdVar1 <= local_68 && local_68 != *pdVar1) {
LAB_012669a6:
          pvVar5 = _pthread_getspecific(pVar9);
          if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            local_68 = *(double *)(lVar10 + 0xe8);
            lVar2 = lVar10;
          }
          else {
            lVar2 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            local_68 = *(double *)(lVar2 + 0xe8);
          }
          if (local_48 == lVar10) {
            lVar6 = local_48;
            uVar3 = local_3c;
            if ((((char)uVar11 != '\0') && ((char)local_3c == '\0')) && (lVar10 != 0)) {
              local_3c = (uint32_t)CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
              FUN_00d50b00();
              lVar6 = local_48;
              uVar3 = local_3c;
            }
          }
          else {
            if (((char)uVar11 != '\0') && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            lVar6 = lVar10;
            uVar3 = uVar11;
            if (((char)local_3c != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      local_3c = uVar3;
      local_48 = lVar6;
      lVar12 = lVar12 + 1;
      lVar6 = *arg1;
      param_1 = (int64_t)*(int *)(lVar6 + 0xc);
    } while (lVar12 < param_1);
  }
  lVar6 = local_48;
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_3c == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar11 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}


// Function: FUN_00d78060
// Address: 00d78060
// Size: 1643 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_00d78060(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  lVar4 = local_40;
  FUN_00d747b0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if ((*(int64_t *)(arg1 + 0x58) == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 == 0)) {
    local_40 = g_0277e9b0;
    if (g_0277e9b0 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    FUN_00d21140();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
LAB_00d78198:
    bVar3 = false;
LAB_00d7819e:
    local_48 = 0;
  }
  else {
    if (*(int64_t *)(arg1 + 0x28) == 0) goto LAB_00d78198;
    lVar1 = *(int64_t *)(arg1 + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c85000();
    local_48 = local_40;
    if (local_40 == 0) {
      local_48 = 0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_0277e9b8;
    if (local_48 == 0) {
      if (g_0277e9b8 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\0';
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00d7819e;
    }
  }
  if (((*(int64_t *)(arg1 + 0x50) != 0) && (iVar6 = FUN_00d8c7a0(), iVar6 != 0)) &&
     (local_48 != 0)) {
    lVar1 = *(int64_t *)(arg1 + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_0277e9c0;
    if (local_40 == 0) {
      if (g_0277e9c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\0';
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = *(int64_t *)(arg1 + 0x50);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00c84370();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0277e9c8;
      if (local_40 == 0) {
        if (g_0277e9c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = lVar1;
        local_38 = '\0';
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  lVar1 = g_0277e9d0;
  if ((*(char *)(arg1 + 0x68) != '\0') && (*(char *)(arg1 + 0x69) == '\0')) {
    if (g_0277e9d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_48 == 0) {
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  FUN_00d77be0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00d785ef;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00d785ef;
  lVar1 = g_0277e9d8;
  if ((*(char *)(arg1 + 0x68) != '\0') && (*(char *)(local_40 + 0x68) != '\0')) {
    if (g_0277e9d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(local_40 + 0x50) == 0) {
LAB_00d78483:
    lVar1 = g_0277e9e0;
    if (g_0277e9e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    lVar1 = *(int64_t *)(local_40 + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar6 = FUN_00d8c7a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar6 == 0) goto LAB_00d78483;
  }
  if (*(int64_t *)(local_40 + 0x50) == 0) {
LAB_00d78544:
    lVar1 = g_0277e9e8;
    if (g_0277e9e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    plVar2 = *(int64_t **)(local_40 + 0x50);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar1 = *(int64_t *)(arg1 + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar2 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (cVar5 == '\0') goto LAB_00d78544;
  }
  lVar1 = g_0277e9f0;
  if ((*(char *)(arg1 + 0x68) != '\0') && (*(char *)(local_40 + 0x69) != '\0')) {
    if (g_0277e9f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00d785ef:
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  if (bVar3) {
    FUN_00d50b20();
  }
  return this_ptr;
}


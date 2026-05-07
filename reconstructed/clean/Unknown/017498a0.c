// Function: FUN_017498a0
// Address: 017498a0
// Size: 1271 bytes
// Class: Unknown

uint64_t FUN_017498a0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void* pVar9;
  uint *puVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t *this_ptr;
  uint uVar13;
  uint64_t uVar14;
  uint64_t local_68;
  byte local_58;
  uint64_t local_50;
  char local_48;
  char local_3c;
  uint64_t local_38;
  
  lVar8 = this_ptr[0xb];
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736c50();
  uVar7 = (**(code **)(*this_ptr + 0x370))();
  local_68 = uVar7;
  if (lVar8 != 0) {
    local_68 = FUN_00d50b20();
  }
  uVar13 = 0;
  puVar10 = &g_02411e30;
  local_38 = 0;
  bVar1 = false;
  do {
    if (uVar13 < 4) {
      local_68 = (uint64_t)*puVar10;
    }
    uVar11 = local_68;
    iVar5 = (**(code **)(*this_ptr + 0x378))();
    if (iVar5 == -1000000) {
LAB_01749b36:
      local_3c = '\0';
      local_58 = 0;
    }
    else {
      FUN_01740240();
      if (local_50 == local_38) {
        if ((!bVar1) && (local_50 != 0)) {
          uVar12 = local_38;
          bVar2 = true;
          if (local_48 != '\0') goto joined_r0x01749a55;
          FUN_00d50b00();
LAB_01749a2b:
          bVar1 = true;
        }
        uVar12 = local_38;
        bVar2 = bVar1;
        if ((local_48 != '\0') && (uVar12 = local_38, local_50 != 0)) {
          FUN_00d50b20();
          uVar12 = local_38;
        }
      }
      else {
        uVar12 = local_50;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar1) && (local_38 != 0)) {
            FUN_00d50b20();
            local_38 = local_50;
            goto LAB_01749a2b;
          }
        }
        else {
          bVar2 = true;
          if ((bVar1) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
joined_r0x01749a55:
      bVar1 = bVar2;
      uVar11 = uVar12;
      if (uVar12 == 0) {
        local_38 = 0;
        goto LAB_01749b36;
      }
      pvVar6 = _pthread_getspecific((void*)uVar12);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        uVar11 = uVar12;
      }
      local_3c = FUN_01739620();
      pvVar6 = _pthread_getspecific((void*)uVar11);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        uVar11 = uVar12;
      }
      local_58 = FUN_01739840();
      local_38 = uVar12;
    }
    iVar5 = (**(code **)(*this_ptr + 0x378))();
    cVar3 = '\0';
    if (iVar5 == -1000000) {
      bVar4 = 0;
      uVar14 = (uint64_t)((int)local_68 + (int)uVar7 + 1);
    }
    else {
      FUN_01740240();
      if (local_50 == local_38) {
        bVar2 = bVar1;
        if ((bVar1) || (local_50 == 0)) {
joined_r0x01749c0c:
          uVar12 = local_38;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          uVar12 = local_38;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01749bf8;
          }
        }
      }
      else {
        uVar12 = local_50;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar1) && (local_38 != 0)) {
            FUN_00d50b20();
            local_38 = local_50;
LAB_01749bf8:
            bVar2 = true;
            goto joined_r0x01749c0c;
          }
        }
        else {
          bVar2 = true;
          if ((bVar1) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar14 = local_50;
      bVar1 = bVar2;
      if (uVar12 == 0) {
        local_38 = 0;
        cVar3 = '\0';
        bVar4 = 0;
      }
      else {
        pvVar6 = _pthread_getspecific((void*)uVar11);
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          uVar11 = uVar12;
        }
        pVar9 = (void*)uVar11;
        cVar3 = FUN_01739620();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        bVar4 = FUN_01739840();
        local_38 = uVar12;
      }
    }
    uVar11 = CONCAT71((int7)(uVar14 >> 8),1);
    if ((local_3c != '\0') && (cVar3 == '\0')) goto LAB_01749d81;
    if (local_3c == '\0' && cVar3 != '\0') break;
    if ((local_3c != '\0') && (cVar3 != '\0')) {
      if ((byte)(local_58 ^ 1 | bVar4) != 1) goto LAB_01749d81;
      if ((byte)(local_58 | bVar4 ^ 1) != 1) break;
    }
    uVar13 = uVar13 + 1;
    puVar10 = puVar10 + 1;
  } while (uVar13 != 4);
  uVar11 = 0;
LAB_01749d81:
  if ((bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return uVar11 & 0xffffffff;
}


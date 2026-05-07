// Function: FUN_00368ec0
// Address: 00368ec0
// Size: 1514 bytes
// Class: MDMetaDocumentController

void FUN_00368ec0(int64_t *param_1,int64_t *param_2,int param_3,int param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int local_78;
  int local_74;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int local_58;
  uint64_t local_54;
  
  local_a8 = param_2;
  local_a0 = param_1;
  local_78 = param_3;
  local_74 = param_4;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  lVar2 = local_70;
  if (local_70 == 0) {
    bVar4 = false;
    lVar9 = 0;
  }
  else {
    if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
    iVar10 = 0;
    while( true ) {
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_0124a860();
      if (iVar5 <= iVar10) break;
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = lVar2;
      local_90 = '\0';
      iVar5 = FUN_01240ab0();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (iVar5 < local_78) {
        lVar9 = *local_a8;
        uVar1 = *(uint *)(lVar9 + 0x18);
        lVar11 = (int64_t)(int)uVar1;
        uVar3 = uVar1 + 3;
        if (-1 < lVar11) {
          uVar3 = uVar1;
        }
        param_1 = (int64_t *)(uint64_t)uVar3;
        if (3 < lVar11) {
          param_1 = (int64_t *)(uint64_t)(uint)((int)uVar3 >> 2);
          lVar8 = 0;
          do {
            if (*(int *)(*(int64_t *)(lVar9 + 0x10) + lVar8 * 4) == iVar5) goto LAB_00368f70;
            lVar8 = lVar8 + 1;
          } while ((int)uVar3 >> 2 != (uint)lVar8);
        }
        FUN_00c8e340(param_1,1);
        *(int *)(*(int64_t *)(lVar9 + 0x10) + lVar11) = iVar5;
      }
LAB_00368f70:
      iVar10 = iVar10 + 1;
    }
    bVar4 = true;
    lVar9 = lVar2;
  }
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  lVar11 = local_70;
  if (local_70 == lVar9) {
    lVar11 = lVar9;
    if ((lVar2 != 0) || (local_70 == 0)) goto joined_r0x003694c1;
    bVar4 = true;
    if (local_68 == '\0') {
      FUN_00d50b00();
      goto LAB_003691a8;
    }
  }
  else if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    bVar4 = true;
    if (lVar2 != 0 && lVar9 != 0) {
      FUN_00d50b20();
      lVar9 = lVar11;
LAB_003691a8:
      bVar4 = true;
      lVar11 = lVar9;
    }
joined_r0x003694c1:
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar4 = true;
    if (lVar2 != 0 && lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  pVar7 = (void*)param_1;
  if (lVar11 != 0) {
    iVar10 = 0;
    while( true ) {
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_0124a860();
      pVar7 = (void*)param_1;
      if (iVar5 <= iVar10) break;
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = '\0';
      local_88 = lVar11;
      iVar5 = FUN_01240ab0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (iVar5 < local_74) {
        lVar2 = *local_a0;
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar9 = (int64_t)(int)uVar1;
        uVar3 = uVar1 + 3;
        if (-1 < lVar9) {
          uVar3 = uVar1;
        }
        param_1 = (int64_t *)(uint64_t)uVar3;
        if (3 < lVar9) {
          param_1 = (int64_t *)(uint64_t)(uint)((int)uVar3 >> 2);
          lVar8 = 0;
          do {
            if (*(int *)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 4) == iVar5) goto LAB_003691e0;
            lVar8 = lVar8 + 1;
          } while ((int)uVar3 >> 2 != (uint)lVar8);
        }
        FUN_00c8e340(param_1,1);
        *(int *)(*(int64_t *)(lVar2 + 0x10) + lVar9) = iVar5;
      }
LAB_003691e0:
      iVar10 = iVar10 + 1;
    }
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar2 = local_70;
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_00369458;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == 0) goto LAB_00369458;
  local_68 = '\0';
  local_70 = 0;
  local_60 = lVar2;
  local_54 = 0;
  for (lVar9 = 0; local_58 = (int)lVar9, local_58 < *(int *)(lVar2 + 0xc); lVar9 = lVar9 + 1) {
    local_70 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar9 * 8);
    local_c8 = *local_a8;
    local_c0 = 0;
    local_b8 = *local_a0;
    local_b0 = 0;
    FUN_00368ec0(&local_b8,&local_c8,local_78,local_74);
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_00369458:
  if ((bVar4) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return;
}


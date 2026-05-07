// Function: FUN_01b06d40
// Address: 01b06d40
// Size: 1412 bytes
// Class: GNFilePath

void FUN_01b06d40(int *param_1,float *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  void* pVar4;
  uint uVar5;
  int *piVar6;
  float *arg1;
  int64_t this_ptr;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_74;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  uint64_t uVar7;
  
  if (((*(int64_t *)(this_ptr + 0x1d0) != 0) &&
      (*(int *)(*(int64_t *)(this_ptr + 0x1d0) + 0xc) != 0)) &&
     (*(char *)(this_ptr + 0x1b8) != '\0')) {
    piVar6 = param_1;
    pvVar3 = _pthread_getspecific((void*)param_1);
    pVar4 = (void*)piVar6;
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01770c70();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pVar4 = *(int *)(this_ptr + 0x1bc) / 2;
    uVar7 = (uint64_t)pVar4;
    local_74 = (float)(int)pVar4;
    fVar9 = local_74;
    if (1 < iVar2) {
      iVar8 = 1;
      do {
        pvVar3 = _pthread_getspecific((void*)uVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        pvVar3 = _pthread_getspecific((void*)uVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01740240();
        if (local_70 == 0) {
          cVar1 = '\0';
        }
        else {
          pvVar3 = _pthread_getspecific((void*)uVar7);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01740240();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          cVar1 = FUN_00d23d70();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          *param_1 = iVar8;
          local_74 = fVar9;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
      uVar5 = *(int *)(this_ptr + 0x1bc) / 2;
      uVar7 = (uint64_t)uVar5;
      fVar9 = (float)(int)uVar5;
      iVar8 = -1;
      do {
        pvVar3 = _pthread_getspecific((void*)uVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar10 = (float)FUN_01742280();
        pvVar3 = _pthread_getspecific((void*)uVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01740240();
        if (local_70 == 0) {
          cVar1 = '\0';
        }
        else {
          pvVar3 = _pthread_getspecific((void*)uVar7);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01740240();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          cVar1 = FUN_00d23d70();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        pVar4 = (void*)uVar7;
        if (cVar1 != '\0') {
          *param_3 = iVar8;
          fVar9 = fVar10;
          break;
        }
        iVar8 = iVar8 + -1;
      } while (iVar2 + iVar8 != 0);
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar10 = (float)FUN_01742280();
    *arg1 = local_74 - fVar10;
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar10 = (float)FUN_01742280();
    fVar9 = fVar9 - fVar10;
    if (0.0 < fVar9) {
      do {
        fVar9 = fVar9 - (float)*(int *)(this_ptr + 0x1bc);
      } while (0.0 < fVar9);
    }
    *param_2 = fVar9;
  }
  return;
}


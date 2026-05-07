// Function: FUN_01b06d40
// Address: 01b06d40
// Size: 1412 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x01b06fa9) */
/* WARNING: Removing unreachable block (ram,0x01b06fb2) */
/* WARNING: Removing unreachable block (ram,0x01b07189) */
/* WARNING: Removing unreachable block (ram,0x01b07192) */

void FUN_01b06d40(int *param_1,float *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  uint uVar5;
  int *piVar6;
  float *unaff_RSI;
  longlong unaff_RDI;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_74;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  ulonglong uVar7;
  
  if (((*(longlong *)(unaff_RDI + 0x1d0) != 0) &&
      (*(int *)(*(longlong *)(unaff_RDI + 0x1d0) + 0xc) != 0)) &&
     (*(char *)(unaff_RDI + 0x1b8) != '\0')) {
    piVar6 = param_1;
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    pVar4 = (pthread_key_t)piVar6;
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
    pVar4 = *(int *)(unaff_RDI + 0x1bc) / 2;
    uVar7 = (ulonglong)pVar4;
    local_74 = (float)(int)pVar4;
    fVar9 = local_74;
    if (1 < iVar2) {
      iVar8 = 1;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01740240();
        if (local_70 == 0) {
          cVar1 = '\0';
        }
        else {
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
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
      uVar5 = *(int *)(unaff_RDI + 0x1bc) / 2;
      uVar7 = (ulonglong)uVar5;
      fVar9 = (float)(int)uVar5;
      iVar8 = -1;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar10 = (float)FUN_01742280();
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01740240();
        if (local_70 == 0) {
          cVar1 = '\0';
        }
        else {
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar7);
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
        pVar4 = (pthread_key_t)uVar7;
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
    *unaff_RSI = local_74 - fVar10;
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar10 = (float)FUN_01742280();
    fVar9 = fVar9 - fVar10;
    if (0.0 < fVar9) {
      do {
        fVar9 = fVar9 - (float)*(int *)(unaff_RDI + 0x1bc);
      } while (0.0 < fVar9);
    }
    *param_2 = fVar9;
  }
  return;
}



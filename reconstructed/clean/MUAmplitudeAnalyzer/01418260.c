// Function: FUN_01418260
// Address: 01418260
// Size: 631 bytes
// Class: MUAmplitudeAnalyzer

void FUN_01418260(void* param_1,uint64_t param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t this_ptr;
  int iVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qa;
  int64_t *local_58;
  char local_50;
  
  pVar7 = param_1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_0124c6a0();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      uVar11 = FUN_00d50b00();
      goto LAB_01418303;
    }
LAB_014183a2:
    bVar1 = true;
  }
  else {
    if (local_58 == (int64_t *)0x0) goto LAB_014183a2;
LAB_01418303:
    cVar2 = (**(code **)(*local_58 + 0x3c8))(uVar11,param_1);
    if (cVar2 != '\0') {
      FUN_00ae96c0(extraout_XMM0_Qa,param_1);
      iVar3 = FUN_013fbeb0();
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          uVar11 = param_2;
          (**(code **)(*local_58 + 0x3d8))(param_2,iVar8,param_1);
          pVar7 = (void*)uVar11;
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
      }
      (**(code **)(g_02786500 + 0x20))(g_02390124 / (float)iVar3);
      bVar1 = false;
      goto LAB_01418473;
    }
    bVar1 = false;
  }
  plVar9 = *(int64_t **)(this_ptr + 0x60);
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x60);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  plVar10 = *(int64_t **)(this_ptr + 0x60);
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    plVar10 = *(int64_t **)(this_ptr + 0x60);
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
  }
  uVar4 = (**(code **)(*plVar10 + 0x3a0))();
  pVar7 = 0;
  (**(code **)(*plVar9 + 0x388))(0,(int)g_0238fee8,uVar4,param_2);
LAB_01418473:
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124c620();
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}


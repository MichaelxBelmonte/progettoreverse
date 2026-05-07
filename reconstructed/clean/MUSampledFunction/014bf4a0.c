// Function: FUN_014bf4a0
// Address: 014bf4a0
// Size: 1089 bytes
// Class: MUSampledFunction

void FUN_014bf4a0(void* param_1)

{
  void*puVar1;
  void*puVar2;
  float fVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t lVar6;
  void*puVar7;
  int iVar8;
  void *pvVar9;
  void*puVar10;
  int64_t lVar11;
  int64_t lVar12;
  void* pVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint uVar16;
  uint64_t uVar17;
  int64_t this_ptr;
  int64_t local_40;
  char local_38;
  
  lVar12 = *(int64_t *)(this_ptr + 0x88);
  if (lVar12 == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x48) == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *(int64_t *)(this_ptr + 0x48);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb920();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  iVar5 = *(int *)(local_40 + 0x18);
  iVar8 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  if (iVar5 < 4) {
LAB_014bf8a0:
    if (local_40 == 0) goto LAB_014bf8ae;
  }
  else {
    fVar3 = **(float **)(local_40 + 0x10);
    if (fVar3 < g_023b4df0) {
      if (g_023b4df0 <= fVar3) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        do {
          if ((uint64_t)(uint)(iVar8 >> 2) - 1 == uVar17) goto LAB_014bf8a0;
          lVar11 = uVar17 + 1;
          uVar17 = uVar17 + 1;
        } while ((*(float **)(local_40 + 0x10))[lVar11] < g_023b4df0);
      }
      uVar16 = (uint)uVar17;
      uVar17 = uVar17 & 0xffffffff;
      uVar4 = *(void*)(*(int64_t *)(local_40 + 0x10) + uVar17 * 4);
      FUN_00c8e4f0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (uVar16 != 0) {
        lVar11 = *(int64_t *)(local_40 + 0x10);
        if (uVar16 < 8) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar17 - (uVar16 & 7);
          uVar15 = 0;
          do {
            puVar2 = (void*)(lVar11 + uVar15 * 4);
            *puVar2 = uVar4;
            puVar2[1] = uVar4;
            puVar2[2] = uVar4;
            puVar2[3] = uVar4;
            puVar2 = (void*)(lVar11 + 0x10 + uVar15 * 4);
            *puVar2 = uVar4;
            puVar2[1] = uVar4;
            puVar2[2] = uVar4;
            puVar2[3] = uVar4;
            uVar15 = uVar15 + 8;
          } while (uVar14 != uVar15);
          if ((uint64_t)(uVar16 & 7) == 0) goto LAB_014bf72e;
        }
        do {
          *(void*)(lVar11 + uVar14 * 4) = uVar4;
          uVar14 = uVar14 + 1;
        } while (uVar17 != uVar14);
      }
LAB_014bf72e:
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(puVar10 + 7) = 0;
      *(void*)((int64_t)puVar10 + 0x3c) = 0;
      *(void*)(puVar10 + 8) = 0;
      pVar13 = 0x25dc9e8;
      *puVar10 = &g_025dc9e8;
      puVar10[9] = 0;
      puVar10[10] = 0;
      (*g_025dca00)();
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(pVar13);
      if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      FUN_013eb950((int)*(void*)(lVar12 + 0x50));
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb890();
      puVar1 = (void*)(this_ptr + 0x88);
      if ((void*)*puVar1 != puVar10) {
        FUN_00d64850();
        puVar7 = (void*)*puVar1;
        if (puVar7 != puVar10) {
          FUN_00d50b00();
          *puVar1 = puVar10;
          if (puVar7 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      goto LAB_014bf8a0;
    }
  }
  FUN_00d50b20();
LAB_014bf8ae:
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


// Function: FUN_0173e520
// Address: 0173e520
// Size: 1365 bytes
// Class: Unknown

void FUN_0173e520(void* param_1,uint64_t param_2,size_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  void*puVar10;
  int iVar11;
  void*puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int64_t *this_ptr;
  int64_t lVar16;
  float fVar17;
  float fVar18;
  int local_40;
  uint32_t uStack_3c;
  char local_38;
  
  lVar1 = this_ptr[0xc];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770f00();
  lVar3 = CONCAT44(uStack_3c,local_40);
  if ((((local_38 == '\0') && (lVar3 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (CONCAT44(uStack_3c,local_40) != 0)) {
    FUN_00d50b20();
  }
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &g_025f0d98;
  *puVar10 = &g_025f0d98;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  (*g_025f0db0)();
  FUN_00c8e690();
  puVar4 = (void*)CONCAT44(uStack_3c,local_40);
  if (((local_38 == '\0') && (puVar4 != (void*)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (CONCAT44(uStack_3c,local_40) != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(puVar4 + 0x18)) {
    puVar12 = puVar4;
    _memset_pattern16(puVar4,(void *)((uint64_t)((*(uint *)(puVar4 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  FUN_00c8e690();
  lVar5 = CONCAT44(uStack_3c,local_40);
  if (((local_38 == '\0') && (lVar5 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (CONCAT44(uStack_3c,local_40) != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar7 = 0;
  while( true ) {
    ___bzero();
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar16 = 0;
      do {
        lVar2 = this_ptr[0xb];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific((void*)puVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_01737960();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          (**(code **)(*this_ptr + 0x3a0))();
          iVar8 = FUN_00e7d780();
          iVar8 = iVar8 % 100;
          iVar11 = 0;
          if (0 < iVar8) {
            iVar11 = iVar8;
          }
          uVar13 = (uint)(iVar11 - iVar8 != 0);
          puVar12 = (void*)
                    (uint64_t)((((iVar11 - iVar8) - uVar13) / 100 + uVar13) * 100 + iVar8);
          fVar17 = *(float *)(*(int64_t *)(puVar4 + 0x10) + lVar16 * 4);
          lVar2 = *(int64_t *)(lVar5 + 0x10);
          *(float *)(lVar2 + (int64_t)puVar12 * 4) =
               *(float *)(lVar2 + (int64_t)puVar12 * 4) + fVar17;
          *(float *)(lVar2 + 400 + (int64_t)puVar12 * 4) =
               *(float *)(lVar2 + 400 + (int64_t)puVar12 * 4) + fVar17;
          *(float *)(lVar2 + 800 + (int64_t)puVar12 * 4) =
               fVar17 + *(float *)(lVar2 + 800 + (int64_t)puVar12 * 4);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(lVar3 + 0xc));
    }
    puVar12 = (void*)0x0;
    FUN_015c1480(g_02394240,300);
    fVar17 = (float)FUN_015b32a0(g_02391074,&local_40);
    if ((fVar17 == g_0239424c) && (!NAN(fVar17) && !NAN(g_0239424c))) break;
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar16 = 0;
      do {
        lVar2 = this_ptr[0xb];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific((void*)puVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_01737960();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          (**(code **)(*this_ptr + 0x3a0))();
          iVar8 = FUN_00e7d780();
          iVar8 = iVar8 % 100;
          iVar11 = 0;
          if (0 < iVar8) {
            iVar11 = iVar8;
          }
          uVar13 = (uint)(iVar11 - iVar8 != 0);
          iVar8 = (((iVar11 - iVar8) - uVar13) / 100 + uVar13) * 100 + iVar8;
          uVar14 = local_40 - iVar8;
          uVar13 = -uVar14;
          if (0 < (int)uVar14) {
            uVar13 = uVar14;
          }
          if (9999 < uVar13) {
            uVar13 = 10000;
          }
          uVar14 = uVar14 - 100;
          uVar15 = -uVar14;
          if (0 < (int)uVar14) {
            uVar15 = uVar14;
          }
          if ((int)uVar13 <= (int)uVar15) {
            uVar15 = uVar13;
          }
          uVar14 = (local_40 - iVar8) - 200;
          uVar13 = -uVar14;
          if (0 < (int)uVar14) {
            uVar13 = uVar14;
          }
          if ((int)uVar15 <= (int)uVar13) {
            uVar13 = uVar15;
          }
          puVar12 = (void*)(uint64_t)uVar13;
          fVar18 = (float)(int)(0x32 - uVar13) / g_02394240;
          fVar17 = 0.0;
          if (0.0 <= fVar18) {
            fVar17 = fVar18;
          }
          *(float *)(*(int64_t *)(puVar4 + 0x10) + lVar16 * 4) =
               fVar17 * *(float *)(*(int64_t *)(puVar4 + 0x10) + lVar16 * 4);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(lVar3 + 0xc));
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 5) {
      if (0x32 < local_40) {
        iVar7 = 0x96;
        if (local_40 < 0x96) {
          iVar7 = local_40;
        }
        local_40 = local_40 + (((local_40 - iVar7) + 99U) / 100) * -100 + -100;
      }
LAB_0173ea32:
      *(float *)(this_ptr + 0xe) = (float)local_40;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar10 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      return;
    }
  }
  local_40 = 0;
  goto LAB_0173ea32;
}


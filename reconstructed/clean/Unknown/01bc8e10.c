// Function: FUN_01bc8e10
// Address: 01bc8e10
// Size: 1798 bytes
// Class: Unknown

void FUN_01bc8e10(void* param_1,uint64_t param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  char cVar8;
  void *pvVar9;
  char *pcVar10;
  int64_t *plVar11;
  void* pVar12;
  int64_t *plVar14;
  uint64_t uVar15;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar16;
  bool bVar17;
  float fVar18;
  uint64_t uVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  int64_t local_b8;
  char local_b0;
  int64_t local_70;
  char local_68;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  int iVar13;
  
  fVar18 = (float)((uint64_t)param_2 >> 0x20);
  fVar21 = (float)param_2;
  lVar16 = arg1[0x2c];
  if (lVar16 != 0) {
    *(void*)(this_ptr + 1) = 0;
    goto joined_r0x01bc9506;
  }
  (**(code **)(*(int64_t *)arg1[0x2a] + 0x398))();
  pvVar9 = _pthread_getspecific(param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_48[0] == '\0') {
    if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
       (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 == (int64_t *)0x0) || (*(int *)((int64_t)local_50 + 0xc) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    bVar17 = true;
  }
  else {
    FUN_01bc6210();
    if ((((local_48[0] == '\0') && (local_50 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar19 = (**(code **)(*arg1 + 0x4d8))();
    if (fVar21 <= g_02390d34) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      bVar5 = true;
      bVar17 = true;
    }
    else {
      if (arg1[0x2f] == 0) {
LAB_01bc91e9:
        lVar16 = arg1[0x2f];
      }
      else {
        iVar2 = *(int *)(arg1[0x2f] + 0x18);
        iVar13 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar13 = iVar2;
        }
        pVar12 = iVar13 >> 2;
        if ((float)(int)pVar12 < g_02391098 * fVar21) {
          arg1[0x2f] = 0;
          FUN_00d50b20();
          if (arg1[0x2f] == 0) goto LAB_01bc91e9;
        }
        FUN_00d23340();
        local_40[0] = local_48[0];
        pcVar10 = local_40;
        if (local_48[0] != '\0') {
          pcVar10 = local_48;
        }
        *pcVar10 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        if (local_70 == 0) {
          cVar8 = '\0';
        }
        else {
          FUN_00d23340();
          pcVar10 = local_48;
          if (local_48[0] == '\0') {
            pcVar10 = local_38;
          }
          local_38[0] = local_48[0];
          *pcVar10 = '\0';
          plVar14 = local_50;
          if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar12 = (void*)plVar14;
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar8 = FUN_0124c5d0();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar8 == '\0') goto LAB_01bc91e9;
        lVar16 = 0;
        if (arg1[0x2f] != 0) {
          arg1[0x2f] = 0;
          FUN_00d50b20();
          goto LAB_01bc91e9;
        }
      }
      if (lVar16 == 0) {
        dVar20 = (double)(**(code **)(*local_50 + 0x388))((float)uVar19);
        dVar4 = (double)(**(code **)(*local_50 + 0x388))((float)uVar19 + fVar21);
        FUN_00e7d780(fVar21);
        FUN_00c8e690();
        if ((((local_48[0] == '\0') && (local_50 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        plVar14 = (int64_t *)arg1[0x2f];
        if (plVar14 == local_50) {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b20();
            goto LAB_01bc92d1;
          }
        }
        else {
          arg1[0x2f] = (int64_t)local_50;
          bVar17 = plVar14 != (int64_t *)0x0;
          plVar14 = local_50;
          if (bVar17) {
            FUN_00d50b20();
LAB_01bc92d1:
            plVar14 = (int64_t *)arg1[0x2f];
          }
        }
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00e7b500(SUB84(dVar20,0),SUB84(dVar4 - dVar20,0));
        FUN_012a2e80();
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        fVar7 = g_023d59b4;
        uVar6 = g_023945e0;
        fVar21 = g_02390124;
        uVar3 = *(uint *)(arg1[0x2f] + 0x18);
        if (3 < (int)uVar3) {
          fVar18 = fVar18 * g_0239011c + (float)((uint64_t)uVar19 >> 0x20) + g_023b1608;
          lVar16 = *(int64_t *)(arg1[0x2f] + 0x10);
          uVar15 = 0;
          do {
            fVar1 = *(float *)(lVar16 + uVar15 * 4);
            fVar22 = fVar21;
            if ((fVar1 <= fVar21) && (fVar22 = 0.0, fVar7 <= fVar1)) {
              fVar22 = SQRT(fVar1);
            }
            *(float *)(lVar16 + uVar15 * 4) = (float)((uint)fVar22 ^ uVar6) * fVar18;
            uVar15 = uVar15 + 1;
          } while (uVar3 >> 2 != uVar15);
        }
      }
      (**(code **)(arg1[0x27] + 0x10))();
      FUN_00d50b00();
      FUN_01916410();
      plVar14 = (int64_t *)arg1[0x2c];
      plVar11 = plVar14;
      if (plVar14 != local_50) {
        plVar11 = local_50;
        if (local_48[0] == '\0') {
          if (local_50 == (int64_t *)0x0) {
            plVar11 = (int64_t *)0x0;
            goto LAB_01bc9445;
          }
          FUN_00d50b00();
          plVar14 = (int64_t *)arg1[0x2c];
          arg1[0x2c] = (int64_t)local_50;
        }
        else {
          local_48[0] = '\0';
LAB_01bc9445:
          arg1[0x2c] = (int64_t)plVar11;
        }
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar11 = local_50;
        }
      }
      if ((local_48[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (arg1 + 0x27 != (int64_t *)0x0) {
        (**(code **)(arg1[0x27] + 0x10))();
        FUN_00d50b20();
      }
      bVar5 = false;
      bVar17 = false;
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
      bVar17 = bVar5;
    }
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (bVar17) {
    return;
  }
  lVar16 = arg1[0x2c];
  *(void*)(this_ptr + 1) = 0;
joined_r0x01bc9506:
  if (lVar16 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar16;
  *(void*)(this_ptr + 1) = 1;
  return;
}


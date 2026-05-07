// Function: FUN_014cd1b0
// Address: 014cd1b0
// Size: 2124 bytes
// Class: Unknown

uint64_t FUN_014cd1b0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  uint uVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t lVar11;
  void* pVar12;
  uint uVar13;
  int64_t *plVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint64_t uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint *local_res8;
  int *local_res10;
  float *local_res18;
  int64_t local_b0;
  char local_a8;
  int64_t *local_78;
  int64_t local_68;
  int local_50;
  float local_4c;
  int64_t *local_40;
  char local_38;
  
  *local_res8 = 0;
  cVar3 = FUN_014bc070(param_1,param_2,param_3,param_4,param_1);
  pVar12 = (void*)param_1;
  if ((cVar3 == '\0') && (*(int *)(this_ptr[0x21] + 0xc) != 0)) {
    FUN_014bc000();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_014cd25a;
      FUN_00d50b00();
    }
    else if (local_40 == (int64_t *)0x0) {
LAB_014cd25a:
      (**(code **)(*this_ptr + 0x378))();
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      if (local_40 != (int64_t *)0x0) {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        else {
          local_38 = '\0';
        }
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_40 != (int64_t *)0x0) {
      ___bzero();
      pvVar9 = _pthread_getspecific(pVar12);
      plVar14 = local_40;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      dVar21 = (double)(**(code **)(*plVar14 + 0x370))();
      dVar22 = (double)FUN_015c70e0();
      local_68 = (**(code **)(*this_ptr + 0x380))();
      lVar10 = FUN_014bb590();
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      iVar4 = (int)param_3;
      uVar13 = (int)(((uint)(param_3 >> 0x1f) & 1) + iVar4) >> 1;
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar1 = local_40[2];
      lVar2 = local_40[2];
      iVar5 = FUN_00e7d850(dVar21 / g_02394dd8);
      fVar18 = (float)(**(code **)(*this_ptr + 0x3e0))();
      fVar18 = (float)_exp2f(fVar18 * g_023941f4);
      local_50 = 0;
      iVar6 = FUN_00e7d850(dVar21 / (double)(fVar18 * g_023941f8));
      if (iVar5 < iVar6) {
        iVar5 = iVar6;
      }
      lVar10 = lVar10 - iVar6 * 2;
      local_4c = 0.0;
      local_78._0_4_ = 0;
      uVar8 = (uint)local_78;
      if (local_68 < lVar10) {
        fVar18 = g_02411450 / (float)(int)uVar13;
        dVar23 = g_0238fee8 / dVar22;
        plVar14 = (int64_t *)(uint64_t)(uVar13 - 1);
        uVar16 = 2;
        if (2 < (int)uVar13) {
          uVar16 = (uint64_t)uVar13;
        }
        local_78 = (int64_t *)0x0;
        local_50 = 0;
        local_4c = 0.0;
        do {
          pvVar9 = _pthread_getspecific((void*)plVar14);
          plVar17 = local_40;
          if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            plVar14 = local_40;
            plVar17 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
          }
          pvVar9 = _pthread_getspecific((void*)plVar14);
          plVar14 = local_40;
          if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
          }
          uVar7 = (**(code **)(*plVar14 + 0x3a0))();
          uVar24 = (**(code **)(*plVar17 + 0x388))(dVar23,g_0238fee8,uVar7,local_68);
          uVar24 = (**(code **)(g_02786500 + 0x38))(uVar24,param_3);
          FUN_00e83530(uVar24,lVar1);
          uVar8 = g_02390140;
          fVar20 = g_02390124;
          if (1 < iVar4) {
            lVar11 = local_40[2];
            uVar15 = 0;
            do {
              uVar24 = *(void*)(lVar2 + uVar15 * 8);
              fVar25 = (float)((uint64_t)uVar24 >> 0x20);
              fVar26 = (float)((uint)fVar25 & uVar8);
              fVar27 = (float)uVar24;
              if ((fVar27 != 0.0) || (fVar19 = fVar26, NAN(fVar27))) {
                fVar19 = (float)((uint)fVar27 & uVar8);
                if ((fVar25 != 0.0) || (NAN(fVar25))) {
                  if (fVar19 <= fVar26) {
                    fVar19 = SQRT((fVar19 / fVar26) * (fVar19 / fVar26) + fVar20) * fVar26;
                  }
                  else {
                    fVar19 = SQRT((fVar26 / fVar19) * (fVar26 / fVar19) + fVar20) * fVar19;
                  }
                }
              }
              *(float *)(lVar11 + uVar15 * 4) = fVar19;
              uVar15 = uVar15 + 1;
            } while (uVar13 != uVar15);
          }
          fVar20 = local_4c;
          if (*arg1 != 0) {
            fVar20 = (float)FUN_014c3a00((int64_t)(int)uVar13);
            fVar20 = (float)_exp2f(fVar20 * g_023941f4);
            fVar27 = (fVar20 * g_023941f8) / (((float)dVar21 / (float)dVar22) / (float)iVar4);
            iVar6 = FUN_00e7d780((float)(int)uVar13 / fVar27);
            if (0x1fe < iVar6) {
              iVar6 = 0x1ff;
            }
            if (local_50 < iVar6) {
              local_50 = iVar6;
            }
            if (iVar6 < 0) {
              fVar20 = 0.0;
            }
            else {
              fVar20 = 0.0;
              uVar15 = 0;
              do {
                uVar8 = FUN_00e7d780((float)(int)uVar15 * fVar27);
                if ((-1 < (int)uVar8) && ((int)uVar8 < (int)uVar13)) {
                  lVar11 = local_40[2];
                  *(float *)(*(int64_t *)(*arg1 + 0x10) + uVar15 * 4) =
                       *(float *)(lVar11 + (uint64_t)uVar8 * 4) +
                       *(float *)(*(int64_t *)(*arg1 + 0x10) + uVar15 * 4);
                  fVar20 = fVar20 + *(float *)(lVar11 + (uint64_t)uVar8 * 4);
                }
                if ((-1 < (int)uVar8) && ((int)uVar8 < (int)(uVar13 - 1))) {
                  lVar11 = local_40[2];
                  *(float *)(*(int64_t *)(*arg1 + 0x10) + uVar15 * 4) =
                       *(float *)(lVar11 + 4 + (uint64_t)uVar8 * 4) +
                       *(float *)(*(int64_t *)(*arg1 + 0x10) + uVar15 * 4);
                  fVar20 = fVar20 + *(float *)(lVar11 + 4 + (uint64_t)uVar8 * 4);
                }
                uVar15 = uVar15 + 1;
              } while (iVar6 + 1 != uVar15);
            }
            if (fVar20 <= local_4c) {
              fVar20 = local_4c;
            }
          }
          local_4c = fVar20;
          if ((*param_2 != 0) && (3 < iVar4)) {
            uVar15 = 1;
            do {
              uVar8 = FUN_00e7d780((float)(int)uVar15 * fVar18);
              if (uVar8 < 0x800) {
                *(float *)(*(int64_t *)(*param_2 + 0x10) + (uint64_t)uVar8 * 4) =
                     *(float *)(local_40[2] + uVar15 * 4) +
                     *(float *)(*(int64_t *)(*param_2 + 0x10) + (uint64_t)uVar8 * 4);
              }
              uVar15 = uVar15 + 1;
            } while (uVar16 != uVar15);
          }
          local_68 = local_68 + iVar5;
          uVar8 = (int)local_78 + 1;
          plVar14 = (int64_t *)(uint64_t)uVar8;
          local_78 = plVar14;
        } while (local_68 < lVar10);
      }
      local_78._0_4_ = uVar8;
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
      *local_res10 = local_50;
      *local_res8 = (uint)local_78;
      *local_res18 = local_4c;
      uVar16 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      FUN_00d50b20();
      goto LAB_014cd357;
    }
  }
  uVar16 = 0;
LAB_014cd357:
  return uVar16 & 0xffffffff;
}


// Function: FUN_01536600
// Address: 01536600
// Size: 1232 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01536a96) */
/* WARNING: Removing unreachable block (ram,0x01536aa2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01536600(void *param_1,uint param_2,size_t param_3)

{
  code *pcVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  float *pfVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_1b8;
  undefined8 local_1a8;
  float local_16c;
  float local_154 [55];
  float local_78 [8];
  float local_58;
  undefined1 auStack_54 [8];
  float afStack_4c [5];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  (**(code **)(DAT_02786500 + 0x40))();
  (**(code **)(DAT_02786500 + 0x40))();
  if (0 < (int)param_2) {
    pvVar5 = (void *)0x0;
    uVar2 = 0;
    do {
      fVar8 = *(float *)(unaff_RSI + (longlong)pvVar5 * 4);
      if ((0.0 < fVar8) && (uVar2 = uVar2 + ((int)uVar2 < 5), 0 < (int)uVar2)) {
        fVar10 = fVar8;
        if (uVar2 == 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            while ((fVar12 = *(float *)(auStack_54 + uVar6 * 4 + -4), fVar10 < fVar12 ||
                   ((fVar12 == 0.0 && (!NAN(fVar12)))))) {
              *(float *)(auStack_54 + uVar6 * 4 + -4) = fVar10;
              fVar11 = *(float *)(auStack_54 + uVar6 * 4);
              fVar10 = fVar12;
              if (fVar11 <= fVar12) goto LAB_01536711;
LAB_015366c0:
              fVar10 = fVar11;
              *(float *)(auStack_54 + uVar6 * 4) = fVar12;
              uVar6 = uVar6 + 2;
              if ((uVar2 & 0xfffffffe) == uVar6) goto LAB_01536724;
            }
            fVar11 = *(float *)(auStack_54 + uVar6 * 4);
            fVar12 = fVar10;
            if (fVar10 < fVar11) goto LAB_015366c0;
LAB_01536711:
            if ((fVar11 == 0.0) && (fVar12 = fVar10, !NAN(fVar11))) goto LAB_015366c0;
            uVar6 = uVar6 + 2;
          } while ((uVar2 & 0xfffffffe) != uVar6);
        }
LAB_01536724:
        if (((uVar2 & 1) == 0) ||
           ((fVar12 = *(float *)(auStack_54 + uVar6 * 4 + -4), fVar12 <= fVar10 &&
            ((fVar12 != 0.0 || (NAN(fVar12))))))) {
          if (uVar2 == 1) goto LAB_01536740;
LAB_0153674f:
          uVar6 = 0;
          do {
            while (fVar10 = local_78[uVar6], fVar8 <= fVar10) {
              fVar12 = local_78[uVar6 + 1];
              fVar10 = fVar8;
              if (local_78[uVar6 + 1] < fVar8) goto LAB_01536760;
LAB_0153679e:
              uVar6 = uVar6 + 2;
              if ((uVar2 & 0xfffffffe) == uVar6) goto LAB_015367aa;
            }
            local_78[uVar6] = fVar8;
            fVar12 = local_78[uVar6 + 1];
            fVar8 = fVar10;
            if (fVar10 <= local_78[uVar6 + 1]) goto LAB_0153679e;
LAB_01536760:
            fVar8 = fVar12;
            local_78[uVar6 + 1] = fVar10;
            uVar6 = uVar6 + 2;
          } while ((uVar2 & 0xfffffffe) != uVar6);
        }
        else {
          *(float *)(auStack_54 + uVar6 * 4 + -4) = fVar10;
          if (uVar2 != 1) goto LAB_0153674f;
LAB_01536740:
          uVar6 = 0;
        }
LAB_015367aa:
        if (((uVar2 & 1) != 0) && (local_78[uVar6] <= fVar8 && fVar8 != local_78[uVar6])) {
          local_78[uVar6] = fVar8;
        }
      }
      pvVar5 = (void *)((longlong)pvVar5 + 1);
    } while (pvVar5 != (void *)(ulonglong)param_2);
    param_1 = (void *)(ulonglong)param_2;
    if (0 < (int)uVar2) {
      param_1 = (void *)(ulonglong)(uVar2 & 3);
      if ((ulonglong)uVar2 - 1 < 3) {
        fVar8 = 0.0;
        uVar6 = 0;
        fVar10 = 0.0;
      }
      else {
        fVar8 = 0.0;
        uVar6 = 0;
        fVar10 = 0.0;
        do {
          fVar10 = fVar10 + *(float *)(auStack_54 + uVar6 * 4 + -4) +
                   *(float *)(auStack_54 + uVar6 * 4) + *(float *)(auStack_54 + uVar6 * 4 + 4) +
                   *(float *)(auStack_54 + uVar6 * 4 + 8);
          fVar8 = fVar8 + local_78[uVar6] + local_78[uVar6 + 1] + local_78[uVar6 + 2] +
                  local_78[uVar6 + 3];
          uVar6 = uVar6 + 4;
        } while ((uVar2 & 0xfffffffc) != uVar6);
      }
      if (param_1 != (void *)0x0) {
        pvVar5 = (void *)0x0;
        do {
          fVar10 = fVar10 + *(float *)(auStack_54 + (longlong)pvVar5 * 4 + uVar6 * 4 + -4);
          fVar8 = fVar8 + local_78[uVar6 + (longlong)pvVar5];
          pvVar5 = (void *)((longlong)pvVar5 + 1);
        } while (param_1 != pvVar5);
      }
      auVar9._4_12_ = _auStack_54;
      auVar9._0_4_ = local_58;
      auVar9 = insertps(auVar9,ZEXT416((uint)(fVar10 * (DAT_02390124 / (float)(int)uVar2))),0x10);
      local_1a8 = auVar9._0_8_;
      auVar9 = insertps(ZEXT416((uint)((DAT_02390124 / (float)(int)uVar2) * fVar8)),local_78[0],0x10
                       );
      local_1b8 = auVar9._0_8_;
      goto LAB_015368cd;
    }
  }
  local_58 = 0.0;
  local_78[0] = 1.0;
  local_1a8 = 0;
  local_1b8 = _DAT_023b5570;
LAB_015368cd:
  plVar3 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar3 + 0x18))();
  _memcpy(param_1,&section_000000b8.reloff,param_3);
  pcVar1 = DAT_025ddb40;
  pfVar7 = local_154;
  local_16c = DAT_02390d04;
  fVar8 = DAT_02390d00;
  while( true ) {
    fVar10 = (float)((ulonglong)*(undefined8 *)(pfVar7 + -2) >> 0x20) * local_1b8._4_4_ +
             (float)((ulonglong)*(undefined8 *)(pfVar7 + -4) >> 0x20) * local_1a8._4_4_ +
             (float)*(undefined8 *)(pfVar7 + -4) * (float)local_1a8 +
             (float)*(undefined8 *)(pfVar7 + -2) * (float)local_1b8;
    if (fVar8 * _DAT_0240ed30 < fVar10) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025ddb28;
      puVar4[0xb] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x43) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x4b) = 0;
      (*pcVar1)();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013fae90((double)fVar10);
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faee0((double)local_16c);
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b30();
      FUN_00d50b20();
      fVar8 = fVar10;
    }
    if (local_78 <= pfVar7) break;
    local_16c = *pfVar7;
    pfVar7 = pfVar7 + 5;
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



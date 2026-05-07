// Function: FUN_016863a0
// Address: 016863a0
// Size: 2120 bytes
// Class: Unknown
// String references:
//   "keySignaturesEntryCount > 0"
//   "keySignatureEntry != NULL"
//   "keySignatureEntry->position > lastPosition"
//   "usedIntervalsCount > 0"

void FUN_016863a0(uint64_t param_1)

{
  double dVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int64_t *plVar6;
  uint *puVar7;
  int64_t *plVar8;
  void *pvVar9;
  void*puVar10;
  int64_t lVar11;
  int64_t lVar12;
  char cVar13;
  char cVar14;
  void* pVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar20;
  bool bVar21;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar22;
  double local_d0;
  int64_t *local_50;
  char local_48;
  
  lVar12 = *(int64_t *)(*(int64_t *)(arg1 + 0x30) + 0x30);
  iVar4 = (**(code **)(lVar12 + 0x38))();
  if (iVar4 < 1) {
    FUN_016aea20(extraout_XMM0_Qa,"keySignaturesEntryCount > 0");
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_0124b580();
    (**(code **)(*plVar6 + 0x18))();
    pcVar3 = g_025fe688;
    iVar18 = 0;
    local_d0 = g_023b4830;
    do {
      pVar15 = (void*)param_1;
      puVar7 = (uint *)(**(code **)(lVar12 + 0x40))();
      if (puVar7 == (uint *)0x0) {
        FUN_016aea20(extraout_XMM0_Qa_00,"keySignatureEntry != NULL");
        goto LAB_01686c10;
      }
      dVar1 = *(double *)(puVar7 + 6);
      if (dVar1 <= local_d0) {
        FUN_016aea20(dVar1,"keySignatureEntry->position > lastPosition");
        goto LAB_01686c10;
      }
      plVar8 = (int64_t *)FUN_00e8fc40();
      FUN_0013e060();
      (**(code **)(*plVar8 + 0x18))();
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = (int)(*puVar7 * 7) >> 0x1f;
      pVar15 = (((uint)((int)(*puVar7 * 7) / 6 + iVar5) >> 1) - iVar5) * 0xc;
      FUN_01736c60();
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = *puVar7;
      iVar5 = uVar2 * 7;
      iVar5 = iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc;
      iVar5 = ((iVar5 >> 0x1f & 0xcU) + iVar5) * 7;
      iVar5 = iVar5 + ((int)(short)iVar5 / 0xc) * -0xc;
      cVar13 = ((byte)((uint)(int)(short)iVar5 >> 0xf) & 0xc) + (char)iVar5 + '\x06';
      cVar14 = cVar13 + ((char)((cVar13 * 0x2b & 0xffffU) >> 0xf) +
                        (char)((uint)(cVar13 * 0x2b) >> 9)) * -0xc;
      iVar5 = 0;
      if (cVar14 < '\0') {
        iVar5 = 0xc;
      }
      cVar14 = cVar14 + -6;
      param_1 = (uint64_t)CONCAT31(cVar13 >> 7,cVar14);
      iVar19 = (int)cVar14;
      uVar16 = iVar5 + iVar19;
      if ((int)uVar16 < (int)uVar2) {
        uVar16 = iVar5 + iVar19 + 0xc;
        if ((int)uVar16 < (int)uVar2) {
          uVar16 = uVar2;
        }
        iVar17 = (uVar16 - iVar5) + -6;
        bVar21 = iVar17 != iVar19 + 6;
        uVar16 = ((iVar17 - iVar19) - (uint)bVar21) - 6;
        param_1 = (uint64_t)uVar16 / 0xc;
        uVar16 = iVar5 + iVar19 + (uVar16 / 0xc + (uint)bVar21) * 0xc + 0xc;
      }
      if ((int)uVar2 < (int)uVar16) {
        uVar16 = ~((uVar16 + ~uVar2) / 0xc);
      }
      FUN_01736cc0(param_1,uVar16);
      iVar5 = 0;
      lVar20 = 4;
      do {
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &g_025fe670;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        (*pcVar3)();
        cVar13 = *(char *)((int64_t)puVar7 + lVar20);
        pvVar9 = _pthread_getspecific((void*)param_1);
        if ((pvVar9 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
          if (cVar13 != '\0') goto LAB_01686737;
LAB_0168670d:
          lVar11 = g_027cd580;
          if (g_027cd580 == 0) {
LAB_01686750:
            lVar11 = 0;
          }
          else {
            FUN_00d50b00();
          }
        }
        else {
          if (cVar13 == '\0') goto LAB_0168670d;
LAB_01686737:
          lVar11 = g_027cd560;
          if (g_027cd560 == 0) goto LAB_01686750;
          FUN_00d50b00();
        }
        FUN_017395b0();
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((void*)param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01735cb0();
        iVar5 = (iVar5 + 1) - (uint)(cVar13 == '\0');
        uVar22 = FUN_00d50b20();
        pVar15 = (void*)param_1;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 0x10);
      if (iVar5 == 0) {
        FUN_016aea20(uVar22,"usedIntervalsCount > 0");
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        if (plVar8 == (int64_t *)0x0) goto joined_r0x01686b64;
LAB_01686b4c:
        FUN_00d50b20();
        if (iVar5 == 0) goto joined_r0x01686b64;
      }
      else {
        FUN_016843a0();
        if (local_48 == '\0') {
          if (local_50 == (int64_t *)0x0) goto LAB_01686930;
          FUN_00d50b00();
LAB_016868a1:
          pvVar9 = _pthread_getspecific(pVar15);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01735c40();
          FUN_00d50b20();
        }
        else {
          if (local_50 != (int64_t *)0x0) goto LAB_016868a1;
LAB_01686930:
          pvVar9 = _pthread_getspecific(pVar15);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d8ede0();
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_01735c40();
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar9 = _pthread_getspecific(pVar15);
        lVar20 = g_027e3c00;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
          lVar20 = g_027e3c00;
        }
        g_027e3c00 = lVar20;
        if (lVar20 != 0) {
          FUN_00d50b00();
        }
        FUN_01735120();
        if (lVar20 != 0) {
          FUN_00d50b20();
        }
        if (iVar18 == 0) {
          uVar22 = FUN_00e7bdb0();
        }
        else {
          uVar22 = *(void*)(puVar7 + 6);
          FUN_00e7bcc0();
          uVar22 = FUN_00e7cd00(uVar22);
        }
        pvVar9 = _pthread_getspecific(pVar15);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        param_1 = FUN_00e7bdb0();
        local_48 = '\0';
        FUN_012502a0(param_1,uVar22,0);
        local_50 = plVar8;
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
          goto LAB_01686b4c;
        }
      }
      iVar18 = iVar18 + 1;
      local_d0 = dVar1;
    } while (iVar18 != iVar4);
    pvVar9 = _pthread_getspecific((void*)param_1);
    plVar8 = plVar6;
    if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
      plVar8 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
    if (*(int *)(plVar8[9] + 0x18) + 0xfU < 8) {
LAB_01686c10:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
joined_r0x01686b64:
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      *this_ptr = plVar6;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  return;
}


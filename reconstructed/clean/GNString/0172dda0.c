// Function: FUN_0172dda0
// Address: 0172dda0
// Size: 1944 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0172dda0(double param_1,double param_2)

{
  double *pdVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*puVar5;
  char cVar6;
  void *pvVar7;
  void*puVar8;
  void* in_ECX;
  uint uVar9;
  void* pVar10;
  int64_t lVar11;
  int64_t *in_RDX;
  int64_t lVar12;
  int iVar13;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int iVar17;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar18;
  double dVar19;
  double dVar20;
  double local_98;
  double local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t local_48;
  double local_40;
  char local_31;
  
  lVar3 = *arg1;
  local_31 = (char)arg1[1];
  local_40 = param_1;
  if ((local_31 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  lVar4 = *in_RDX;
  if (lVar4 == 0) {
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar6 = FUN_016c2730();
    if (cVar6 == '\0') {
      pvVar7 = _pthread_getspecific(in_ECX);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017049c0();
      lVar4 = local_70;
      if ((((local_68 == '\0') && (local_70 != 0)) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_48 = lVar4;
      pvVar7 = _pthread_getspecific(in_ECX);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019013d0(local_40);
      lVar4 = local_70;
      if (((local_68 == '\0') && (local_70 != 0)) &&
         ((FUN_00d50b00(), local_68 != '\0' && (local_70 != 0)))) {
        FUN_00d50b20();
      }
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      puVar5 = *(void**)(this_ptr + 0x10);
      if (puVar5 == puVar8) {
        FUN_00d50b20();
      }
      else {
        *(void**)(this_ptr + 0x10) = puVar8;
        if (puVar5 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00c8e7d0();
      local_68 = '\0';
      local_70 = 0;
      local_60 = lVar4;
      local_58 = 0xffffffff;
      local_50 = 0;
      param_2 = param_2 + local_40;
      while( true ) {
        lVar16 = local_60;
        lVar11 = (int64_t)(int)local_58;
        iVar17 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar17);
        if (*(int *)(local_60 + 0xc) <= iVar17) break;
        lVar12 = *(int64_t *)(local_60 + 0x10);
        local_70 = *(int64_t *)(lVar12 + 8 + lVar11 * 8);
        pvVar7 = _pthread_getspecific((void*)lVar12);
        pVar10 = (void*)lVar12;
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar19 = (double)FUN_01907950();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        local_98 = (double)FUN_00e7c860();
        pVar10 = *(void* *)(*(int64_t *)(this_ptr + 0x10) + 0x18);
        dVar20 = local_98;
        local_88 = dVar19;
        if (((0x1e < pVar10 + 0xf) &&
            (pdVar1 = (double *)
                      ((int64_t)(int)pVar10 + -8 +
                      *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10)),
            *pdVar1 <= 0.0 && *pdVar1 != 0.0)) && (0.0 < local_98)) {
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_88 = (double)FUN_018fd0c0(0);
          lVar11 = *(int64_t *)(this_ptr + 0x10);
          uVar2 = *(uint *)(lVar11 + 0x18);
          dVar20 = local_88;
          if (((uVar2 & 0xfffffff0) != 0x10) || (dVar20 = local_40, local_40 < local_88)) {
            if ((iVar17 == *(int *)(lVar16 + 0xc) + -1) && (param_2 <= local_88)) {
              dVar20 = 0.0;
              local_98 = 0.0;
              goto LAB_0172e480;
            }
            FUN_00c8e340(dVar20,1);
            lVar16 = *(int64_t *)(lVar11 + 0x10);
            *(double *)(lVar16 + (int)uVar2) = local_88;
            pdVar1 = (double *)(lVar16 + (int)uVar2);
            dVar20 = local_88;
          }
          else {
            pdVar1 = *(double **)(lVar11 + 0x10);
            *pdVar1 = local_88;
          }
          pdVar1[1] = 0.0;
          local_88 = dVar19;
        }
LAB_0172e480:
        lVar16 = *(int64_t *)(this_ptr + 0x10);
        lVar11 = (int64_t)*(int *)(lVar16 + 0x18);
        FUN_00c8e340(dVar20,1);
        lVar16 = *(int64_t *)(lVar16 + 0x10);
        *(double *)(lVar16 + lVar11) = local_88;
        *(double *)(lVar16 + 8 + lVar11) = local_98;
        iVar17 = local_58._4_4_;
        if (local_58._4_4_ != 0) {
          if (local_58 < 0) {
            iVar17 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690(local_98,local_58._4_4_);
            local_50 = local_50 + iVar17;
            iVar17 = 0;
          }
          local_58 = CONCAT44(iVar17,(int)local_58);
        }
      }
      FUN_000beb10();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar10 = 0x25683c0;
      *puVar8 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      puVar5 = *(void**)(this_ptr + 0x10);
      if (puVar5 == puVar8) {
        FUN_00d50b20();
      }
      else {
        *(void**)(this_ptr + 0x10) = puVar8;
        if (puVar5 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      local_70 = CONCAT44(local_70._4_4_,0xffffffff);
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar18 = FUN_00e7bdb0();
      local_40 = (double)FUN_016c98e0(uVar18,&local_70);
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar18 = FUN_00e7bdb0();
      dVar19 = (double)FUN_016c92f0(uVar18,0);
      lVar4 = *(int64_t *)(this_ptr + 0x10);
      lVar16 = (int64_t)*(int *)(lVar4 + 0x18);
      FUN_00c8e340(dVar19,1);
      lVar4 = *(int64_t *)(lVar4 + 0x10);
      *(double *)(lVar4 + lVar16) = local_40;
      *(void*)(lVar4 + 8 + lVar16) = 0;
      lVar4 = *(int64_t *)(this_ptr + 0x10);
      lVar16 = (int64_t)*(int *)(lVar4 + 0x18);
      FUN_00c8e340(local_40,1);
      lVar4 = *(int64_t *)(lVar4 + 0x10);
      *(double *)(lVar4 + lVar16) = local_40 + dVar19;
      *(void*)(lVar4 + 8 + lVar16) = 0x3ff0000000000000;
    }
  }
  else {
    lVar16 = in_RDX[1];
    if ((char)lVar16 != '\0') {
      FUN_00d50b00();
    }
    iVar17 = *(int *)(lVar4 + 0x18);
    iVar13 = iVar17 + 0xf;
    if (-1 < iVar17) {
      iVar13 = iVar17;
    }
    uVar2 = (iVar13 >> 4) - 1;
    lVar11 = 0;
    uVar14 = 0;
    if (0 < (int)uVar2) {
      uVar14 = (uint64_t)uVar2;
    }
    lVar12 = 0x10;
    do {
      if (-lVar11 == uVar14) goto LAB_0172defd;
      pdVar1 = (double *)(*(int64_t *)(lVar4 + 0x10) + -0x10 + lVar12);
      if (local_40 < *pdVar1 || local_40 == *pdVar1) {
        uVar9 = -(int)lVar11;
        goto LAB_0172defb;
      }
      lVar11 = lVar11 + -1;
      pdVar1 = (double *)(*(int64_t *)(lVar4 + 0x10) + lVar12);
      lVar12 = lVar12 + 0x10;
    } while (*pdVar1 <= local_40);
    uVar9 = ~(uint)lVar11;
LAB_0172defb:
    uVar14 = (uint64_t)uVar9;
LAB_0172defd:
    local_40 = local_40 + param_2;
    lVar11 = (int64_t)(int)uVar2;
    iVar17 = (int)uVar14;
    uVar15 = (uint64_t)uVar2;
    if (iVar17 < (int)uVar2) {
      uVar15 = uVar14;
    }
    lVar12 = lVar11 << 4;
    do {
      if ((lVar11 <= iVar17) || (*(double *)(*(int64_t *)(lVar4 + 0x10) + lVar12) <= local_40))
      break;
      lVar11 = lVar11 + -1;
      pdVar1 = (double *)(*(int64_t *)(lVar4 + 0x10) + -0x10 + lVar12);
      lVar12 = lVar12 + -0x10;
    } while (local_40 <= *pdVar1);
    uVar14 = FUN_00e7b4e0(lVar12,(int64_t)iVar17,uVar15);
    FUN_00c92250(extraout_XMM0_Qa,(uVar14 & 0xfffffff0fffffff) << 4);
    lVar4 = local_70;
    if ((((local_68 == '\0') && (local_70 != 0)) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    lVar11 = *(int64_t *)(this_ptr + 0x10);
    if (lVar11 == lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      *(int64_t *)(this_ptr + 0x10) = lVar4;
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
    }
    if ((char)lVar16 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_31 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}


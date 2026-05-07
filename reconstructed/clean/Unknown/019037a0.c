// Function: FUN_019037a0
// Address: 019037a0
// Size: 1350 bytes
// Class: Unknown

void FUN_019037a0(double param_1,double *param_2,int64_t *param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  uint64_t in_RCX;
  char *pcVar7;
  int64_t lVar8;
  int64_t this_ptr;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  int iVar12;
  double dVar13;
  double extraout_XMM0_Qa;
  double local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  int64_t *local_80;
  double local_78;
  double local_70;
  char local_68 [8];
  int64_t local_60;
  int local_58;
  uint64_t local_54;
  uint64_t local_48;
  double local_40;
  char local_38 [8];
  
  local_a0 = *param_2;
  local_98 = 0;
  local_80 = param_3;
  local_78 = param_1;
  local_48 = in_RCX;
  dVar13 = (double)FUN_01903160(in_RCX,&local_a0);
  if (*param_2 == 0.0) goto LAB_01903c58;
  cVar3 = FUN_00e7c7f0();
  if (cVar3 == '\0') {
    dVar13 = 0.0;
    if ((local_78 == 0.0) && (!NAN(local_78))) goto LAB_01903c58;
  }
  dVar1 = *param_2;
  dVar13 = (double)FUN_00d23310();
  dVar2 = local_70;
  local_38[0] = local_68[0];
  pcVar7 = local_38;
  pcVar5 = local_68;
  if (local_68[0] == '\0') {
    pcVar5 = pcVar7;
  }
  *pcVar5 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0.0)) {
    dVar13 = (double)FUN_00d50b20();
  }
  if (dVar1 == dVar2) {
    if ((local_38[0] != '\0') && (dVar2 != 0.0)) {
      dVar13 = (double)FUN_00d50b20();
    }
LAB_01903a01:
    iVar10 = 0;
  }
  else {
    if (dVar1 == 0.0) {
      if ((local_38[0] != '\0') && (dVar2 != 0.0)) {
        dVar13 = (double)FUN_00d50b20();
      }
      goto LAB_01903a01;
    }
    iVar12 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
    local_40 = dVar1;
    if ((local_38[0] != '\0') && (dVar2 != 0.0)) {
      dVar13 = (double)FUN_00d50b20();
    }
    iVar10 = 0;
    if (iVar12 != 0) {
      dVar13 = (double)FUN_00d23340();
      dVar1 = local_70;
      pcVar7 = local_38;
      pcVar5 = local_68;
      if (local_68[0] == '\0') {
        pcVar5 = pcVar7;
      }
      local_38[0] = local_68[0];
      *pcVar5 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0.0)) {
        dVar13 = (double)FUN_00d50b20();
      }
      dVar2 = local_40;
      if ((local_38[0] != '\0') && (dVar1 != 0.0)) {
        dVar13 = (double)FUN_00d50b20();
      }
      if (dVar2 == dVar1) {
        iVar10 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc) + -1;
      }
      else {
        pvVar6 = _pthread_getspecific((void*)pcVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double)FUN_01907950();
        iVar12 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
        dVar13 = (double)FUN_01907950();
        iVar10 = 0;
        if (dVar13 <= local_40) {
          iVar12 = iVar12 + -2;
          dVar13 = (double)FUN_01907950();
          iVar10 = iVar12;
          if (local_40 < dVar13) {
            iVar4 = 1;
            do {
              iVar10 = iVar4;
              if (iVar12 - iVar10 == 1) break;
              iVar9 = (iVar12 - iVar10) / 2 + iVar10;
              pcVar7 = *(char **)(*(int64_t *)(this_ptr + 0x38) + 0x10);
              dVar13 = (double)FUN_01907950();
              iVar4 = iVar9;
              if (local_40 <= dVar13) {
                iVar4 = iVar10;
                iVar12 = iVar9;
              }
            } while ((dVar13 != local_40) || (iVar10 = iVar9, NAN(dVar13) || NAN(local_40)));
          }
        }
      }
    }
  }
  if (iVar10 < *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc)) {
    lVar11 = (int64_t)iVar10;
    if ((local_78 != 0.0) || (NAN(local_78))) {
      do {
        cVar3 = FUN_00e7c7f0();
        if (cVar3 != '\0') {
          pvVar6 = _pthread_getspecific((void*)pcVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((void*)pcVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_70 = (double)FUN_019079b0();
          FUN_00e7b820();
          FUN_01907c60();
        }
        pvVar6 = _pthread_getspecific((void*)pcVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific((void*)pcVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_01907950();
        dVar13 = (double)FUN_01907cc0(dVar13 + local_78);
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc));
    }
    else {
      do {
        cVar3 = FUN_00e7c7f0();
        dVar13 = extraout_XMM0_Qa;
        if (cVar3 != '\0') {
          pvVar6 = _pthread_getspecific((void*)pcVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((void*)pcVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_70 = (double)FUN_019079b0();
          FUN_00e7b820();
          dVar13 = (double)FUN_01907c60();
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc));
    }
  }
LAB_01903c58:
  local_38[0] = -1;
  local_38[1] = -1;
  local_38[2] = -1;
  local_38[3] = -1;
  lVar11 = *local_80;
  if (lVar11 != 0) {
    local_68[0] = '\0';
    local_70 = 0.0;
    local_54 = 0;
    local_60 = lVar11;
    for (lVar8 = 0; local_58 = (int)lVar8, local_58 < *(int *)(lVar11 + 0xc); lVar8 = lVar8 + 1) {
      local_90 = *(void*)(*(int64_t *)(lVar11 + 0x10) + lVar8 * 8);
      local_88 = 0;
      local_70 = (double)local_90;
      dVar13 = (double)FUN_01902110(dVar13,local_38);
    }
    FUN_000beb10();
  }
  return;
}


// Function: FUN_00368120
// Address: 00368120
// Size: 2107 bytes
// Class: MDMetaDocumentController

void FUN_00368120(void)

{
  uint uVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char cVar7;
  uint32_t uVar8;
  uint uVar9;
  int64_t lVar10;
  void *pvVar11;
  void* pVar12;
  int64_t lVar13;
  int iVar14;
  void *in_R9;
  int64_t **pplVar15;
  int64_t *local_148;
  uint8_t local_140;
  int64_t *local_138;
  uint8_t local_130;
  int64_t *in_stack_fffffffffffffed8;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_b8;
  char local_b0;
  int64_t *local_80;
  char local_78;
  int64_t *local_60;
  int64_t *local_58;
  code *local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_00b160d0();
  plVar4 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) {
    return;
  }
  pplVar15 = &local_58;
  FUN_01f27fe0();
  plVar2 = local_58;
  FUN_003708c0();
  if (plVar2 == (int64_t *)0x0) {
LAB_003681ae:
    pplVar15 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_003681ae;
  }
  plVar2 = *pplVar15;
  if (*(char *)(pplVar15 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar15 + 1) = 0;
  }
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) goto LAB_00368969;
  FUN_00c8e710();
  plVar5 = local_58;
  local_60 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e710();
  plVar6 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar8 = (**(code **)(*plVar4 + 0x698))();
  uVar9 = (**(code **)(*plVar4 + 0x690))();
  (**(code **)(*plVar2 + 0x720))();
  (**(code **)(*local_80 + 0x618))();
  plVar2 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = (int64_t *)0x0;
    local_48 = plVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar14 = -local_40._4_4_;
        }
        else {
          iVar14 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar14);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar14 = 0;
        }
        local_40 = CONCAT44(iVar14,(int)local_40);
      }
      lVar10 = (int64_t)(int)local_40;
      iVar14 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar14);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar14) break;
      lVar13 = local_48[2];
      local_58 = *(int64_t **)(lVar13 + 8 + lVar10 * 8);
      FUN_00757c60();
      pVar12 = (void*)lVar13;
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_78 == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      in_stack_fffffffffffffed8 = local_80;
      FUN_00757c60();
      pvVar11 = _pthread_getspecific(pVar12);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb450();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_148 = plVar5;
      local_140 = 0;
      local_138 = plVar6;
      local_130 = 0;
      in_R9 = (void *)(uint64_t)uVar9;
      FUN_00368ec0(&local_138,&local_148,uVar8);
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_002b3090();
    FUN_00d50b20();
  }
  uVar9 = (int)plVar5[3] + 3;
  if (uVar9 < 7) {
    local_60 = (int64_t *)0x0;
    FUN_00d50b20();
  }
  else {
    local_58 = (int64_t *)0x0;
    local_50 = FUN_00e8b540;
    _qsort_r(&local_58,4,0x370b80,in_R9,(int *)in_stack_fffffffffffffed8);
  }
  uVar1 = (int)plVar6[3] + 3;
  if (uVar1 < 7) {
    FUN_00d50b20();
    (**(code **)(*plVar4 + 0x6b0))();
    plVar2 = local_58;
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) goto LAB_00368875;
LAB_003687a2:
    if (local_60 == (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x6b8))();
      plVar2 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) goto LAB_00368875;
    }
    else {
      (**(code **)(*plVar4 + 0x6b8))();
      plVar2 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
      }
      cVar7 = (**(code **)(*local_60 + 0x50))();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar7 == '\0') goto LAB_00368875;
    }
  }
  else {
    local_58 = (int64_t *)0x0;
    local_50 = FUN_00e8b540;
    _qsort_r(&local_58,4,0x370b80,in_R9,(int *)in_stack_fffffffffffffed8);
    (**(code **)(*plVar4 + 0x6b0))();
    plVar2 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    }
    cVar7 = (**(code **)(*plVar6 + 0x50))();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar7 != '\0') goto LAB_003687a2;
LAB_00368875:
    cVar7 = (**(code **)(*plVar4 + 0x390))();
    if ((cVar7 == '\0') || (cVar7 = (**(code **)(*plVar4 + 0x6c0))(), cVar7 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      (**(code **)(*plVar4 + 0x370))();
    }
    (**(code **)(*plVar4 + 0x6a0))();
    (**(code **)(*plVar4 + 0x6a8))();
    if (bVar3) {
      (**(code **)(*plVar4 + 0x368))();
    }
  }
  if (6 < uVar1) {
    FUN_00d50b20();
  }
  if ((6 < uVar9) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00368969:
  FUN_00d50b20();
  return;
}


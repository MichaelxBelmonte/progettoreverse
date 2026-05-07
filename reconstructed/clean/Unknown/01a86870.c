// Function: FUN_01a86870
// Address: 01a86870
// Size: 2220 bytes
// Class: Unknown

void FUN_01a86870(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void*arg1;
  int64_t *this_ptr;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float fVar14;
  uint64_t in_XMM1_Qb;
  uint32_t uVar15;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  double local_50;
  int64_t *local_40;
  char local_38;
  
  uVar15 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  fVar14 = (float)((uint64_t)param_2 >> 0x20);
  if (this_ptr[0x2e] == 0) {
    return;
  }
  FUN_01989f80();
  lVar1 = this_ptr[0x2e];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0039e8b0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *local_40 + 8))();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)this_ptr[0x33] == '\0') {
LAB_01a86b92:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = (double)FUN_0125a280();
    if ((char)this_ptr[0x33] == '\0') goto LAB_01a86df6;
LAB_01a86be5:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_40 == (int64_t *)0x0) {
      bVar7 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      bVar7 = local_70 != 0;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar7) goto LAB_01a86df6;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_01259520();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_012f9490();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (dVar10 <= dVar11) {
      dVar11 = dVar10;
    }
    iVar2 = (int)this_ptr[0x30];
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_40 == (int64_t *)0x0) {
      bVar7 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      bVar7 = local_70 != 0;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar7) goto LAB_01a86b92;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_0125a280();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = (double)FUN_012f7cb0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 <= dVar10) {
      local_50 = dVar10;
    }
    if ((char)this_ptr[0x33] != '\0') goto LAB_01a86be5;
LAB_01a86df6:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_01259520();
    iVar2 = (int)this_ptr[0x30];
  }
  if (iVar2 != 0) {
    if (cVar3 == '\0') {
      FUN_01a845d0();
      FUN_01d488d0();
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (iVar2 == 1) {
      FUN_01a843c0();
      FUN_01d488d0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (iVar2 == 2) {
      FUN_01a84470();
      FUN_01d488d0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x4d8))();
    FUN_01989f80();
    uVar8 = (**(code **)(*local_40 + 0x938))(local_50);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01989f80();
    uVar9 = (**(code **)(*local_40 + 0x938))(dVar11);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    roundss(ZEXT816(0),ZEXT416(uVar8),10);
    roundss(ZEXT416(uVar9),ZEXT416(uVar9),9);
    auVar12._4_4_ = fVar14;
    auVar12._0_4_ = fVar14;
    auVar12._8_4_ = uVar15;
    auVar12._12_4_ = uVar15;
    auVar13._4_12_ = auVar12._4_12_;
    auVar13._0_4_ = fVar14 * g_0239011c;
    roundss(auVar13,auVar13,9);
    FUN_01d48b40();
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    iVar2 = (int)this_ptr[0x30];
    if (iVar2 == 2) {
      FUN_01a85710(cVar3,1);
      uVar6 = 0;
      uVar5 = 1;
      goto LAB_01a870ae;
    }
    if (iVar2 == 1) {
      FUN_01a84ac0(1,1,cVar3);
      FUN_01a85710(cVar3,0);
      return;
    }
    if (iVar2 != 0) {
      return;
    }
  }
  uVar6 = 1;
  uVar5 = 0;
LAB_01a870ae:
  FUN_01a84ac0(uVar5,uVar6,cVar3);
  return;
}


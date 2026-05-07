// Function: FUN_019ef560
// Address: 019ef560
// Size: 1612 bytes
// Class: MUPitchSystemRulerView

void FUN_019ef560(double param_1)

{
  char cVar1;
  uint64_t uVar2;
  int64_t lVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  void* pVar7;
  int64_t *plVar8;
  int unaff_ESI;
  int iVar9;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint64_t extraout_XMM0_Qa;
  double dVar11;
  double dVar12;
  double dVar13;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint32_t local_64;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  if (unaff_ESI == 0) {
LAB_019ef68b:
    uVar2 = 0;
    local_70 = (int64_t *)0x0;
    plVar8 = (int64_t *)this_ptr[0x89];
joined_r0x019ef69f:
    if (plVar8 != (int64_t *)0x0) {
      local_58 = 0;
      uVar2 = FUN_00d50b00();
    }
    local_58 = '\0';
    local_64 = (uint32_t)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
    plVar10 = (int64_t *)0x0;
    local_88 = plVar8;
    local_60 = plVar8;
    if (plVar8 == (int64_t *)0x0) goto LAB_019ef670;
LAB_019ef6c2:
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = local_88;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar9 = -local_48._4_4_;
        }
        else {
          iVar9 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar9);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar9 = 0;
        }
        local_48 = CONCAT44(iVar9,(int)local_48);
      }
      lVar3 = (int64_t)(int)local_48;
      iVar9 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar9);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar9) break;
      local_b8 = *(int64_t **)(local_50[2] + 8 + lVar3 * 8);
      local_b0 = '\0';
      local_60 = local_b8;
      (**(code **)(*this_ptr + 0xab0))(local_50[2],&local_b8);
      plVar8 = local_80;
      if (local_78[0] == '\0') {
        if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x9b0))(g_02390124);
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    if ((char)local_64 != '\0') goto LAB_019ef681;
LAB_019ef80d:
    local_58 = '\0';
    local_60 = plVar10;
    FUN_00d243f0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar2 = (**(code **)(*this_ptr + 0x9b8))(g_023944d8 + param_1,g_023944e0);
    plVar10 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (int64_t *)0x0) goto LAB_019ef68b;
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == (int64_t *)0x0) {
      plVar8 = (int64_t *)this_ptr[0x89];
      local_70 = local_60;
      goto joined_r0x019ef69f;
    }
    FUN_00550890();
    plVar8 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (int64_t *)0x0) {
        plVar8 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = '\0';
    }
    local_64 = 0;
    local_70 = plVar10;
    local_88 = plVar8;
    if (plVar8 != (int64_t *)0x0) goto LAB_019ef6c2;
LAB_019ef670:
    if ((char)local_64 == '\0') goto LAB_019ef80d;
LAB_019ef681:
    FUN_00d216c0();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *this_ptr + 0x20))();
  cVar1 = (**(code **)(*local_60 + 0x50))();
  uVar2 = extraout_XMM0_Qa;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    uVar2 = FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    plVar10 = (int64_t *)this_ptr[0x89];
    if ((int)this_ptr[0x8a] == 0) {
      if (plVar10 == (int64_t *)0x0) goto LAB_019efb98;
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_40 = 0;
      local_48 = 0;
      local_50 = plVar10;
      if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
        lVar3 = 0;
        do {
          local_a8 = *(int64_t **)(plVar10[2] + lVar3 * 8);
          local_a0 = '\0';
          local_60 = local_a8;
          uVar2 = (**(code **)(*this_ptr + 0xab0))(uVar2,&local_a8);
          plVar8 = local_80;
          local_38[0] = local_78[0];
          pcVar6 = local_78;
          if (local_78[0] == '\0') {
            pcVar6 = local_38;
          }
          *pcVar6 = '\0';
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          if ((plVar8 != (int64_t *)0x0) &&
             (uVar2 = (**(code **)(*plVar8 + 0x9b0))(g_02390124), local_38[0] != '\0')) {
            uVar2 = FUN_00d50b20();
          }
          lVar3 = lVar3 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar3);
        } while ((int)lVar3 < *(int *)((int64_t)plVar10 + 0xc));
      }
    }
    else {
      if (plVar10 == (int64_t *)0x0) goto LAB_019efb98;
      local_58 = '\0';
      local_60 = (int64_t *)0x0;
      local_40 = 0;
      local_48 = 0;
      local_50 = plVar10;
      if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
        lVar3 = 0;
        do {
          local_98 = *(int64_t **)(plVar10[2] + lVar3 * 8);
          local_90 = '\0';
          local_60 = local_98;
          uVar2 = (**(code **)(*this_ptr + 0xab0))(uVar2,&local_98);
          plVar8 = local_80;
          local_38[0] = local_78[0];
          pcVar6 = local_38;
          pcVar4 = local_78;
          if (local_78[0] == '\0') {
            pcVar4 = pcVar6;
          }
          *pcVar4 = '\0';
          if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          pVar7 = (void*)pcVar6;
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            uVar2 = FUN_00d50b20();
          }
          if (plVar8 != (int64_t *)0x0) {
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar11 = (double)FUN_0125a280();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar12 = (double)FUN_01264170();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar13 = (double)FUN_01264170();
            uVar2 = (**(code **)(*plVar8 + 0x9b0))((float)((dVar12 - (param_1 - dVar11)) / dVar13));
            if (local_38[0] != '\0') {
              uVar2 = FUN_00d50b20();
            }
          }
          lVar3 = lVar3 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar3);
        } while ((int)lVar3 < *(int *)((int64_t)plVar10 + 0xc));
      }
    }
    FUN_001159b0();
  }
LAB_019efb98:
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_64 == '\0') {
    FUN_00d50b20();
  }
  return;
}


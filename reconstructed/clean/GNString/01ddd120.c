// Function: FUN_01ddd120
// Address: 01ddd120
// Size: 2037 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01ddd120(uint64_t param_1,float param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void*puVar5;
  float fVar6;
  uint8_t auVar7 [16];
  char cVar8;
  uint32_t uVar9;
  void*puVar10;
  int iVar11;
  uint64_t uVar12;
  int iVar13;
  int64_t *arg1;
  uint64_t uVar14;
  int64_t *this_ptr;
  float extraout_XMM0_Db;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint64_t local_100;
  uint8_t local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_40;
  char local_38;
  
  if ((int)this_ptr[0x29] != -1) {
    local_f8 = 0;
    local_100 = 0;
    FUN_01dd96d0(param_1,&local_100);
  }
  if (this_ptr[0x40] != 0) {
    FUN_01ddeb40();
  }
  if (*arg1 != 0) {
    FUN_01d3abf0();
    FUN_01e466c0();
    if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
      param_2 = extraout_XMM0_Db /
                (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
      iVar13 = -1;
      if ((0.0 <= param_2) && (param_2 < (float)(int)this_ptr[0x30])) {
        iVar13 = (int)param_2;
      }
    }
    else {
      iVar13 = -1;
      param_2 = extraout_XMM0_Db;
      if ((0.0 <= extraout_XMM0_Db) && (lVar3 = this_ptr[0x52], lVar3 != 0)) {
        iVar2 = *(int *)(lVar3 + 0x18);
        iVar11 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar11 = iVar2;
        }
        uVar14 = 0;
        uVar12 = (uint64_t)(uint)(iVar11 >> 2);
        if (iVar11 >> 2 < 1) {
          uVar12 = uVar14;
        }
        do {
          if (uVar12 == uVar14) goto LAB_01ddd23a;
          lVar1 = uVar14 * 4;
          uVar14 = uVar14 + 1;
        } while (*(float *)(*(int64_t *)(lVar3 + 0x10) + lVar1) <= extraout_XMM0_Db);
        iVar13 = (int)uVar14 + -1;
      }
    }
LAB_01ddd23a:
    *(int *)(this_ptr + 0x41) = iVar13;
    uVar9 = FUN_01dd3800();
    *(void*)((int64_t)this_ptr + 0x20c) = uVar9;
  }
  if ((int)this_ptr[0x41] == -1) {
    return;
  }
  if (*(int *)((int64_t)this_ptr + 0x20c) != -1) {
    plVar4 = (int64_t *)this_ptr[0x3e];
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
      lVar3 = this_ptr[0x41];
      local_e0 = *(int64_t *)
                  (*(int64_t *)(this_ptr[0x2c] + 0x10) +
                  (int64_t)*(int *)((int64_t)this_ptr + 0x20c) * 8);
      if (local_e0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = '\x01';
      cVar8 = (**(code **)(*plVar4 + 0x38))(&local_e0,(int)lVar3);
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (cVar8 == '\0') {
        this_ptr[0x41] = -1;
        return;
      }
      if ((int)this_ptr[0x41] == -1) {
        return;
      }
    }
    if ((int64_t)*(int *)((int64_t)this_ptr + 0x20c) != -1) {
      lVar3 = *(int64_t *)
               (*(int64_t *)(this_ptr[0x2c] + 0x10) +
               (int64_t)*(int *)((int64_t)this_ptr + 0x20c) * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x958))();
      uVar15 = FUN_00d05530();
      puVar10 = (void*)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(puVar10 + 0x27) = 0;
      puVar10[0x2e] = 0;
      *(void*)(puVar10 + 0x2f) = 0;
      puVar10[0x30] = 0;
      *(void*)(puVar10 + 0x31) = 0;
      puVar10[0x28] = 0;
      puVar10[0x29] = 0;
      *(void*)(puVar10 + 0x2a) = 0;
      puVar10[0x2b] = 0;
      puVar10[0x2c] = 0;
      *(void*)((int64_t)puVar10 + 0x165) = 0;
      *(void*)((int64_t)puVar10 + 0x18c) = 0;
      *(void*)((int64_t)puVar10 + 0x194) = 0;
      *(void*)((int64_t)puVar10 + 0x199) = 0;
      puVar10[0x35] = 0;
      puVar10[0x36] = 0;
      puVar10[0x37] = 0;
      puVar10[0x38] = 0;
      *puVar10 = &g_0269c118;
      puVar10[2] = &g_0269cc70;
      puVar10[0x39] = &g_0269ccb0;
      puVar10[0x45] = 0;
      *(void*)(puVar10 + 0x46) = 0;
      puVar10[0x47] = 0;
      puVar10[0x3a] = 0;
      puVar10[0x3b] = 0;
      *(void*)(puVar10 + 0x3c) = 0;
      puVar10[0x3f] = 0;
      puVar10[0x40] = 0;
      puVar10[0x3d] = 0;
      puVar10[0x3e] = 0;
      *(void*)((int64_t)puVar10 + 0x205) = 0;
      puVar10[0x42] = 0;
      puVar10[0x43] = 0;
      *(void*)((int64_t)puVar10 + 0x21d) = 0;
      (*g_0269c130)();
      puVar5 = (void*)this_ptr[0x40];
      if (puVar5 == puVar10) {
        FUN_00d50b20();
      }
      else {
        this_ptr[0x40] = (int64_t)puVar10;
        if (puVar5 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_01db9fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_01db9fb0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01e058f0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      plVar4 = (int64_t *)this_ptr[0x40];
      (**(code **)(*this_ptr + 0xa08))
                (*(void*)((int64_t)this_ptr + 0x20c),(int)this_ptr[0x41]);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar4 + 0x978))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      auVar7._8_8_ = extraout_XMM0_Qb;
      auVar7._0_8_ = uVar15;
      fVar6 = (float)((uint64_t)uVar15 >> 0x20);
      uVar9 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar16._4_12_ = auVar7._4_12_;
      auVar16._0_4_ = (float)uVar15 + g_02390124;
      auVar17._4_4_ = fVar6;
      auVar17._0_4_ = fVar6 + g_02390124;
      auVar17._8_4_ = uVar9;
      auVar17._12_4_ = uVar9;
      auVar17 = insertps(auVar16,auVar17,0x10);
      (**(code **)(*(int64_t *)this_ptr[0x40] + 0x4d0))(auVar17._0_8_,param_2);
      local_d0 = g_027f2a30;
      plVar4 = (int64_t *)this_ptr[0x40];
      if (g_027f2a30 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      (**(code **)(*plVar4 + 0xa10))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      plVar4 = (int64_t *)this_ptr[0x40];
      FUN_00d50b00();
      (**(code **)(*plVar4 + 0xa20))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_01e073f0();
      plVar4 = (int64_t *)this_ptr[0x40];
      FUN_01db9a00();
      (**(code **)(*local_f0 + 0x9e8))();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar4 + 0x9d8))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x40] + 0x3a0))();
      FUN_01dce9c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01e07460();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_a8 = 0;
      lVar1 = this_ptr[0x40];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      local_b0 = lVar1;
      (**(code **)(*this_ptr + 0x450))();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01dcf710();
      (**(code **)(*this_ptr + 0x618))();
      local_b8 = '\0';
      local_c0 = 0;
      (**(code **)(*(int64_t *)this_ptr[0x40] + 0xac0))();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    return;
  }
  return;
}


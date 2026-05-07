// Function: FUN_01d713c0
// Address: 01d713c0
// Size: 2097 bytes
// Class: GNMultipleValue

void FUN_01d713c0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t *plVar6;
  char cVar7;
  uint8_t uVar8;
  uint32_t uVar9;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_01;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float extraout_XMM0_Dd;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fVar16;
  uint32_t in_XMM1_Dc;
  float in_XMM1_Dd;
  uint32_t uVar17;
  uint32_t uVar18;
  float local_c8;
  uint32_t uStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  fVar16 = (float)((uint64_t)param_2 >> 0x20);
  uVar18 = (uint32_t)param_2;
  (**(code **)(*this_ptr + 0x640))();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar7 = FUN_01e420b0();
  if (cVar7 != '\0') {
    (**(code **)(*this_ptr + 0x878))();
  }
  cVar7 = FUN_01cef4b0();
  if (cVar7 == '\0') {
    uVar8 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    fVar16 = 0.0;
    uVar17 = 0;
    (**(code **)(*local_48 + 0x3f0))(0,0,0,uVar8);
    uVar18 = *(void*)((int64_t)this_ptr + 0x18c);
    lVar1 = this_ptr[0x2d];
    uVar9 = (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*local_48 + 0x490))((char)lVar1,uVar18,uVar9);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_48 + 0x370))();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d48a10();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    (**(code **)(*this_ptr + 0x960))();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar11 = FUN_01e3f820();
    (**(code **)(*plVar2 + 0x3f8))(uVar11,0);
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_48 + 0x370))();
    (**(code **)(*this_ptr + 0x960))();
    lVar1 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    uVar11 = FUN_01d43d10();
    local_c8 = (float)uVar11;
    uStack_c4 = (uint32_t)((uint64_t)uVar11 >> 0x20);
    uStack_c0 = (uint32_t)extraout_XMM0_Qb_01;
    uStack_bc = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e3f820();
    local_c8 = local_c8 + g_023908d8;
    auVar14._4_4_ = uStack_c4;
    auVar14._0_4_ = local_c8;
    auVar14._8_4_ = uStack_c0;
    auVar14._12_4_ = uStack_bc;
    auVar15._4_4_ = fVar16;
    auVar15._0_4_ = fVar16 * g_0239011c + extraout_XMM0_Db_00 + g_02390d00;
    auVar15._8_4_ = uVar17;
    auVar15._12_4_ = uVar17;
    auVar15 = insertps(auVar14,auVar15,0x10);
    fVar16 = 0.0;
    uVar18 = 0;
    FUN_01cb3a60(auVar15._0_8_,g_02394298);
    FUN_01e3f820();
    auVar5._4_4_ = uStack_c4;
    auVar5._0_4_ = local_c8;
    auVar5._8_4_ = uStack_c0;
    auVar5._12_4_ = uStack_bc;
    auVar3._4_4_ = fVar16;
    auVar3._0_4_ = fVar16 * g_0239011c + extraout_XMM0_Db_01 + g_02390124;
    auVar3._8_4_ = uVar18;
    auVar3._12_4_ = uVar18;
    auVar15 = insertps(auVar5,auVar3,0x10);
    FUN_01cb3a60(auVar15._0_8_,g_02394298);
  }
  else {
    uVar9 = *(void*)((int64_t)this_ptr + 0x18c);
    uVar10 = FUN_01e3f820();
    uVar17 = *(void*)((int64_t)this_ptr + 0x1fc);
    uVar11 = extraout_XMM0_Qb;
    uVar8 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*local_48 + 0x3f0))(uVar17,uVar9,0,uVar8,uVar18,in_XMM1_Dc,uVar10,uVar11);
    if (*(int *)(this_ptr[0x46] + 0xc) == 0) {
      FUN_01e3f820();
      (**(code **)(*this_ptr + 0x960))();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      (**(code **)(*this_ptr + 0x9e0))();
      local_68 = local_58;
      local_60 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_60 = '\x01';
      uVar9 = *(void*)((int64_t)this_ptr + 0x174);
      (**(code **)(*this_ptr + 0x9a0))();
      (**(code **)(*this_ptr + 0xa70))();
      (**(code **)(*local_48 + 0x400))(&local_78,uVar18,&local_68,uVar9);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((int64_t)(int)this_ptr[0x45] != -1) {
      lVar1 = *(int64_t *)
               (*(int64_t *)(this_ptr[0x46] + 0x10) + (int64_t)(int)this_ptr[0x45] * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      uVar11 = (**(code **)(*local_48 + 0x548))();
      uStack_c0 = (uint32_t)extraout_XMM0_Qb_00;
      uStack_bc = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      FUN_01d526f0();
      auVar4._8_4_ = uStack_c0;
      auVar4._0_8_ = uVar11;
      auVar4._12_4_ = uStack_bc;
      fVar16 = fVar16 - extraout_XMM0_Db;
      auVar12._4_4_ = fVar16;
      auVar12._0_4_ = fVar16;
      auVar12._8_4_ = in_XMM1_Dd - extraout_XMM0_Dd;
      auVar12._12_4_ = in_XMM1_Dd - extraout_XMM0_Dd;
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = fVar16 * g_0239011c + g_02390124 + (float)((uint64_t)uVar11 >> 0x20);
      insertps(auVar4,auVar13,0x10);
      FUN_01d49110();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}


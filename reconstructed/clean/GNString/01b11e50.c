// Function: FUN_01b11e50
// Address: 01b11e50
// Size: 1683 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint FUN_01b11e50(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  uint uVar5;
  void*puVar6;
  char in_DL;
  int64_t this_ptr;
  uint64_t uVar7;
  uint8_t auVar8 [16];
  float fVar10;
  uint32_t uVar11;
  uint8_t auVar9 [16];
  float fVar12;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_a0;
  char local_98;
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  
  fVar12 = (float)((uint64_t)param_2 >> 0x20);
  FUN_01a1d6e0();
  if (local_40 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_01a1d6e0();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_100 + 0x20))();
    if (local_110 == (int64_t *)0x0) {
      uVar5 = 0;
    }
    else {
      FUN_01a1d6e0();
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *local_e0 + 0x20))();
      uVar5 = (**(code **)(*local_f0 + 0x18))();
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        (**(code **)(*local_f0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = uVar5 ^ 1;
    }
    if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
      (**(code **)(*local_110 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (in_DL != '\x01' || (char)uVar5 != '\0') goto LAB_01b12234;
  FUN_01b06a50();
  cVar4 = FUN_01aa7eb0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_01b06a50();
    FUN_01aa8280();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01b12234;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_01b12234;
  FUN_01b06a50();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01b1205e;
    }
  }
  else if (local_40 != 0) {
LAB_01b1205e:
    FUN_01aa8370();
    FUN_01aaa300();
    if (*(int64_t *)(this_ptr + 0x2e8) == 0) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(puVar6 + 0x27) = 0;
      puVar6[0x2e] = 0;
      *(void*)(puVar6 + 0x2f) = 0;
      puVar6[0x30] = 0;
      *(void*)(puVar6 + 0x31) = 0;
      puVar6[0x28] = 0;
      puVar6[0x29] = 0;
      *(void*)(puVar6 + 0x2a) = 0;
      puVar6[0x2b] = 0;
      puVar6[0x2c] = 0;
      *(void*)((int64_t)puVar6 + 0x165) = 0;
      *(void*)((int64_t)puVar6 + 0x18c) = 0;
      *(void*)((int64_t)puVar6 + 0x194) = 0;
      *(void*)((int64_t)puVar6 + 0x199) = 0;
      puVar6[0x35] = 0;
      puVar6[0x36] = 0;
      puVar6[0x37] = 0;
      puVar6[0x38] = 0;
      *(void*)((int64_t)puVar6 + 500) = 0;
      *(void*)(puVar6 + 0x3f) = 0;
      puVar6[0x43] = 0;
      puVar6[0x3c] = 0;
      puVar6[0x3d] = 0;
      puVar6[0x3a] = 0;
      puVar6[0x3b] = 0;
      *(void*)(puVar6 + 0x3e) = 0;
      *(void*)((int64_t)puVar6 + 0x1fc) = 0;
      *(void*)((int64_t)puVar6 + 0x204) = 0;
      *(void*)((int64_t)puVar6 + 0x20c) = 0;
      *puVar6 = &g_0263cf60;
      puVar6[2] = &g_0263da38;
      puVar6[0x39] = &g_0263da78;
      (*g_0263cf78)();
      puVar3 = *(void**)(this_ptr + 0x2e8);
      if (puVar3 == puVar6) {
        FUN_00d50b20();
      }
      else {
        *(void**)(this_ptr + 0x2e8) = puVar6;
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_01cef4c0();
      plVar1 = *(int64_t **)(this_ptr + 0x2e8);
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0xa20))();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027e3cc0;
      plVar1 = *(int64_t **)(this_ptr + 0x2e8);
      if (g_027e3cc0 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0xa10))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027e3cc8;
      if (g_027e3cc8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01cef3b0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    auVar8._0_8_ = FUN_01e3f820();
    auVar8._8_8_ = extraout_XMM0_Qb;
    fVar10 = (float)((uint64_t)auVar8._0_8_ >> 0x20);
    uVar11 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar9._4_4_ = fVar10;
    auVar9._0_4_ = fVar10 + g_02390124;
    auVar9._8_4_ = uVar11;
    auVar9._12_4_ = uVar11;
    auVar9 = insertps(auVar8,auVar9,0x10);
    (**(code **)(**(int64_t **)(this_ptr + 0x2e8) + 0x4d0))(auVar9._0_8_,fVar12 + g_023b1608);
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      plVar1 = *(int64_t **)(this_ptr + 0x240);
      lVar2 = *(int64_t *)(this_ptr + 0x2e8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x450))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 0x2d0) = 1;
    FUN_01f27fe0();
    (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
    uVar7 = FUN_00d50b00();
    local_a0 = 0;
    local_98 = '\0';
    FUN_01f47190(uVar7,&local_a0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((int64_t *)(this_ptr + 0x168) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b12234:
  return uVar5 ^ 1;
}


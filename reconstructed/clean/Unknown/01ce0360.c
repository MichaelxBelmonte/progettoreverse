// Function: FUN_01ce0360
// Address: 01ce0360
// Size: 1906 bytes
// Class: Unknown

void FUN_01ce0360(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  uint64_t uVar1;
  uint32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*puVar5;
  int in_EDX;
  void*arg1;
  int64_t *this_ptr;
  char in_R8B;
  uint32_t in_R9D;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint32_t in_XMM0_Dc;
  uint32_t in_XMM0_Dd;
  float fVar10;
  uint8_t auVar11 [16];
  uint8_t uVar12;
  int64_t local_b0;
  char local_a8;
  uint32_t local_58;
  uint8_t local_48 [16];
  int64_t local_38;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar10 = (float)param_2;
  fVar9 = (float)((uint64_t)param_1 >> 0x20);
  fVar8 = (float)param_1;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = param_1;
  local_48._12_4_ = in_XMM0_Dd;
  if (in_EDX == 9) {
    if (fVar7 < fVar10) {
      (**(code **)(*this_ptr + 0x3f8))(fVar8,0x23,in_R8B,in_R9D);
      return;
    }
    (**(code **)(*this_ptr + 0x3f8))(fVar8,0x24,in_R8B,in_R9D);
    return;
  }
  lVar3 = this_ptr[0x10];
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0xc) <= in_EDX)) {
    bVar6 = false;
    local_38 = 0;
  }
  else {
    local_38 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (int64_t)in_EDX * 8);
    bVar6 = local_38 != 0;
    if (bVar6) {
      FUN_00d50b00();
    }
    if (*(char *)(local_38 + 0x50) != '\0') {
      if (in_EDX - 0x23U < 2) {
        fVar8 = (float)(**(code **)(*this_ptr + 0x560))(fVar8);
        fVar7 = fVar10;
      }
      else if (fVar10 <= fVar7) {
        auVar11._4_4_ = fVar9;
        auVar11._0_4_ = fVar9 + (fVar7 - fVar10) * param_3;
        auVar11._8_4_ = in_XMM0_Dd;
        auVar11._12_4_ = in_XMM0_Dd;
        auVar11 = insertps(local_48,auVar11,0x10);
        fVar8 = auVar11._0_4_;
        fVar7 = fVar10;
      }
      else {
        fVar8 = fVar8 + (fVar10 - fVar7) * param_3;
      }
      if (in_R8B == '\0') {
        if (*(int64_t *)(local_38 + 0x20) == 0) {
          lVar3 = *(int64_t *)(local_38 + 0x10);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          uVar1 = *(void*)(local_38 + 0x30);
          uVar2 = *(void*)(local_38 + 0x54);
          lVar4 = *(int64_t *)(local_38 + 0x58);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_58 = (uint32_t)uVar1;
          FUN_01cdecb0(local_58,uVar2,fVar8,fVar7);
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b00();
          uVar1 = *(void*)(local_38 + 0x30);
          uVar2 = *(void*)(local_38 + 0x54);
          lVar3 = *(int64_t *)(local_38 + 0x58);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          local_58 = (uint32_t)uVar1;
          FUN_01cdecb0(local_58,uVar2,fVar8,fVar7);
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = *(int64_t *)(local_38 + 0x10);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        uVar12 = 1;
        uVar1 = *(void*)(local_38 + 0x30);
        uVar2 = *(void*)(local_38 + 0x54);
        lVar4 = *(int64_t *)(local_38 + 0x58);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        local_58 = (uint32_t)uVar1;
        FUN_01cdecb0(local_58,uVar2,fVar8,fVar7,uVar12);
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01ce08ee;
    }
  }
  if (in_EDX == 0xf) {
    FUN_01cfbee0();
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    FUN_01d488d0();
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_02680400;
    *(void*)((int64_t)puVar5 + 0xc) = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(void*)((int64_t)puVar5 + 0x39) = 0;
    *(void*)((int64_t)puVar5 + 0x41) = 0;
    (*g_02680418)();
    fVar8 = g_0239011c * fVar7 + fVar8;
    FUN_01d39180();
    if ((param_4 != g_02390124) || (NAN(param_4) || NAN(g_02390124))) {
      param_3 = param_3 + g_02390118;
      fVar7 = g_02394254;
      if (g_02394254 <= param_3) {
        fVar7 = param_3;
      }
      if (0.0 <= (float)(~-(uint)(g_0240d178 < param_3) & (uint)param_3 |
                        (uint)fVar7 & -(uint)(g_0240d178 < param_3))) {
        FUN_01d39310(fVar8);
      }
      else {
        FUN_01d39310(fVar8);
      }
    }
    else {
      FUN_01d39310(fVar8);
    }
    FUN_01d38830(fVar8);
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    FUN_00d50b20();
  }
  else {
    FUN_01cc0ca0(fVar8,in_EDX,in_R8B,in_R9D);
  }
LAB_01ce08ee:
  if ((bVar6) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


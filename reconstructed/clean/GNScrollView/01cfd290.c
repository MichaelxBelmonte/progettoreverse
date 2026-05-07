// Function: FUN_01cfd290
// Address: 01cfd290
// Size: 805 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_01cfd290(float param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  void*puVar7;
  int iVar8;
  int64_t *arg1;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  plVar6 = (int64_t *)*arg1;
  FUN_001b9d20();
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01cfd2e8;
  }
  arg1 = &g_02802688;
LAB_01cfd2e8:
  lVar1 = *arg1;
  lVar3 = arg1[1];
  if (((char)lVar3 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_026792c0;
      puVar7[5] = 0;
      *(void*)((int64_t)puVar7 + 0xc) = 0;
      *(void*)((int64_t)puVar7 + 0x14) = 0;
      *(void*)((int64_t)puVar7 + 0x19) = 0;
      FUN_00d500e0();
      local_a8 = *param_2;
      local_a0 = 0;
      FUN_01cfb0d0(param_1,&local_a8);
      *this_ptr = puVar7;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_001b9f00();
  (**(code **)(*plVar6 + 0x18))();
  local_88 = '\0';
  local_90 = lVar1;
  FUN_01f7bcc0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  for (iVar8 = 0; iVar5 = FUN_01f7c6f0(), iVar8 < iVar5; iVar8 = iVar8 + 1) {
    FUN_01f7c770(extraout_XMM0_Da,iVar8);
    lVar1 = local_80;
    if ((((local_78 == '\0') && (local_80 != 0)) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = *param_2;
    local_44 = *(float *)(lVar1 + 0x10);
    local_48 = *(float *)(lVar1 + 0x14);
    local_60 = *(float *)(lVar2 + 0x10);
    local_5c = *(float *)(lVar2 + 0x14);
    local_4c = *(float *)(lVar1 + 0x18);
    local_58 = *(float *)(lVar2 + 0x18);
    local_50 = *(float *)(lVar1 + 0x1c);
    local_54 = *(float *)(lVar2 + 0x1c);
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_026792c0;
    puVar7[5] = 0;
    *(void*)((int64_t)puVar7 + 0xc) = 0;
    *(void*)((int64_t)puVar7 + 0x14) = 0;
    *(void*)((int64_t)puVar7 + 0x19) = 0;
    FUN_00d500e0();
    uVar9 = FUN_01cfce50((local_60 - local_44) * param_1 + local_44,
                         (local_5c - local_48) * param_1 + local_48,
                         (local_58 - local_4c) * param_1 + local_4c,
                         (local_54 - local_50) * param_1 + local_50);
    local_68 = '\x01';
    local_70 = puVar7;
    FUN_01f7c700(uVar9,iVar8);
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  if ((char)lVar3 != '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
}


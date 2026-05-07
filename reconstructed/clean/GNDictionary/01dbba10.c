// Function: FUN_01dbba10
// Address: 01dbba10
// Size: 1130 bytes
// Class: GNDictionary

void FUN_01dbba10(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  undefined7 uVar5;
  undefined7 extraout_var;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  byte bVar7;
  uint64_t unaff_R14;
  undefined7 uVar8;
  float fVar9;
  uint32_t uVar10;
  float fVar11;
  uint64_t uVar12;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  uint32_t local_34;
  
  uVar12 = FUN_01e3f820();
  uVar4 = (**(code **)(*this_ptr + 0x960))();
  local_40 = local_50;
  if (local_50 == 0) {
    uVar8 = (undefined7)((uint64_t)unaff_R14 >> 8);
    bVar7 = 1;
    local_34 = 0;
  }
  else {
    if (local_48 == '\0') {
      uVar4 = FUN_00d50b00();
      bVar7 = 0;
      uVar8 = 0;
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if ((local_48 == '\0') || (local_50 == 0)) goto LAB_01dbba96;
      uVar4 = FUN_00d50b20();
    }
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    bVar7 = 0;
    uVar8 = 0;
  }
LAB_01dbba96:
  (**(code **)(*this_ptr + 0x9e8))();
  local_70 = local_50;
  local_68 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  FUN_01d48a10();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  iVar3 = (**(code **)(*this_ptr + 0x9f8))();
  lVar6 = local_40;
  param_2 = param_2 + g_023b8b2c;
  if (iVar3 == 0) goto LAB_01dbbc82;
  local_b0 = local_40;
  local_a8 = '\0';
  local_a0 = *arg1;
  local_98 = '\0';
  uVar4 = (**(code **)(*this_ptr + 0xa00))(&local_a0,&local_b0);
  lVar2 = local_40;
  uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
  if (lVar6 == local_50) {
    uVar10 = local_34;
    if ((bool)(bVar7 & lVar6 != 0)) {
      lVar6 = local_40;
      if (local_48 != '\0') goto LAB_01dbbbc7;
      FUN_00d50b00();
      lVar6 = lVar2;
      uVar10 = (int)CONCAT71(uVar8,1);
    }
LAB_01dbbc2c:
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar6 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      uVar10 = (uint32_t)CONCAT71(uVar8,1);
      if (((byte)local_34 & lVar2 != 0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01dbbc2c;
    }
    if (((byte)local_34 & local_40 != 0) == 1) {
      FUN_00d50b20();
      uVar5 = extraout_var;
    }
LAB_01dbbbc7:
    local_48 = '\0';
    uVar10 = (int)CONCAT71(uVar5,1);
  }
  local_34 = uVar10;
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
LAB_01dbbc82:
  if ((*(int *)((int64_t)this_ptr + 0x174) == 0xff) ||
     (*(int *)((int64_t)this_ptr + 0x174) == 0)) {
    plVar1 = (int64_t *)*arg1;
    (**(code **)(*this_ptr + 0x9e8))();
    local_88 = '\0';
    local_90 = lVar6;
    FUN_01d44870(param_2,&local_90);
    local_60 = local_50;
    local_58 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    fVar9 = (float)(**(code **)(*this_ptr + 0xab8))();
    uVar10 = (**(code **)(*this_ptr + 0xab8))();
    local_40 = CONCAT44(local_40._4_4_,uVar10);
    (**(code **)(*this_ptr + 0x9e8))();
    fVar11 = (float)FUN_01d43ca0();
    (**(code **)(*plVar1 + 0x3f0))
              (fVar9 + (float)uVar12,(float)((uint64_t)uVar12 >> 0x20) + (float)local_40 + fVar11);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar1 = (int64_t *)*arg1;
    local_78 = '\0';
    local_80 = lVar6;
    uVar10 = FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3f8))(uVar10,*(void*)((int64_t)this_ptr + 0x174));
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_34 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}


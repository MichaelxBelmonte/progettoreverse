// Function: FUN_016e9c70
// Address: 016e9c70
// Size: 1885 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016e9c70(char param_1,int param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  void*puVar12;
  uint64_t uVar13;
  int64_t *arg1;
  uint32_t uVar14;
  int64_t local_f8;
  uint8_t local_f0;
  uint64_t local_e8;
  uint8_t local_e0;
  uint64_t local_d8;
  uint8_t local_d0;
  void*local_c8;
  uint8_t local_c0;
  uint64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  void*local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  int local_74;
  uint64_t local_70;
  uint64_t local_68;
  uint32_t local_5c;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  char local_38;
  
  local_f8 = *arg1;
  local_74 = param_2;
  if (*(int *)(local_f8 + 0x10) == 0) {
    bVar7 = 1;
    if (*(uint64_t *)(local_f8 + 0x14) >> 0x20 != 0) goto LAB_016e9cc6;
  }
  else {
    if (*(uint64_t *)(local_f8 + 0x14) >> 0x20 == 0) {
      bVar7 = 1;
    }
    else {
      bVar7 = FUN_00e7c000();
      bVar7 = bVar7 ^ 1;
      local_f8 = *arg1;
    }
LAB_016e9cc6:
    bVar7 = bVar7 ^ 1;
  }
  local_f0 = 0;
  uVar14 = FUN_016ce9f0(1,&local_f8);
  uVar5 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar14 = FUN_00d50b00();
  }
  FUN_016bf560(uVar14,0xffffffff);
  if (param_1 != '\0') {
    local_40 = *(uint64_t *)(uVar5 + 0xc);
    if (local_40 >> 0x20 == 0) {
      local_40 = FUN_00e7bdb0();
    }
    local_58 = CONCAT44(local_58._4_4_,1);
    FUN_00e7c280();
    if (*(uint64_t *)(uVar5 + 0x14) >> 0x20 == 0) {
      local_40 = FUN_00e7bdb0();
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,1);
      local_40 = *(uint64_t *)(uVar5 + 0x14);
      FUN_00e7c280();
    }
    local_48 = CONCAT44(local_48._4_4_,1);
    uVar14 = FUN_00e7c260();
    FUN_016bf110(uVar14,local_40);
  }
  FUN_016d8ab0();
  uVar6 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (bVar7 == 0) {
    puVar1 = (uint64_t *)(uVar6 + 0xc);
    if (((*(int *)(uVar6 + 0x10) != 0) && (*(int *)(uVar6 + 0x18) != 0)) &&
       (cVar8 = FUN_00e7c000(), cVar8 != '\0')) {
LAB_016ea226:
      lVar2 = *arg1;
      uVar14 = *(void*)(uVar5 + 0x10);
      uVar3 = *(void*)(uVar5 + 0x14);
      uVar4 = *(void*)(uVar5 + 0x18);
      *(void*)(lVar2 + 0xc) = *(void*)(uVar5 + 0xc);
      *(void*)(lVar2 + 0x10) = uVar14;
      *(void*)(lVar2 + 0x14) = uVar3;
      *(void*)(lVar2 + 0x18) = uVar4;
      goto LAB_016ea233;
    }
    uVar10 = *(uint64_t *)(uVar5 + 0xc);
    if (uVar10 >> 0x20 == 0) {
      uVar10 = FUN_00e7bdb0();
    }
    if (*puVar1 >> 0x20 == 0) {
      local_48 = uVar10;
      local_58 = FUN_00e7bdb0();
      uVar10 = local_48;
      iVar9 = local_48._4_4_;
    }
    else {
      iVar9 = (int)(uVar10 >> 0x20);
      local_58 = *puVar1;
    }
    local_48 = uVar10;
    if (((iVar9 != 0) && (local_58 >> 0x20 != 0)) && (cVar8 = FUN_00e7c020(), cVar8 == '\0')) {
      if (*(uint64_t *)(uVar5 + 0x14) >> 0x20 == 0) {
        local_68 = FUN_00e7bdb0();
      }
      else {
        local_5c = 1;
        local_40 = *(uint64_t *)(uVar5 + 0x14);
        FUN_00e7c280();
        local_68 = local_40;
      }
      local_70 = *puVar1;
      if (local_70 >> 0x20 == 0) {
        local_70 = FUN_00e7bdb0();
        iVar9 = local_68._4_4_;
      }
      else {
        iVar9 = (int)(local_68 >> 0x20);
      }
      if (((iVar9 != 0) && (local_70 >> 0x20 != 0)) && (cVar8 = FUN_00e7c020(), cVar8 == '\0')) {
        uVar10 = *puVar1;
        if (uVar10 >> 0x20 == 0) {
          uVar10 = FUN_00e7bdb0();
        }
        local_68 = CONCAT44(local_68._4_4_,1);
        local_40 = uVar10;
        FUN_00e7c280();
        uVar10 = local_40;
        local_48 = local_40;
        local_40 = FUN_00e7bdb0();
        if (((uVar10 >> 0x20 == 0) || (local_40 >> 0x20 == 0)) ||
           (cVar8 = FUN_00e7c000(), uVar10 = local_48, cVar8 == '\0')) {
          local_58 = CONCAT44(local_58._4_4_,1);
          local_40 = uVar10;
          FUN_00e7c260();
          uVar10 = local_40;
        }
        else {
          uVar10 = FUN_00e7bdb0();
        }
        *(uint64_t *)(uVar5 + 0x14) = uVar10;
      }
    }
    if (*(uint64_t *)(uVar5 + 0x14) >> 0x20 == 0) {
      local_48 = FUN_00e7bdb0();
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,1);
      local_40 = *(uint64_t *)(uVar5 + 0x14);
      FUN_00e7c280();
      local_48 = local_40;
    }
    if (*(uint64_t *)(uVar6 + 0x14) >> 0x20 == 0) {
      local_58 = FUN_00e7bdb0();
    }
    else {
      local_5c = 1;
      local_40 = *(uint64_t *)(uVar6 + 0x14);
      FUN_00e7c280();
      local_58 = local_40;
    }
    if (((local_48._4_4_ != 0) && (local_58 >> 0x20 != 0)) &&
       (cVar8 = FUN_00e7c020(), cVar8 == '\0')) {
      uVar10 = *(uint64_t *)(uVar5 + 0xc);
      if (uVar10 >> 0x20 == 0) {
        uVar10 = FUN_00e7bdb0();
      }
      local_68 = uVar10;
      if (*(uint64_t *)(uVar6 + 0x14) >> 0x20 == 0) {
        local_70 = FUN_00e7bdb0();
      }
      else {
        local_5c = 1;
        local_40 = *(uint64_t *)(uVar6 + 0x14);
        FUN_00e7c280();
        local_70 = local_40;
      }
      if (((local_68._4_4_ != 0) && (local_70 >> 0x20 != 0)) &&
         (cVar8 = FUN_00e7c020(), cVar8 != '\0')) {
        if (*(uint64_t *)(uVar6 + 0x14) >> 0x20 == 0) {
          uVar10 = FUN_00e7bdb0();
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,1);
          local_40 = *(uint64_t *)(uVar6 + 0x14);
          FUN_00e7c280();
          uVar10 = local_40;
        }
        local_40 = uVar10;
        local_48 = FUN_00e7bdb0();
        if (((uVar10 >> 0x20 != 0) && (local_48 >> 0x20 != 0)) &&
           (cVar8 = FUN_00e7c000(), uVar10 = local_40, cVar8 != '\0')) {
          uVar10 = FUN_00e7bdb0();
        }
        *(uint64_t *)(uVar5 + 0xc) = uVar10;
      }
    }
    if (*(uint64_t *)(uVar5 + 0x14) >> 0x20 == 0) {
      uVar11 = FUN_00e7bdb0();
      uVar10 = *(uint64_t *)(uVar5 + 0xc);
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,1);
      local_40 = *(uint64_t *)(uVar5 + 0x14);
      FUN_00e7c280();
      uVar10 = *(uint64_t *)(uVar5 + 0xc);
      uVar11 = local_40;
    }
    if (uVar10 >> 0x20 == 0) {
      uVar10 = FUN_00e7bdb0();
    }
    local_58 = uVar10;
    local_40 = uVar11;
    FUN_00e7b970();
    uVar10 = local_40;
    local_48 = local_40;
    local_40 = CONCAT44(local_40._4_4_,3);
    if ((uVar10 >> 0x20 == 0) || (cVar8 = FUN_00e7c6b0(), cVar8 != '\0')) goto LAB_016ea226;
  }
  else {
LAB_016ea233:
    local_e8 = uVar5;
    local_e0 = 0;
    local_50 = uVar6;
    FUN_016d4110();
    puVar12 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar12 = &g_025fa538;
    uVar4 = _UNK_0239372c;
    uVar3 = _UNK_02393728;
    uVar14 = _UNK_02393724;
    *(void*)((int64_t)puVar12 + 0xc) = g_02393720;
    *(void*)(puVar12 + 2) = uVar14;
    *(void*)((int64_t)puVar12 + 0x14) = uVar3;
    *(void*)(puVar12 + 3) = uVar4;
    FUN_00d500e0();
    uVar13 = FUN_00e7bdb0();
    *(void*)((int64_t)puVar12 + 0x14) = uVar13;
    *(void*)((int64_t)puVar12 + 0xc) = uVar13;
    local_d8 = uVar5;
    local_d0 = 0;
    local_c0 = 0;
    local_c8 = puVar12;
    FUN_016d23e0(1,&local_d8,0,1);
    uVar6 = local_40;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    iVar9 = local_74;
    if (0 < local_74) {
      if (5 < local_74) {
        local_b8 = uVar6;
        local_b0 = 0;
        FUN_016eaf10(0,2);
      }
      local_a8 = uVar6;
      local_a0 = 0;
      FUN_016eaf10(0,iVar9);
    }
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_98 = puVar12;
    FUN_016dcbf0(0,&local_88);
    uVar10 = local_50;
    FUN_016d63b0();
    if (uVar6 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 == 0) goto LAB_016ea3ae;
  }
  FUN_00d50b20();
LAB_016ea3ae:
  if (uVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}


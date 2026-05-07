// Function: FUN_00abc51d
// Address: 00abc51d
// Size: 1750 bytes
// Class: OsSignatureMac

void FUN_00abc51d(uint64_t param_1,void*param_2)

{
  uint64_t uVar1;
  void*puVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t arg1;
  uint64_t this_ptr;
  uint64_t uVar11;
  int64_t lVar12;
  void*puVar13;
  uint64_t local_80 [2];
  void*local_70;
  int64_t local_68;
  void*local_60;
  uint64_t local_58;
  uint64_t local_50;
  void*local_48;
  void**local_40;
  int local_34;
  
  local_48 = local_80;
  local_40 = &local_70;
  puVar13 = &g_0252aea8;
LAB_00abc57d:
  local_58 = arg1 - 0x28;
  uVar6 = this_ptr;
LAB_00abc5c1:
  while( true ) {
    this_ptr = uVar6;
    uVar6 = arg1 - this_ptr;
    if ((uint64_t)(((int64_t)uVar6 >> 3) * -0x3333333333333333) < 6) {
                                              (*(&g_00abcd5c +
                *(int *)(&g_00abcd5c + ((int64_t)uVar6 >> 3) * 0x3333333333333334)))();
      return;
    }
    if ((int64_t)uVar6 < 0x118) {
      FUN_00abd84d(uVar6,param_2);
      return;
    }
    uVar9 = this_ptr + (uVar6 / 0x50) * 0x28;
    if ((int64_t)uVar6 < 0x9c19) {
      iVar5 = FUN_00abcd74(param_2,local_58);
    }
    else {
      iVar5 = FUN_00abd489((uVar6 / 0x14 & 0xfffffffffffffff8) * 5 + uVar9,uVar9,local_58,param_2,
                           puVar13);
    }
    cVar3 = (**param_2)();
    uVar6 = local_58;
    uVar10 = arg1 - 0x50;
    if (cVar3 != '\0') break;
    while (uVar6 = uVar10, uVar10 = local_58, this_ptr != uVar6) {
      cVar3 = (**param_2)();
      puVar2 = local_48;
      uVar10 = uVar6 - 0x28;
      if (cVar3 != '\0') goto LAB_00abc864;
    }
    uVar6 = this_ptr + 0x28;
    cVar3 = (**param_2)();
    if (cVar3 == '\0') {
      if (uVar6 == uVar10) {
        return;
      }
      uVar6 = this_ptr + 0x50;
      while (cVar3 = (**param_2)(), puVar2 = local_48, cVar3 == '\0') {
        uVar6 = uVar6 + 0x28;
        if (arg1 == uVar6) {
          return;
        }
      }
      uVar1 = *(void*)(uVar6 - 0x20);
      local_48[1] = *(void*)(uVar6 - 0x18);
      *puVar2 = uVar1;
      local_70 = &g_0252af70;
      local_68 = *(int64_t *)(uVar6 - 8);
      if (local_68 != 0) {
        _CFRetain();
      }
      uVar1 = *(void*)(arg1 - 0x20);
      *(void*)(uVar6 - 0x18) = *(void*)(arg1 - 0x18);
      *(void*)(uVar6 - 0x20) = uVar1;
      FUN_00abdcf0();
      uVar1 = *local_48;
      *(void*)(arg1 - 0x18) = local_48[1];
      *(void*)(arg1 - 0x20) = uVar1;
      FUN_00abdcf0();
      FUN_00abb66e();
      uVar10 = local_58;
    }
    if (uVar6 == uVar10) {
      return;
    }
    while( true ) {
      lVar7 = uVar6 - 0x10;
      do {
        lVar12 = lVar7;
        cVar3 = (**param_2)();
        lVar7 = lVar12 + 0x28;
      } while (cVar3 == '\0');
      local_50 = lVar12 + 0x38;
      do {
        uVar9 = uVar10;
        uVar10 = uVar9 - 0x28;
        cVar3 = (**param_2)();
        puVar2 = local_48;
      } while (cVar3 != '\0');
      uVar6 = lVar12 + 0x10U;
      if (uVar10 <= lVar12 + 0x10U) break;
      uVar1 = *(void*)(lVar12 + 0x18);
      local_48[1] = *(void*)(lVar12 + 0x20);
      *puVar2 = uVar1;
      local_70 = &g_0252af70;
      local_68 = *(int64_t *)(lVar12 + 0x30);
      if (local_68 != 0) {
        _CFRetain();
      }
      uVar1 = *(void*)(uVar9 - 0x20);
      *(void*)(lVar12 + 0x20) = *(void*)(uVar9 - 0x18);
      *(void*)(lVar12 + 0x18) = uVar1;
      FUN_00abdcf0();
      uVar1 = *local_48;
      *(void*)(uVar9 - 0x18) = local_48[1];
      *(void*)(uVar9 - 0x20) = uVar1;
      FUN_00abdcf0();
      FUN_00abb66e();
      uVar6 = local_50;
    }
  }
  goto LAB_00abc908;
LAB_00abc864:
  uVar1 = *(void*)(this_ptr + 8);
  local_34 = iVar5;
  local_48[1] = *(void*)(this_ptr + 0x10);
  *puVar2 = uVar1;
  local_70 = &g_0252af70;
  local_68 = *(int64_t *)(this_ptr + 0x20);
  if (local_68 != 0) {
    _CFRetain();
  }
  uVar1 = *(void*)(uVar6 + 8);
  *(void*)(this_ptr + 0x10) = *(void*)(uVar6 + 0x10);
  *(void*)(this_ptr + 8) = uVar1;
  FUN_00abdcf0();
  uVar1 = *local_48;
  *(void*)(uVar6 + 0x10) = local_48[1];
  *(void*)(uVar6 + 8) = uVar1;
  FUN_00abdcf0();
  FUN_00abb66e();
  iVar5 = local_34 + 1;
LAB_00abc908:
  uVar10 = this_ptr + 0x28;
  uVar8 = uVar10;
  if (uVar10 < uVar6) {
    while( true ) {
      local_34 = iVar5;
      uVar10 = uVar8 - 0x28;
      do {
        uVar8 = uVar10;
        uVar10 = uVar8 + 0x28;
        cVar3 = (**param_2)();
      } while (cVar3 != '\0');
      local_50 = uVar8 + 0x50;
      do {
        uVar11 = uVar6;
        uVar6 = uVar11 - 0x28;
        cVar3 = (**param_2)();
        puVar2 = local_48;
      } while (cVar3 == '\0');
      iVar5 = local_34;
      if (uVar6 < uVar10) break;
      uVar1 = *(void*)(uVar8 + 0x30);
      local_48[1] = *(void*)(uVar8 + 0x38);
      *puVar2 = uVar1;
      local_70 = &g_0252af70;
      local_68 = *(int64_t *)(uVar8 + 0x48);
      local_60 = (void*)(uVar8 + 0x30);
      if (local_68 != 0) {
        _CFRetain();
      }
      uVar1 = *(void*)(uVar11 - 0x20);
      local_60[1] = *(void*)(uVar11 - 0x18);
      *local_60 = uVar1;
      local_60 = (void*)(uVar11 - 0x10);
      FUN_00abdcf0();
      uVar1 = *local_48;
      *(void*)(uVar11 - 0x18) = local_48[1];
      *(void*)(uVar11 - 0x20) = uVar1;
      FUN_00abdcf0();
      FUN_00abb66e();
      uVar8 = local_50;
      iVar5 = local_34 + 1;
      if (uVar9 == uVar10) {
        uVar9 = uVar6;
      }
    }
  }
  if ((uVar10 != uVar9) && (cVar3 = (**param_2)(), puVar2 = local_48, cVar3 != '\0')) {
    uVar1 = *(void*)(uVar10 + 8);
    local_34 = iVar5;
    local_48[1] = *(void*)(uVar10 + 0x10);
    *puVar2 = uVar1;
    local_70 = &g_0252af70;
    local_68 = *(int64_t *)(uVar10 + 0x20);
    if (local_68 != 0) {
      _CFRetain();
    }
    uVar1 = *(void*)(uVar9 + 8);
    *(void*)(uVar10 + 0x10) = *(void*)(uVar9 + 0x10);
    *(void*)(uVar10 + 8) = uVar1;
    local_50 = uVar10;
    FUN_00abdcf0();
    uVar1 = *local_48;
    *(void*)(uVar9 + 0x10) = local_48[1];
    *(void*)(uVar9 + 8) = uVar1;
    FUN_00abdcf0();
    FUN_00abb66e();
    iVar5 = local_34 + 1;
    uVar10 = local_50;
  }
  uVar9 = uVar10;
  if (iVar5 == 0) {
    uVar4 = FUN_00abd9c8();
    local_60 = (void*)CONCAT71(local_60._1_7_,uVar4);
    local_50 = uVar10;
    cVar3 = FUN_00abd9c8();
    if (cVar3 != '\0') goto LAB_00abcbac;
    uVar9 = local_50;
    uVar6 = uVar10 + 0x28;
    if ((char)local_60 != '\0') goto LAB_00abc5c1;
  }
  lVar7 = ((int64_t)(arg1 - uVar9) >> 3) * -0x3333333333333333;
  if (lVar7 <= ((int64_t)(uVar9 - this_ptr) >> 3) * -0x3333333333333333) {
    FUN_00abc51d(lVar7,param_2);
    arg1 = uVar9;
    goto LAB_00abc57d;
  }
  FUN_00abc51d(lVar7,param_2);
  uVar6 = uVar9 + 0x28;
  goto LAB_00abc5c1;
LAB_00abcbac:
  arg1 = local_50;
  if ((char)local_60 != '\0') {
    return;
  }
  goto LAB_00abc57d;
}


// Function: FUN_01e54920
// Address: 01e54920
// Size: 2133 bytes
// Class: Unknown

void FUN_01e54920(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  bool bVar6;
  bool bVar7;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  int local_58;
  uint32_t local_50;
  uint32_t uStack_4c;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (((((char)this_ptr[8] == '\0') || (this_ptr[3] == 0)) ||
      (cVar2 = FUN_01e5c800(), cVar2 == '\0')) || (iVar3 = FUN_01d3a5a0(), iVar3 != 2))
  goto LAB_01e55133;
  FUN_01d3b5d0();
  if (local_70 == (int64_t *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_01d3b5d0();
    iVar3 = FUN_00d8c7a0();
    if (iVar3 == 0) {
      bVar6 = false;
    }
    else {
      FUN_01d3b5d0();
      cVar2 = FUN_00d8ca70();
      bVar6 = cVar2 == '\x1b';
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d3b5d0();
  iVar3 = FUN_00d8c7a0();
  if (iVar3 == 0) {
LAB_01e54a47:
    FUN_01d3b5d0();
    iVar4 = FUN_00d8c7a0();
    if (iVar4 == 0) {
      bVar7 = false;
    }
    else {
      FUN_01d3b5d0();
      cVar2 = FUN_00d8ca70();
      bVar7 = cVar2 == ' ';
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 != 0) goto LAB_01e54ac1;
  }
  else {
    FUN_01d3b5d0();
    cVar2 = FUN_00d8ca70();
    bVar7 = true;
    if (cVar2 != '\r') goto LAB_01e54a47;
LAB_01e54ac1:
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = g_027f3d68;
  if (bVar6) {
    if (g_027f3d68 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027f0d08;
    if (g_027f0d08 != 0) {
      FUN_00d50b00();
    }
    FUN_00083ea0(2);
    FUN_000b6830();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if (((char)local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = local_40;
      local_58 = -1;
      while( true ) {
        local_50 = 0;
        lVar5 = (int64_t)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(local_40 + 0xc) <= local_58) break;
        local_70 = *(int64_t **)(*(int64_t *)(local_40 + 0x10) + 8 + lVar5 * 8);
        FUN_01caeba0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar2 = (**(code **)(*this_ptr + 0x3b8))();
        if (cVar2 != '\0') {
          (**(code **)(*this_ptr + 0x3b8))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00018280();
          FUN_00d50b20();
          return;
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00018280();
      FUN_00d50b20();
    }
  }
  lVar5 = g_027f3d70;
  if (bVar7) {
    if (g_027f3d70 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027f3d60;
    if (g_027f3d60 != 0) {
      FUN_00d50b00();
    }
    FUN_00083ea0(2);
    FUN_000b6830();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if (((char)local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = -1;
      while( true ) {
        lVar5 = (int64_t)local_58;
        local_58 = local_58 + 1;
        iVar3 = *(int *)(local_40 + 0xc);
        if (iVar3 <= local_58) break;
        local_70 = *(int64_t **)(*(int64_t *)(local_40 + 0x10) + 8 + lVar5 * 8);
        FUN_01caeba0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        cVar2 = (**(code **)(*this_ptr + 0x3b8))();
        if (cVar2 != '\0') {
          (**(code **)(*this_ptr + 0x3b8))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          break;
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00018280();
      FUN_00d50b20();
      if (local_58 < iVar3) {
        return;
      }
    }
  }
  FUN_01da4890();
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01e550eb;
    }
  }
  else if (local_70 != (int64_t *)0x0) {
LAB_01e550eb:
    (**(code **)(*local_70 + 0x3c0))();
    FUN_00d50b20();
    return;
  }
LAB_01e55133:
  FUN_01d82ea0();
  return;
}


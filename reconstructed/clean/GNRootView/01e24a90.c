// Function: FUN_01e24a90
// Address: 01e24a90
// Size: 1999 bytes
// Class: GNRootView

void FUN_01e24a90(void)

{
  bool bVar1;
  char cVar2;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  bool bVar6;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_78;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d403d0();
  lVar3 = g_027f33c8;
  if (g_027f33c8 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_d8 = 0;
  local_d0 = '\0';
  FUN_00d40470(&local_d8,&stack0xffffffffffffff58,1,3);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x20) == 0) {
    return;
  }
  if ((*(int *)(this_ptr + 0xc) != -1) && (*(int *)(this_ptr + 0x10) != -1)) {
    FUN_01e26090();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if ((*(int *)(this_ptr + 0xc) == -1) || (*(int *)(this_ptr + 0x10) == -1)) {
        local_38 = '\0';
        local_40 = 0;
      }
      else {
        FUN_01e26090();
      }
      cVar2 = FUN_01e26480();
      if (cVar2 == '\0') {
        bVar5 = false;
      }
      else {
        if ((*(int *)(this_ptr + 0xc) == -1) || (*(int *)(this_ptr + 0x10) == -1)) {
          local_58 = '\0';
          local_60 = 0;
        }
        else {
          FUN_01e26090();
        }
        FUN_01e26490();
        bVar5 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar5) {
        return;
      }
      if ((*(int *)(this_ptr + 0xc) == -1) || (*(int *)(this_ptr + 0x10) == -1)) {
        local_58 = '\0';
        local_60 = 0;
      }
      else {
        FUN_01e26090();
      }
      FUN_01e26490();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01caeba0();
      if (local_40 == 0) {
        local_40 = 0;
        bVar6 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar6 = true;
      }
      else {
        bVar6 = true;
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_01caec40();
      if ((*(int *)(this_ptr + 0xc) == -1) || (*(int *)(this_ptr + 0x10) == -1)) {
        local_58 = '\0';
        local_60 = 0;
LAB_01e2514e:
        local_78 = 0;
      }
      else {
        FUN_01e26090();
        if (local_58 == '\0') {
          if (local_60 == 0) goto LAB_01e2514e;
          FUN_00d50b00();
          local_78 = local_60;
        }
        else {
          local_78 = local_60;
          local_58 = '\0';
        }
      }
      lVar3 = g_027e1388;
      if (g_027e1388 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01e251e5;
    }
  }
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    return;
  }
  if (*(int64_t *)
       (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
       (int64_t)*(int *)(this_ptr + 0xc) * 8) == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    lVar3 = 0;
    bVar5 = true;
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
             (int64_t)*(int *)(this_ptr + 0xc) * 8);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar5 = false;
  }
  cVar2 = FUN_01e26480();
  if (cVar2 == '\0') {
    bVar6 = false;
    if (!bVar5 && lVar3 != 0) goto LAB_01e24e89;
  }
  else {
    if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
      lVar4 = 0;
      bVar1 = true;
    }
    else {
      lVar4 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
               (int64_t)*(int *)(this_ptr + 0xc) * 8);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_00d50b00();
      }
      bVar1 = false;
    }
    FUN_01e26490();
    bVar6 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar1 && lVar4 != 0) {
      FUN_00d50b20();
    }
    if (!bVar5 && lVar3 != 0) {
LAB_01e24e89:
      FUN_00d50b20();
    }
  }
  if (!bVar6) {
    return;
  }
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    lVar3 = 0;
    bVar5 = true;
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
             (int64_t)*(int *)(this_ptr + 0xc) * 8);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar5 = false;
  }
  FUN_01e26490();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01caeba0();
  if (local_40 == 0) {
    local_40 = 0;
    bVar6 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar6 = true;
  }
  else {
    bVar6 = true;
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar5 && lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_01caec40();
  lVar3 = g_027e1388;
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    local_b8 = 0;
  }
  else {
    local_b8 = *(int64_t *)
                (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
                (int64_t)*(int *)(this_ptr + 0xc) * 8);
    if (local_b8 != 0) {
      FUN_00d50b00();
      lVar3 = g_027e1388;
    }
  }
  local_b0 = '\x01';
  g_027e1388 = lVar3;
  if (lVar3 != 0) {
    local_b0 = '\x01';
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_01e251e5:
  if (local_40 != 0) {
    local_c0 = '\0';
    local_c8 = local_40;
    (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x3b8))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      FUN_00d50b20();
    }
  }
  return;
}


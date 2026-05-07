// Function: FUN_01ec9e00
// Address: 01ec9e00
// Size: 1403 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"

void FUN_01ec9e00(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar8 = FUN_01ccad60();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar8 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((this_ptr[0xc] == 0) || (*(char *)((int64_t)this_ptr + 0x71) != '\0')) {
    local_38 = '\0';
    local_40 = (int64_t *)0x0;
    local_48 = '\0';
    local_50 = (int64_t *)0x0;
    uVar8 = FUN_01ccd250(uVar8,&local_50);
    plVar2 = local_40;
    plVar6 = (int64_t *)this_ptr[0xc];
    if (plVar6 != local_40) {
      if (local_40 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b00();
      }
      this_ptr[0xc] = (int64_t)plVar2;
      if (plVar6 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b20();
      }
    }
    plVar2 = local_50;
    plVar6 = (int64_t *)this_ptr[0xd];
    if (plVar6 != local_50) {
      if (local_50 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b00();
      }
      this_ptr[0xd] = (int64_t)plVar2;
      if (plVar6 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  if ((*(char *)((int64_t)this_ptr + 0x72) == '\0') ||
     (*(char *)((int64_t)this_ptr + 0x71) != '\0')) {
    FUN_01d6f8d0();
    FUN_00d8ede0();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*local_58 + 0x958))();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d216c0();
    uVar8 = (**(code **)(*this_ptr + 0x518))();
  }
  lVar1 = g_027edfd0;
  if (g_027edfd0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_a8 = lVar1;
  local_a0 = '\x01';
  FUN_01ccaae0(uVar8,&local_a8);
  local_78 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 == (int64_t *)0x0) goto LAB_01eca2b4;
  pplVar7 = &local_40;
  uVar8 = (**(code **)(*this_ptr + 0x520))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      local_70 = local_40;
      uVar8 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
      goto LAB_01eca08e;
    }
  }
  else {
    local_70 = local_40;
    if (local_40 != (int64_t *)0x0) {
LAB_01eca08e:
      lVar1 = g_027e7c20;
      if (g_027e7c20 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      (**(code **)(*this_ptr + 0x4c8))(uVar8,&local_98);
      plVar6 = local_50;
      if (local_48 == '\0') {
        if (local_50 == (int64_t *)0x0) {
          local_40 = (int64_t *)0x0;
          local_38 = '\x01';
          plVar6 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          local_40 = plVar6;
          local_38 = '\x01';
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_40 = local_50;
        local_38 = '\x01';
        local_48 = '\0';
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((g_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d3c38 = FUN_00d4fe50();
        g_026d3c20 = "GNMultipleValue";
        g_026d3c28 = 0x18;
        g_026d3c30 = FUN_00050c70;
        g_026d3c40 = 0;
        ram_00000000026d3c48 = 0;
        g_026d3c50 = 0;
        ram_00000000026d3c58 = 0;
        g_026d3c60 = 0;
        ram_00000000026d3c68 = 0;
        g_026d3c70 = 0;
        ram_00000000026d3c78 = 0;
        g_026d3c80 = 0;
        ram_00000000026d3c88 = 0;
        g_026d3c90 = 0;
        ram_00000000026d3c98 = 0;
        g_026d3ca0 = 0;
        ram_00000000026d3ca8 = 0;
        g_026d3cb0 = 0;
        ram_00000000026d3cb8 = 0;
        g_026d3cc0 = 0;
        ram_00000000026d3cc8 = 0;
        g_026d3cd0 = 0;
        ram_00000000026d3cd8 = 0;
        g_026d3ce0 = 0;
        ___cxa_guard_release();
      }
      if (plVar6 == (int64_t *)0x0) {
LAB_01eca12d:
        pplVar7 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar6 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_01eca12d;
      }
      cVar4 = *(char *)(pplVar7 + 1);
      if ((cVar4 == '\0') || (*pplVar7 == (int64_t *)0x0)) {
        if (*pplVar7 != (int64_t *)0x0) goto LAB_01eca159;
      }
      else {
        FUN_00d50b00();
LAB_01eca159:
        FUN_00e987e0();
        cVar3 = local_38;
        plVar2 = local_40;
        plVar6 = local_50;
        if (local_40 == local_50) {
          if ((local_38 == '\0') && (local_50 != (int64_t *)0x0)) {
            if (local_48 != '\0') goto LAB_01eca1db;
            FUN_00d50b00();
            goto LAB_01eca221;
          }
LAB_01eca225:
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_40 = plVar6;
            if ((cVar3 != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01eca221:
            local_38 = '\x01';
            goto LAB_01eca225;
          }
          local_40 = local_50;
          if ((local_38 != '\0') && (plVar2 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01eca1db:
          local_38 = '\x01';
        }
        if (cVar4 != '\0') {
          FUN_00d50b20();
        }
      }
      plVar6 = local_40;
      if (local_40 != (int64_t *)0x0) {
        local_88 = local_40;
        local_80 = '\0';
        FUN_00d237a0();
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d6ed40();
      if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01eca2b4:
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}


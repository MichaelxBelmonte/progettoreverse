// Function: FUN_0051a2b0
// Address: 0051a2b0
// Size: 2662 bytes
// Class: MDPluginDocument

void FUN_0051a2b0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  uint64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x110) == *arg1) {
    return;
  }
  local_44 = (uint32_t)CONCAT71((int7)((uint64_t)*(int64_t *)(this_ptr + 0x110) >> 8),1);
  if (*(int64_t **)(this_ptr + 0x108) == (int64_t *)0x0) {
LAB_0051a39e:
    local_50 = (int64_t *)0x0;
    local_60 = 0;
    if (*(int64_t *)(this_ptr + 0x110) == 0) goto LAB_0051a386;
LAB_0051a3b6:
    local_58 = (int64_t *)CONCAT44(local_58._4_4_,0xffffffff);
    if ((*(int64_t *)(this_ptr + 0x308) == 0) && (*(int64_t *)(this_ptr + 0x108) != 0)) {
      FUN_00757c60();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_0051b4f0();
      if (local_a8 == '\0') {
        if (local_b0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_40 = local_b0;
      local_38 = '\0';
      uVar3 = FUN_00d23d20();
      local_58 = (int64_t *)CONCAT44(local_58._4_4_,uVar3);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_b0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      lVar7 = *(int64_t *)(this_ptr + 0x110);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0015a600();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x300) != 0) {
      FUN_00d50b00();
      lVar7 = *(int64_t *)(this_ptr + 0x300);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_0063f230();
      plVar6 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar6 != (int64_t *)0x0) {
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0062a580();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0064e920();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if ((char)local_44 == '\0') {
      lVar7 = *(int64_t *)(this_ptr + 0x110);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_50 + 0x3a8))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    lVar8 = *(int64_t *)(this_ptr + 0x110);
    lVar7 = *arg1;
    if (lVar8 == lVar7) goto LAB_0051a5c2;
  }
  else {
    (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
    local_50 = local_40;
    param_1 = 0;
    if (local_40 == (int64_t *)0x0) goto LAB_0051a39e;
    plVar6 = local_40;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    param_1 = (void*)plVar6;
    FUN_00cafd20();
    FUN_00cb1f10();
    uVar4 = FUN_00db3260();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
    local_60 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    local_44 = 0;
    if (*(int64_t *)(this_ptr + 0x110) != 0) goto LAB_0051a3b6;
LAB_0051a386:
    lVar8 = 0;
    local_58 = (int64_t *)CONCAT44(local_58._4_4_,0xffffffff);
    lVar7 = *arg1;
    if (lVar7 == 0) goto LAB_0051a5c2;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  *(int64_t *)(this_ptr + 0x110) = lVar7;
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_0051a5c2:
  if (*arg1 != 0) {
    if (*(int64_t *)(this_ptr + 0x308) == 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = *(int64_t *)(this_ptr + 0x108);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_00788660();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      cVar2 = FUN_00157780(&local_80,(uint64_t)local_58 & 0xffffffff);
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        FUN_00793130();
      }
      if (*(int64_t *)(this_ptr + 0x308) == 0) {
        *(void*)(this_ptr + 0x2c0) = 0;
      }
      else {
        *(void*)(this_ptr + 0x370) = 1;
      }
    }
    FUN_00518a80();
    if ((char)local_44 == '\0') {
      (**(code **)(*local_50 + 0x3a0))();
    }
    FUN_0051b640();
    plVar6 = local_40;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_0051ba20();
    plVar9 = local_40;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_58 = plVar9;
    if (*(int64_t *)(this_ptr + 0x308) == 0) {
      FUN_006e32b0();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 == (int64_t *)0x0) {
        FUN_00752180();
        plVar1 = local_40;
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar2 = FUN_00108e10();
        if (cVar2 == '\0') {
          FUN_0010bc60();
          FUN_0010a4f0();
          FUN_0010bc70();
        }
        FUN_00108380();
        local_70 = local_40;
        local_68 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_68 = '\x01';
        FUN_006e32e0();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (*(int64_t *)(this_ptr + 0x300) != 0) {
      FUN_00d50b00();
      lVar7 = *(int64_t *)(this_ptr + 0x300);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_0063f230();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar9 = local_58;
      if (plVar1 != (int64_t *)0x0) {
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0062a580();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0064e920();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_00631670();
        plVar1 = local_40;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        plVar9 = local_58;
        if (plVar1 != (int64_t *)0x0) {
          lVar7 = *(int64_t *)(this_ptr + 0x300);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          FUN_00631670();
          FUN_006f63e0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_44 == '\0') {
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x308) == 0) {
      FUN_00cb1f10();
      FUN_00db3760();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_50 + 0x3c8))();
    if ((char)local_44 == '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


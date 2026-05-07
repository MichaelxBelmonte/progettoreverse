// Function: FUN_0024e680
// Address: 0024e680
// Size: 10293 bytes
// Class: GNFilePath

void FUN_0024e680(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int unaff_ESI;
  void*this_ptr;
  int64_t lVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  if (unaff_ESI != 1) {
    if (unaff_ESI != 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    plVar2 = g_02804690;
    if (g_02804690 == (int64_t *)0x0) {
      FUN_0027c9f0();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      plVar2 = (int64_t *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar2 + 0x18))();
      bVar6 = g_02804690 == (int64_t *)0x0;
      g_02804690 = plVar2;
      if (((bVar6) || (FUN_00d50b20(), g_02804690 != (int64_t *)0x0)) && (g_02804698 == '\0'))
      {
        g_02804698 = '\x01';
        FUN_00e8cb90();
      }
      lVar1 = g_026f6f10;
      if (g_026f6f10 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      lVar4 = local_48;
      if (local_48 == 0) {
        bVar5 = 1;
        lVar4 = 0;
        bVar6 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar5 = 0;
        bVar6 = true;
      }
      else {
        local_40 = '\0';
        bVar6 = true;
        bVar5 = 0;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = g_026dec58;
      if (g_026dec58 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      if (local_48 == lVar4) {
        if ((bool)(bVar5 & local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0024ec9d;
          bVar6 = true;
          FUN_00d50b00();
        }
LAB_0024eea2:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar7 = (bool)(bVar6 & lVar4 != 0);
          bVar6 = true;
          lVar4 = local_48;
          if (bVar7) {
            FUN_00d50b20();
          }
          goto LAB_0024eea2;
        }
        bVar7 = lVar4 != 0;
        lVar4 = local_48;
        if ((bool)(bVar6 & bVar7)) {
          FUN_00d50b20();
        }
LAB_0024ec9d:
        local_40 = '\0';
        bVar6 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = g_026f6f20;
      if (g_026f6f20 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      if (local_48 == lVar4) {
        lVar3 = lVar4;
        bVar7 = bVar6;
        if ((!bVar6) && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0024f0f6;
          FUN_00d50b00();
          bVar7 = true;
        }
LAB_0024f41c:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar7 = true;
          if ((bVar6) && (lVar4 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0024f41c;
        }
        if ((bVar6) && (lVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_0024f0f6:
        local_40 = '\0';
        bVar7 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = g_026dec60;
      if (g_026dec60 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      if (local_48 == lVar3) {
        lVar4 = lVar3;
        bVar6 = bVar7;
        if ((!bVar7) && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0024f670;
          FUN_00d50b00();
          bVar6 = true;
        }
LAB_0024f996:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar4 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar6 = true;
          if ((bVar7) && (lVar3 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0024f996;
        }
        if ((bVar7) && (lVar3 != 0)) {
          FUN_00d50b20();
        }
LAB_0024f670:
        local_40 = '\0';
        bVar6 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = g_026f6f30;
      if (g_026f6f30 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5e6e0();
      if (local_48 == lVar4) {
        lVar3 = lVar4;
        bVar7 = bVar6;
        if ((!bVar6) && (local_48 != 0)) {
          if (local_40 != '\0') goto LAB_0024fbf0;
          FUN_00d50b00();
          bVar7 = true;
        }
LAB_0024ff3d:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar7 = true;
          if ((bVar6) && (lVar4 != 0)) {
            FUN_00d50b20();
            bVar7 = true;
          }
          goto LAB_0024ff3d;
        }
        if ((bVar6) && (lVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_0024fbf0:
        local_40 = '\0';
        bVar7 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_01d65230();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_01d65460();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_01d64ce0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d5d8d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      plVar2 = g_02804690;
      if ((bVar7) && (lVar3 != 0)) {
        FUN_00d50b20();
        plVar2 = g_02804690;
      }
    }
LAB_0025014a:
    *(void*)(this_ptr + 1) = 0;
    goto joined_r0x00250eaa;
  }
  plVar2 = g_02804680;
  if (g_02804680 != (int64_t *)0x0) goto LAB_0025014a;
  FUN_0027c9f0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar2 + 0x18))();
  bVar6 = g_02804680 == (int64_t *)0x0;
  g_02804680 = plVar2;
  if (((bVar6) || (FUN_00d50b20(), g_02804680 != (int64_t *)0x0)) && (g_02804688 == '\0')) {
    g_02804688 = '\x01';
    FUN_00e8cb90();
  }
  lVar1 = g_026f6f10;
  if (g_026f6f10 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  lVar4 = local_48;
  if (local_48 == 0) {
    bVar5 = 1;
    lVar4 = 0;
    bVar6 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar5 = 0;
    bVar6 = true;
  }
  else {
    local_40 = '\0';
    bVar6 = true;
    bVar5 = 0;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_026dec58;
  if (g_026dec58 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    if ((bool)(bVar5 & local_48 != 0)) {
      if (local_40 != '\0') goto LAB_0024edf7;
      bVar6 = true;
      FUN_00d50b00();
    }
LAB_0024f15f:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = (bool)(bVar6 & lVar4 != 0);
      bVar6 = true;
      lVar4 = local_48;
      if (bVar7) {
        FUN_00d50b20();
      }
      goto LAB_0024f15f;
    }
    bVar7 = lVar4 != 0;
    lVar4 = local_48;
    if ((bool)(bVar6 & bVar7)) {
      FUN_00d50b20();
    }
LAB_0024edf7:
    local_40 = '\0';
    bVar6 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_026f6f20;
  if (g_026f6f20 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    lVar3 = lVar4;
    bVar7 = bVar6;
    if ((!bVar6) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_0024f3b3;
      FUN_00d50b00();
      bVar7 = true;
    }
LAB_0024f6d9:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar6) && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0024f6d9;
    }
    if ((bVar6) && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_0024f3b3:
    local_40 = '\0';
    bVar7 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_026dec60;
  if (g_026dec60 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar3) {
    lVar4 = lVar3;
    bVar6 = bVar7;
    if ((!bVar7) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_0024f92d;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_0024fc65:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar6 = true;
      if ((bVar7) && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0024fc65;
    }
    if ((bVar7) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_0024f92d:
    local_40 = '\0';
    bVar6 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_026f6f30;
  if (g_026f6f30 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    lVar3 = lVar4;
    bVar7 = bVar6;
    if ((!bVar6) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_0024febf;
      FUN_00d50b00();
      bVar7 = true;
    }
LAB_0025018d:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar6) && (lVar4 != 0)) {
        FUN_00d50b20();
        bVar7 = true;
      }
      goto LAB_0025018d;
    }
    if ((bVar6) && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_0024febf:
    local_40 = '\0';
    bVar7 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d5dc80();
  lVar1 = g_026f6f38;
  if (g_026f6f38 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar3) {
    lVar4 = lVar3;
    bVar6 = bVar7;
    if ((!bVar7) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_002503f5;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_00250461:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar6 = true;
      if ((bVar7) && (lVar3 != 0)) {
        FUN_00d50b20();
        bVar6 = true;
      }
      goto LAB_00250461;
    }
    if ((bVar7) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_002503f5:
    local_40 = '\0';
    bVar6 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_026f6f40;
  if (g_026f6f40 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    lVar3 = lVar4;
    bVar7 = bVar6;
    if ((!bVar6) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_002506bd;
      FUN_00d50b00();
      bVar7 = true;
    }
LAB_00250729:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar6) && (lVar4 != 0)) {
        FUN_00d50b20();
        bVar7 = true;
      }
      goto LAB_00250729;
    }
    if ((bVar6) && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_002506bd:
    local_40 = '\0';
    bVar7 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_026f6f48;
  if (g_026f6f48 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar3) {
    lVar4 = lVar3;
    bVar6 = bVar7;
    if ((!bVar7) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_00250985;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_002509f1:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar6 = true;
      if ((bVar7) && (lVar3 != 0)) {
        FUN_00d50b20();
        bVar6 = true;
      }
      goto LAB_002509f1;
    }
    if ((bVar7) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00250985:
    local_40 = '\0';
    bVar6 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_026f6f50;
  if (g_026f6f50 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  if (local_48 == lVar4) {
    lVar3 = lVar4;
    bVar7 = bVar6;
    if ((!bVar6) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_00250c4d;
      FUN_00d50b00();
      bVar7 = true;
    }
LAB_00250cb9:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar6) && (lVar4 != 0)) {
        FUN_00d50b20();
        bVar7 = true;
      }
      goto LAB_00250cb9;
    }
    if ((bVar6) && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_00250c4d:
    local_40 = '\0';
    bVar7 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_01d65230();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01d65460();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_01d64ce0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_01d5d8d0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((bVar7) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = g_02804680;
  *(void*)(this_ptr + 1) = 0;
joined_r0x00250eaa:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}


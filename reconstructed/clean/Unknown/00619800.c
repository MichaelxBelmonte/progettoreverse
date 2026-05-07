// Function: FUN_00619800
// Address: 00619800
// Size: 1660 bytes
// Class: Unknown

char FUN_00619800(uint64_t param_1,uint32_t param_2)

{
  char cVar1;
  uint32_t uVar2;
  char *pcVar3;
  void *pvVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint32_t local_b4;
  int64_t local_b0;
  uint32_t local_a4;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  uint64_t local_78;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  char local_49;
  int64_t local_48;
  char local_40 [15];
  char local_31;
  
  local_b4 = param_2;
  local_49 = FUN_0063f180();
  if (local_49 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_0063f230();
    lVar7 = local_48;
    uVar2 = FUN_00212c70();
    if ((local_40[0] != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x5d8))();
  FUN_006f4810();
  cVar1 = FUN_01e42170();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  local_a4 = uVar2;
  if (cVar1 == '\0') {
    if ((char)uVar2 == '\0') {
      FUN_0063f230();
      lVar7 = local_48;
      local_31 = FUN_002416c0();
      if ((local_40[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_31 = '\x01';
    }
    local_78 = 0;
    lVar7 = 0;
    local_70 = 0;
    local_68 = 0;
  }
  else if (local_49 == '\x01' && (char)uVar2 == '\0') {
    (**(code **)(*this_ptr + 0x5d8))();
    FUN_006f4810();
    FUN_002ee280();
    lVar8 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
      FUN_00d50b20();
    }
    local_31 = FUN_00240bc0();
    if (local_31 == '\0') {
      local_78 = 0;
      lVar7 = 0;
      local_70 = 0;
      local_68 = 0;
    }
    else {
      local_90 = lVar8;
      FUN_00d23310();
      lVar7 = local_48;
      local_88 = local_40[0];
      pcVar6 = &local_88;
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = pcVar6;
      }
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)pcVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      local_68 = CONCAT71(uStack_5f,local_60);
      if (local_68 == 0) {
        local_70 = 0;
      }
      else if (local_58 == '\0') {
        uVar5 = FUN_00d50b00();
        local_70 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
        local_70 = CONCAT71(uStack_5f,1);
      }
      if ((local_88 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      lVar7 = local_48;
      pcVar6 = &local_88;
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = pcVar6;
      }
      local_88 = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = local_90;
      local_b0 = lVar7;
      pvVar4 = _pthread_getspecific((void*)pcVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_01266fe0();
      lVar7 = CONCAT71(uStack_5f,local_60);
      if (lVar7 == 0) {
        local_78 = 0;
      }
      else if (local_58 == '\0') {
        uVar5 = FUN_00d50b00();
        local_78 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
        local_78 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      if ((local_88 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = 0;
    lVar7 = 0;
    local_70 = 0;
    local_68 = 0;
    local_31 = local_49;
  }
  if ((char)local_b4 == '\0') {
    FUN_01caeae0();
    pcVar6 = local_40;
    if (local_40[0] == '\0') {
      pcVar6 = &local_60;
    }
    local_60 = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_01d65260();
      FUN_01d66ab0();
      if (local_60 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  else if (local_49 == '\0') {
    FUN_00642f60();
    FUN_00637870();
    FUN_006e2720();
    local_a0 = local_48;
    local_98 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_98 = '\x01';
    FUN_006c5ee0();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    FUN_00643150();
  }
  else if ((char)local_a4 == '\0') {
    FUN_0063f230();
    local_d8 = local_68;
    local_d0 = '\0';
    local_c0 = '\0';
    local_c8 = lVar7;
    FUN_00228b40(&local_c8,&local_d8);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_0063f230();
    FUN_002218f0();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_78 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return local_31;
}


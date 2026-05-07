// Function: FUN_0009b2d0
// Address: 0009b2d0
// Size: 3171 bytes
// Class: Unknown

void FUN_0009b2d0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  char *pcVar9;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_190;
  char local_188;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  if (((param_2 == 0) && (iVar6 = FUN_00d45870(), iVar6 == unaff_ESI)) && (this_ptr[2] != 0)) {
    return;
  }
  iVar6 = FUN_00d45870();
  if (iVar6 != unaff_ESI) {
    lVar7 = this_ptr[0x11];
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_006c5ee0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[2] == 0) {
    (**(code **)(*this_ptr + 0x4c0))();
  }
  lVar7 = this_ptr[0x17];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar7;
  FUN_00d46530();
  lVar7 = this_ptr[0x17];
  lVar8 = lVar7;
  if (lVar7 != local_58) {
    if (local_50[0] == '\0') {
      if (local_58 == 0) {
        lVar8 = 0;
        goto LAB_0009b3cc;
      }
      FUN_00d50b00();
      lVar7 = this_ptr[0x17];
      this_ptr[0x17] = local_58;
      lVar8 = local_58;
    }
    else {
      local_50[0] = '\0';
      lVar8 = local_58;
LAB_0009b3cc:
      this_ptr[0x17] = lVar8;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
      lVar8 = local_58;
    }
  }
  if ((local_50[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x13] != 0) {
    local_50[0] = '\0';
    local_58 = 0;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    local_48 = this_ptr[0x13];
    while( true ) {
      lVar7 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar7 * 8);
      FUN_00017760();
      if (iStack_3c != 0) {
        if (iStack_3c < 0) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          local_38 = local_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
    }
    FUN_000a9430();
  }
  FUN_000b6980();
  iVar6 = *(int *)(local_58 + 0xc);
  if (local_50[0] != '\0') {
    FUN_00d50b20();
  }
  lVar7 = this_ptr[0x17];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_0009b000();
  lVar8 = local_58;
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    lVar7 = this_ptr[0x17];
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_0009b000();
    iVar6 = iVar6 - *(int *)(local_58 + 0xc);
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  lVar7 = local_70;
  if (iVar6 < 2) {
    if (((int64_t *)this_ptr[0x10] != (int64_t *)0x0) &&
       ((**(code **)(*(int64_t *)this_ptr[0x10] + 0x478))(), this_ptr[0x10] != 0)) {
      this_ptr[0x10] = 0;
      FUN_00d50b20();
    }
  }
  else if (this_ptr[0x10] == 0) {
    plVar1 = (int64_t *)this_ptr[0x11];
    FUN_0009acf0();
    lVar8 = local_58;
    lVar7 = local_70;
    if ((local_50[0] == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x9e0))();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar8 = this_ptr[0x17];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_0009b000();
    lVar4 = local_58;
    lVar7 = local_70;
    if (local_50[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_00d45870();
    FUN_00336030();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  if ((char)param_2 == '\0') {
    if (lVar7 != 0) {
      lVar8 = this_ptr[0x1a];
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      FUN_0009d720();
      lVar4 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      FUN_0009d670();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    lVar8 = this_ptr[0x17];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_0009b000();
    lVar4 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      lVar8 = this_ptr[0x1a];
      if (lVar8 != lVar4) {
        FUN_00d50b00();
        this_ptr[0x1a] = lVar4;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  lVar8 = this_ptr[0x1a];
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  FUN_0009d720();
  lVar4 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    local_50[0] = '\0';
    local_58 = 0;
    local_48 = lVar4;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    while( true ) {
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          local_38 = local_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      lVar7 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar7 * 8);
      lVar7 = this_ptr[0x17];
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_0009b000();
      if (CONCAT71(uStack_7f,local_80) == 0) {
        cVar5 = '\0';
        lVar8 = 0;
      }
      else {
        lVar8 = this_ptr[0x17];
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        FUN_0009b000();
        local_68 = local_58;
        local_60 = '\0';
        cVar5 = FUN_00d23d70();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        lVar8 = CONCAT71(uStack_7f,local_80);
      }
      if ((local_78 != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        local_68 = local_58;
        local_60 = '\0';
        FUN_00d23f50();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00018280();
    lVar7 = local_70;
  }
  if (*(int *)(this_ptr[0x1a] + 0xc) == 0) {
    lVar8 = this_ptr[0x17];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_0009b000();
    lVar2 = local_58;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 == 0) {
      FUN_000b6980();
      FUN_00d23310();
      lVar8 = local_58;
      pcVar9 = &local_80;
      if (local_50[0] != '\0') {
        pcVar9 = local_50;
      }
      local_80 = local_50[0];
      *pcVar9 = '\0';
      if ((local_50[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (local_80 == '\0') {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_50[0] = '\0';
      local_58 = lVar8;
      FUN_00d21140();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_000b6980();
      lVar8 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 == 0) goto LAB_0009bbe3;
        FUN_00d50b00();
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_58 == 0) goto LAB_0009bbe3;
      local_50[0] = '\0';
      local_58 = 0;
      local_48 = lVar8;
      iStack_3c = 0;
      local_38 = 0;
      lVar7 = 0;
      do {
        local_40 = (int)lVar7;
        if (*(int *)(lVar8 + 0xc) <= local_40) goto LAB_0009bed4;
        lVar2 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar7 * 8);
        lVar3 = this_ptr[0x17];
        local_58 = lVar2;
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_0009b000();
        local_60 = '\0';
        local_68 = lVar2;
        cVar5 = FUN_00d23d70();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while (cVar5 != '\0');
      local_60 = '\0';
      local_68 = lVar2;
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
LAB_0009bed4:
      FUN_00018280();
      FUN_00d50b20();
      lVar7 = local_70;
    }
  }
LAB_0009bbe3:
  FUN_0009db60();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return;
}


// Function: FUN_003a1a90
// Address: 003a1a90
// Size: 945 bytes
// Class: MDMetaWindowController

uint64_t FUN_003a1a90(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  uint32_t uVar6;
  uint64_t unaff_R13;
  uint64_t uVar7;
  int64_t lVar9;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  int64_t local_50;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  undefined7 uVar8;
  
  (**(code **)(*this_ptr + 0xe20))();
  lVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_003a1aeb;
    }
  }
  else if (local_40 != 0) {
LAB_003a1aeb:
    uVar8 = (undefined7)((uint64_t)unaff_R13 >> 8);
    uVar7 = CONCAT71(uVar8,0 < *(int *)(lVar5 + 0xc));
    if ((*(int *)(lVar5 + 0xc) < 1) || ((char)(param_2 & 0xffffffff) == '\0')) goto LAB_003a1e1f;
    cVar4 = FUN_019a9840();
    if (cVar4 == '\0') {
      FUN_00d50b00();
      uVar6 = (uint32_t)CONCAT71(uVar8,1);
      local_50 = 0;
      local_54 = 0;
      lVar9 = lVar5;
LAB_003a1c3a:
      local_44 = uVar6;
      FUN_0195a3e0();
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      cVar4 = FUN_019a9840();
      if (cVar4 == '\0') {
        if (lVar5 != lVar2) {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          lVar5 = lVar2;
        }
      }
      else {
        local_88 = lVar2;
        local_80 = '\0';
        local_78 = local_50;
        local_70 = '\0';
        (**(code **)(*this_ptr + 0xe50))(&local_78,&local_88);
        lVar3 = local_40;
        lVar1 = lVar5;
        if (lVar5 == local_40) {
joined_r0x003a1d48:
          if ((local_38 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            lVar5 = lVar3;
            lVar1 = local_40;
            goto joined_r0x003a1d48;
          }
          FUN_00d50b20();
          local_38 = '\0';
          lVar5 = local_40;
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0xda0))();
      local_60 = '\0';
      local_68 = lVar5;
      (**(code **)(*this_ptr + 0xdb8))();
      lVar1 = local_50;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((uint64_t)lVar2 >> 8),1);
      if (((char)local_54 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01278c70();
      lVar9 = local_40;
      if (local_40 == 0) {
        uVar6 = 0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        uVar6 = (uint32_t)CONCAT71(uVar8,1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar6 = (uint32_t)CONCAT71(uVar8,1);
      }
      if (0 < *(int *)(lVar5 + 0xc)) {
        (**(code **)(*this_ptr + 0xe60))();
        local_50 = local_40;
        if (local_40 == 0) {
          local_54 = 0;
        }
        else {
          uVar8 = (undefined7)((param_2 & 0xffffffff) >> 8);
          if (local_38 == '\0') {
            FUN_00d50b00();
            local_54 = (uint32_t)CONCAT71(uVar8,1);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            local_54 = (uint32_t)CONCAT71(uVar8,1);
          }
        }
        goto LAB_003a1c3a;
      }
      uVar7 = 0;
      local_44 = uVar6;
    }
    if (((char)local_44 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_003a1e1f;
  }
  uVar7 = 0;
LAB_003a1e1f:
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return uVar7 & 0xffffffff;
}


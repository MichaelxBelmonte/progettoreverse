// Function: FUN_00be0680
// Address: 00be0680
// Size: 1628 bytes
// Class: Unknown

void* FUN_00be0680(uint64_t param_1,int64_t *param_2)

{
  uint8_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int iVar7;
  int64_t *arg1;
  void*this_ptr;
  uint64_t unaff_R12;
  undefined7 uVar9;
  uint64_t uVar8;
  uint uVar10;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  uint8_t local_120 [8];
  uint8_t local_118;
  int64_t local_110;
  int64_t *local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  int64_t local_d8;
  int64_t local_d0;
  int64_t local_c8;
  int64_t local_c0;
  int64_t local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  uint64_t local_88;
  int local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  int64_t *local_40;
  int64_t local_38;
  
  local_108 = param_2;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_007b8c30();
  (**(code **)(*plVar5 + 0x18))();
  local_100 = *arg1;
  local_f8 = '\0';
  FUN_00be11d0();
  lVar3 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (*local_108 == 0) {
    lVar6 = 0;
    uVar8 = 0;
    goto joined_r0x00be0ced;
  }
  FUN_00b8c7f0();
  lVar6 = local_68;
  if (local_68 == 0) {
    uVar8 = 0;
    lVar6 = 0;
joined_r0x00be0779:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 == 0) {
      lVar6 = 0;
      goto joined_r0x00be0ced;
    }
  }
  else {
    uVar9 = (undefined7)((uint64_t)unaff_R12 >> 8);
    if (local_60 == '\0') {
      FUN_00d50b00();
      uVar8 = CONCAT71(uVar9,1);
      goto joined_r0x00be0779;
    }
    uVar8 = CONCAT71(uVar9,1);
  }
  lVar2 = *(int64_t *)(lVar6 + 0x28);
  if (lVar2 != 0) {
    local_38 = lVar3;
    local_b0 = uVar8;
    local_a8 = lVar6;
    local_40 = plVar5;
    FUN_00d50b00();
    local_60 = '\0';
    local_68 = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = lVar2;
    if (0 < *(int *)(lVar2 + 0xc)) {
      uVar10 = 0;
      local_110 = lVar2;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(local_110 + 0x10) + (uint64_t)uVar10 * 8);
        local_68 = lVar3;
        if (local_38 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_90 = local_38;
          local_88 = 0xffffffff;
          local_80 = 0;
          while( true ) {
            lVar6 = (int64_t)(int)local_88;
            iVar7 = (int)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,iVar7);
            if (*(int *)(local_90 + 0xc) <= iVar7) break;
            local_a0 = *(int64_t *)(*(int64_t *)(local_90 + 0x10) + 8 + lVar6 * 8);
            plVar5 = *(int64_t **)(local_a0 + 0x28);
            if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            lVar6 = *(int64_t *)(lVar3 + 0x28);
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            local_e8 = '\x01';
            local_f0 = lVar6;
            cVar4 = (**(code **)(*plVar5 + 0x50))();
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar4 != '\0') {
              FUN_01503a00();
              goto LAB_00be081c;
            }
            if (local_88._4_4_ != 0) {
              if (local_88._4_4_ < 1) {
                iVar7 = -local_88._4_4_;
              }
              else {
                local_88 = CONCAT44(local_88._4_4_,(int)local_88 - local_88._4_4_);
                FUN_00d23690();
                local_80 = local_80 + local_88._4_4_;
                iVar7 = 0;
              }
              local_88 = CONCAT44(iVar7,(int)local_88);
            }
          }
          FUN_01503a00();
        }
        FUN_00b88600();
        lVar6 = local_78;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_118 = 1;
        FUN_00be12f0(local_120);
        lVar2 = local_a0;
        if ((local_98 == '\0') && (local_a0 != 0)) {
          FUN_00d50b00();
        }
        local_e0 = lVar2;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (local_e0 != 0) {
          lVar6 = *(int64_t *)(lVar3 + 0x28);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          local_180 = 1;
          lVar2 = *(int64_t *)(lVar3 + 0x30);
          local_188 = lVar6;
          local_d0 = lVar6;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_170 = 1;
          uVar1 = *(void*)(lVar3 + 0x38);
          lVar6 = *(int64_t *)(lVar3 + 0x40);
          local_178 = lVar2;
          local_c8 = lVar2;
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          local_160 = 1;
          lVar2 = *(int64_t *)(lVar3 + 0x48);
          local_168 = lVar6;
          local_c0 = lVar6;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_150 = 1;
          lVar6 = *(int64_t *)(lVar3 + 0x50);
          local_158 = lVar2;
          local_b8 = lVar2;
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          local_140 = 1;
          lVar3 = *(int64_t *)(lVar3 + 0x58);
          local_148 = lVar6;
          local_d8 = lVar6;
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          local_130 = 1;
          local_138 = lVar3;
          FUN_00bdf9c0(&local_178,&local_188,uVar1,&local_168);
          lVar2 = local_78;
          lVar6 = local_d8;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_a0 = lVar2;
          local_98 = '\0';
          FUN_00d21140();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if (local_b8 != 0) {
            FUN_00d50b20();
          }
          if (local_c0 != 0) {
            FUN_00d50b20();
          }
          if (local_c8 != 0) {
            FUN_00d50b20();
          }
          if (local_d0 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
LAB_00be081c:
        uVar10 = uVar10 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar10);
      } while ((int)uVar10 < *(int *)(local_110 + 0xc));
    }
    FUN_01503a00();
    FUN_00d50b20();
    plVar5 = local_40;
    lVar6 = local_a8;
    lVar3 = local_38;
    uVar8 = local_b0;
  }
joined_r0x00be0ced:
  if (lVar3 != 0) {
    local_60 = '\0';
    local_68 = lVar3;
    FUN_00d214d0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar8 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}


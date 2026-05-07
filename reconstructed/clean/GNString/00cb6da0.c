// Function: FUN_00cb6da0
// Address: 00cb6da0
// Size: 2537 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cb6da0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint uVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char *local_a0;
  int64_t local_98;
  char local_90 [8];
  int64_t local_88;
  uint64_t local_80;
  int local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  uint8_t local_58;
  int64_t local_50;
  uint8_t local_48;
  char local_38 [8];
  
  lVar11 = local_98;
  if (*(int64_t *)(this_ptr + 0x90) == 0) {
    return;
  }
  cVar2 = FUN_00d36e30();
  if (cVar2 == '\0') {
    return;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x368))();
  FUN_00da5ad0();
  if ((((local_90[0] == '\0') && (local_98 != 0)) && (FUN_00d50b00(), local_90[0] != '\0')) &&
     (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_70 = local_98;
  FUN_00cb98a0();
  local_a0 = local_90;
  local_38[0] = local_90[0];
  pcVar3 = local_a0;
  if (local_90[0] == '\0') {
    pcVar3 = local_38;
  }
  *pcVar3 = '\0';
  if ((local_90[0] != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = local_98;
  if (((local_98 != 0) && (*(int *)(local_98 + 0xc) != 0)) &&
     (lVar5 = local_70, 0 < *(int *)(local_98 + 0xc))) {
    lVar9 = *arg1;
    local_68 = *param_2;
    lVar10 = 0;
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar10 * 8);
      if (((*(char *)(lVar5 + 0x38) == '\0') &&
          (*(int64_t *)(lVar5 + 0x18) == 0 || lVar9 == *(int64_t *)(lVar5 + 0x18))) &&
         ((*(uint *)(lVar5 + 0x28) & 0x3c) != 0)) {
        lVar8 = *(int64_t *)(lVar5 + 0x30);
        if ((*(int64_t *)(lVar5 + 0x20) == 0) || (local_68 == *(int64_t *)(lVar5 + 0x20))) {
          uVar6 = *(uint *)(lVar5 + 0x28) & 0x1c0;
          if (uVar6 == 0x100) {
            if (*(int64_t *)(this_ptr + 0x88) != 0) {
              FUN_00d50b00();
              local_90[0] = '\0';
              local_58 = 0;
              local_50 = local_68;
              local_48 = 0;
              local_60 = lVar9;
              FUN_00cadab0(&local_50,&local_60);
              FUN_00d50b20();
              local_98 = lVar5;
            }
          }
          else if (uVar6 == 0x80) {
            if (lVar8 == local_70) {
              if (*(int64_t *)(this_ptr + 0x88) != 0) {
                local_b0 = *(int64_t *)(this_ptr + 0x88);
                FUN_00d50b00();
                local_90[0] = '\0';
                local_58 = 0;
                local_50 = local_68;
                local_48 = 0;
                local_60 = lVar9;
                FUN_00cadab0(&local_50,&local_60);
                FUN_00d50b20();
                local_98 = lVar5;
              }
            }
            else {
              local_c8 = '\0';
              local_d0 = lVar8;
              FUN_00cb93b0(0x80,&local_d0);
              lVar8 = local_c0;
              if ((local_b8 == '\0') && (local_c0 != 0)) {
                FUN_00d50b00();
              }
              if (lVar8 != 0) {
                local_90[0] = '\0';
                local_58 = 0;
                local_50 = local_68;
                local_48 = 0;
                local_60 = lVar9;
                FUN_00cadab0(&local_50,&local_60);
                FUN_00d50b20();
                local_98 = lVar5;
              }
            }
          }
          else if (((uVar6 == 0x40) && (local_70 == lVar8)) &&
                  (*(int64_t *)(this_ptr + 0x88) != 0)) {
            local_b0 = *(int64_t *)(this_ptr + 0x88);
            FUN_00d50b00();
            local_90[0] = '\0';
            local_58 = 0;
            local_50 = local_68;
            local_48 = 0;
            local_60 = lVar9;
            FUN_00cadab0(&local_50,&local_60);
            FUN_00d50b20();
            local_98 = lVar5;
          }
        }
      }
      lVar10 = lVar10 + 1;
      lVar5 = local_70;
    } while (lVar10 < *(int *)(lVar11 + 0xc));
  }
  FUN_00cb9950();
  if (lVar11 == local_98) {
    lVar9 = lVar11;
    if (((local_38[0] != '\0') || (lVar11 == 0)) || (local_90[0] == '\0')) goto joined_r0x00cb7219;
    local_38[0] = '\x01';
  }
  else if (local_90[0] == '\0') {
    if (lVar11 == 0 || local_38[0] == '\0') {
      local_a0 = local_38;
      lVar11 = local_98;
    }
    else {
      FUN_00d50b20();
      local_a0 = local_38;
      lVar11 = local_98;
    }
  }
  else {
    if (lVar11 != 0 && local_38[0] != '\0') {
      FUN_00d50b20();
    }
    local_38[0] = '\x01';
    lVar11 = local_98;
  }
  *local_a0 = '\0';
  lVar9 = local_98;
joined_r0x00cb7219:
  if ((local_90[0] != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if (((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) &&
     (lVar5 = local_70, 0 < *(int *)(lVar11 + 0xc))) {
    lVar9 = *arg1;
    lVar10 = *param_2;
    lVar8 = 0;
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar8 * 8);
      if (((*(char *)(lVar5 + 0x38) == '\0') &&
          (*(int64_t *)(lVar5 + 0x18) == 0 || lVar9 == *(int64_t *)(lVar5 + 0x18))) &&
         ((*(uint *)(lVar5 + 0x28) & 0x3c) != 0)) {
        lVar1 = *(int64_t *)(lVar5 + 0x30);
        if ((*(int64_t *)(lVar5 + 0x20) == 0) || (lVar10 == *(int64_t *)(lVar5 + 0x20))) {
          uVar6 = *(uint *)(lVar5 + 0x28) & 0x1c0;
          if (uVar6 == 0x100) {
            if (*(int64_t *)(this_ptr + 0x88) != 0) {
              FUN_00d50b00();
              local_90[0] = '\0';
              local_58 = 0;
              local_48 = 0;
              local_60 = lVar9;
              local_50 = lVar10;
              FUN_00cadab0(&local_50,&local_60);
              FUN_00d50b20();
            }
          }
          else if (uVar6 == 0x80) {
            if (lVar1 == local_70) {
              if (*(int64_t *)(this_ptr + 0x88) != 0) {
                local_68 = *(int64_t *)(this_ptr + 0x88);
                FUN_00d50b00();
                local_90[0] = '\0';
                local_58 = 0;
                local_48 = 0;
                local_60 = lVar9;
                local_50 = lVar10;
                FUN_00cadab0(&local_50,&local_60);
                FUN_00d50b20();
              }
            }
            else {
              local_c8 = '\0';
              local_d0 = lVar1;
              FUN_00cb93b0(0x80,&local_d0);
              lVar5 = local_c0;
              if ((local_b8 == '\0') && (local_c0 != 0)) {
                FUN_00d50b00();
              }
              if (lVar5 != 0) {
                local_90[0] = '\0';
                local_58 = 0;
                local_48 = 0;
                local_60 = lVar9;
                local_50 = lVar10;
                FUN_00cadab0(&local_50,&local_60);
                FUN_00d50b20();
              }
            }
          }
          else if (((uVar6 == 0x40) && (local_70 == lVar1)) &&
                  (*(int64_t *)(this_ptr + 0x88) != 0)) {
            local_68 = *(int64_t *)(this_ptr + 0x88);
            FUN_00d50b00();
            local_90[0] = '\0';
            local_58 = 0;
            local_48 = 0;
            local_60 = lVar9;
            local_50 = lVar10;
            FUN_00cadab0(&local_50,&local_60);
            FUN_00d50b20();
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar5 = local_70;
    } while (lVar8 < *(int *)(lVar11 + 0xc));
  }
  plVar4 = (int64_t *)(**(code **)(*(int64_t *)*arg1 + 0x188))();
  if ((plVar4 != (int64_t *)0x0) && (lVar9 = *plVar4, lVar9 != 0)) {
    FUN_00d50b00();
    local_90[0] = '\0';
    local_80 = 0xffffffff;
    local_78 = 0;
    iVar7 = 0;
    local_88 = lVar9;
    while( true ) {
      if (iVar7 != 0) {
        if (iVar7 < 1) {
          iVar7 = -iVar7;
        }
        else {
          local_80 = CONCAT44(local_80._4_4_,(int)local_80 - iVar7);
          FUN_00d23690();
          local_78 = local_78 + iVar7;
          iVar7 = 0;
        }
        local_80 = CONCAT44(iVar7,(int)local_80);
      }
      lVar5 = (int64_t)(int)local_80;
      iVar7 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar7);
      if (*(int *)(local_88 + 0xc) <= iVar7) break;
      lVar5 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + 8 + lVar5 * 8);
      uVar6 = *(uint *)(lVar5 + 0x28) & 0x1c0;
      lVar9 = local_70;
      if (uVar6 == 0x100) {
LAB_00cb7614:
        if (lVar9 != 0) {
          lVar10 = *(int64_t *)(lVar5 + 0x18);
          if (local_70 == lVar9) {
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            if (*(int64_t *)(this_ptr + 0x88) != 0) {
              FUN_00d50b00();
              local_58 = 0;
              local_48 = 0;
              local_c0 = 0;
              local_b8 = '\0';
              local_60 = lVar5;
              local_50 = lVar10;
              FUN_00cadab0(&local_c0,&local_50);
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            FUN_00cb93b0();
            lVar9 = local_d0;
            if ((local_c8 == '\0') && (local_d0 != 0)) {
              FUN_00d50b00();
            }
            if (lVar9 != 0) {
              local_58 = 0;
              local_48 = 0;
              local_c0 = 0;
              local_b8 = '\0';
              local_60 = lVar5;
              local_50 = lVar10;
              FUN_00cadab0(&local_c0,&local_50);
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        if (uVar6 == 0x80) {
          lVar9 = *(int64_t *)(lVar5 + 0x30);
          goto LAB_00cb7614;
        }
        if (((uVar6 == 0x40) && (local_70 != 0)) && (local_70 == *(int64_t *)(lVar5 + 0x30)))
        goto LAB_00cb7614;
      }
      iVar7 = local_80._4_4_;
    }
    FUN_00cc12b0();
    FUN_00d50b20();
    lVar5 = local_70;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x378))();
  if ((local_38[0] != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}


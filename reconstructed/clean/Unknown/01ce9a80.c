// Function: FUN_01ce9a80
// Address: 01ce9a80
// Size: 2087 bytes
// Class: Unknown

void FUN_01ce9a80(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t lVar9;
  undefined7 uVar10;
  int64_t local_68;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_019ba260();
  lVar9 = *arg1;
  if (lVar9 == local_60) {
    if (((char)arg1[1] == '\0') && (local_60 != 0)) {
      if (local_58[0] != '\0') goto LAB_01ce9b0b;
      FUN_00d50b00();
      goto LAB_01ce9b4a;
    }
  }
  else {
    lVar4 = arg1[1];
    if (local_58[0] != '\0') {
      *arg1 = local_60;
      if (((char)lVar4 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
      }
LAB_01ce9b0b:
      *(void*)(arg1 + 1) = 1;
      local_58[0] = '\0';
      goto LAB_01ce9b67;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    *arg1 = local_60;
    if (((char)lVar4 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
LAB_01ce9b4a:
    *(void*)(arg1 + 1) = 1;
  }
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_01ce9b67:
  FUN_00d23340();
  local_38[0] = local_58[0];
  pcVar5 = local_58;
  if (local_58[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = local_60;
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
  }
  lVar4 = this_ptr[0x2a];
  lVar6 = 1;
  if (1 < *(int *)(lVar4 + 0xc)) {
    lVar6 = 1;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar6 * 8);
      FUN_00d23310();
      local_38[0] = local_58[0];
      pcVar5 = local_58;
      if (local_58[0] == '\0') {
        pcVar5 = local_38;
      }
      *pcVar5 = '\0';
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = *(int64_t *)(lVar4 + 0x20);
      if ((local_38[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != local_60) break;
      FUN_00d23620();
      lVar6 = lVar6 + 1;
      lVar4 = this_ptr[0x2a];
    } while (lVar6 < *(int *)(lVar4 + 0xc));
  }
  while ((int)lVar6 < *(int *)(this_ptr[0x2a] + 0xc)) {
    (**(code **)(*this_ptr + 0x988))();
  }
  lVar4 = *arg1;
  if (*(int *)(lVar4 + 0xc) == 0) {
    FUN_00d23340();
    pcVar5 = local_58;
    if (local_58[0] == '\0') {
      pcVar5 = local_38;
    }
    local_38[0] = local_58[0];
    *pcVar5 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 == 0) {
      lVar6 = 0;
      lVar4 = segment_command_00000020._0_8_;
    }
    else {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      lVar4 = *(int64_t *)(local_60 + 0x20);
      lVar6 = local_60;
    }
    if (lVar4 == lVar9) {
      local_48 = 0;
      local_40 = 0;
      FUN_01dd4c60();
      bVar1 = false;
      local_68 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_01ceb120();
    }
    else {
      bVar1 = false;
      local_68 = 0;
      local_48 = 0;
      local_40 = 0;
    }
  }
  else {
    if (*(int *)(lVar4 + 0xc) < 1) {
      bVar1 = false;
      local_68 = 0;
      local_48 = 0;
      local_40 = 0;
      lVar6 = 0;
    }
    else {
      lVar8 = 0;
      lVar6 = 0;
      local_40 = 0;
      local_48 = 0;
      local_68 = 0;
      bVar1 = false;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar8 * 8);
        local_50 = lVar6;
        if (local_68 == lVar4) {
          lVar6 = local_68;
          bVar2 = bVar1;
          if ((!bVar1) && (lVar4 != 0)) {
            FUN_00d50b00();
            bVar2 = true;
          }
        }
        else {
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          lVar6 = lVar4;
          if ((bVar1) && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar2;
        local_68 = lVar6;
        FUN_00d23340();
        local_38[0] = local_58[0];
        pcVar5 = local_58;
        if (local_58[0] == '\0') {
          pcVar5 = local_38;
        }
        *pcVar5 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = local_60;
        if (local_60 == local_50) {
          lVar6 = local_50;
          if ((local_38[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
            lVar6 = local_50;
          }
joined_r0x01ce9eac:
          local_50 = lVar6;
          if (lVar8 != 0) goto LAB_01ce9e35;
LAB_01ce9eb0:
          lVar6 = local_50;
          (**(code **)(**(int64_t **)(local_50 + 0x28) + 0x920))();
LAB_01ce9ec1:
          lVar6 = *(int64_t *)(lVar6 + 0x20);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          FUN_01ce41d0();
          uVar10 = (undefined7)((uint64_t)lVar9 >> 8);
          if (local_60 == local_40) {
            if (((char)local_48 != '\0') || (local_60 == 0)) {
              uVar7 = local_48 & 0xffffffff;
              lVar4 = local_40;
              goto joined_r0x01cea05e;
            }
            lVar4 = local_40;
            if (local_58[0] == '\0') {
              FUN_00d50b00();
              goto LAB_01cea020;
            }
LAB_01ce9f39:
            local_58[0] = '\0';
            uVar7 = CONCAT71(uVar10,1);
          }
          else {
            if (local_58[0] != '\0') {
              if (((char)local_48 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01ce9f39;
            }
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            uVar7 = CONCAT71(uVar10,1);
            if (((char)local_48 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
              local_40 = local_60;
LAB_01cea020:
              uVar7 = CONCAT71(uVar10,1);
              lVar4 = local_40;
            }
joined_r0x01cea05e:
            local_40 = lVar4;
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          uVar7 = uVar7 & 0xffffffff;
        }
        else {
          if (local_38[0] != '\0') {
            lVar6 = local_60;
            if (local_50 != 0) {
              FUN_00d50b20();
              lVar6 = local_60;
            }
            goto joined_r0x01ce9eac;
          }
          if (local_60 != 0) {
            FUN_00d50b00();
          }
          if (local_50 != 0) {
            FUN_00d50b20();
            lVar6 = local_60;
            goto joined_r0x01ce9eac;
          }
          local_50 = local_60;
          if (lVar8 == 0) goto LAB_01ce9eb0;
LAB_01ce9e35:
          lVar6 = local_50;
          if (local_50 != 0) goto LAB_01ce9ec1;
          FUN_01ce41d0();
          lVar4 = local_40;
          if (local_60 == local_40) {
            if ((char)local_48 == '\0') {
              if (local_40 == 0) {
                uVar7 = local_48 & 0xffffffff;
              }
              else {
                uVar7 = 1;
                if (local_58[0] != '\0') goto LAB_01cea0b6;
                uVar7 = 1;
                FUN_00d50b00();
              }
            }
            else {
              uVar7 = local_48 & 0xffffffff;
            }
LAB_01cea099:
            if ((local_58[0] != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_58[0] == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
              uVar7 = 1;
              lVar4 = local_60;
              if (((char)local_48 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01cea099;
            }
            uVar7 = 1;
            lVar4 = local_60;
            if (((char)local_48 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
        }
LAB_01cea0b6:
        local_48 = uVar7;
        local_40 = lVar4;
        cVar3 = FUN_00d23d70();
        lVar6 = local_50;
        if (cVar3 == '\0') break;
        FUN_00d237a0();
        FUN_01dd3d10();
        lVar6 = local_50;
        (**(code **)(*this_ptr + 0x958))();
        lVar8 = lVar8 + 1;
        lVar4 = *arg1;
      } while (lVar8 < *(int *)(lVar4 + 0xc));
    }
    FUN_01ceb120();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}


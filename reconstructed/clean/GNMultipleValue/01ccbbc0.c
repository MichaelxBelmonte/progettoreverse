// Function: FUN_01ccbbc0
// Address: 01ccbbc0
// Size: 641 bytes
// Class: GNMultipleValue

uint64_t FUN_01ccbbc0(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint uVar4;
  uint64_t unaff_RBX;
  uint64_t uVar5;
  int64_t *arg1;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  int64_t local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  local_b0 = *param_2;
  local_a8 = 0;
  local_90 = param_1;
  FUN_01ccab60(param_1,&local_b0);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      local_48 = local_40;
      FUN_00d50b00();
      goto LAB_01ccbc2b;
    }
  }
  else {
    local_48 = local_40;
    if (local_40 != (int64_t *)0x0) {
LAB_01ccbc2b:
      FUN_01cc98b0();
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01ccbc74;
        }
LAB_01ccbcc9:
        uVar5 = CONCAT71((int7)((uint64_t)plVar2 >> 8),1);
      }
      else {
        if (local_40 == (int64_t *)0x0) goto LAB_01ccbcc9;
LAB_01ccbc74:
        lVar1 = plVar2[5];
        FUN_00d50b20();
        if (lVar1 == 0) goto LAB_01ccbcc9;
        local_88 = lVar1;
        FUN_00d50b00();
        local_a0 = *param_2;
        local_98 = 0;
        FUN_01ccac20();
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01ccbce1;
          }
        }
        else if (local_40 != (int64_t *)0x0) {
LAB_01ccbce1:
          local_80 = *arg1;
          local_78 = '\0';
          (**(code **)(*plVar2 + 0x378))();
          plVar3 = local_40;
          plVar2 = (int64_t *)*arg1;
          if (plVar2 == local_40) {
            if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
              local_50 = arg1 + 1;
              if (local_38 != '\0') goto LAB_01ccbd50;
              FUN_00d50b00();
              goto LAB_01ccbd89;
            }
LAB_01ccbd90:
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = arg1 + 1;
            lVar1 = arg1[1];
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (int64_t)plVar3;
              if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01ccbd89:
              *(void*)local_50 = 1;
              goto LAB_01ccbd90;
            }
            *arg1 = (int64_t)local_40;
            if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ccbd50:
            *(void*)local_50 = 1;
            local_38 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        local_70 = *arg1;
        local_68 = '\0';
        local_60 = local_48;
        local_58 = '\0';
        uVar4 = FUN_01d28720(local_90,&local_60);
        uVar5 = (uint64_t)uVar4;
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01ccbe2d;
    }
  }
  uVar5 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
LAB_01ccbe2d:
  return uVar5 & 0xffffffff;
}


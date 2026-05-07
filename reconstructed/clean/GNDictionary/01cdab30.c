// Function: FUN_01cdab30
// Address: 01cdab30
// Size: 1203 bytes
// Class: GNDictionary

void* FUN_01cdab30(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  uint64_t local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  local_108 = *param_2;
  local_98 = param_2;
  if (local_108 == 0) {
    FUN_01d51d50();
  }
  else {
    local_100 = '\0';
    FUN_01cdb540(param_1,&local_108);
    plVar1 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) {
      local_40 = plVar1;
      lVar5 = *(int64_t *)(arg1 + 0x50);
      if (*(int *)(lVar5 + 0xc) < 1) {
        local_58 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
      }
      else {
        local_58 = CONCAT71((int7)((uint64_t)g_025908a0 >> 8),1);
        lVar7 = 0;
        do {
          plVar1 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + lVar7 * 8);
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar6 = (int64_t *)*local_98;
          (**(code **)(*plVar1 + 0x390))();
          plVar2 = local_50;
          local_88 = 0;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_88 = '\x01';
          local_90 = plVar2;
          cVar3 = (**(code **)(*plVar6 + 0x50))();
          uVar8 = CONCAT71((int7)((uint64_t)plVar2 >> 8),1);
          if (cVar3 == '\0') {
            plVar6 = (int64_t *)*local_98;
            (**(code **)(*plVar1 + 0x388))();
            local_80 = local_a8;
            local_78 = 0;
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_a0 = '\0';
            }
            local_78 = '\x01';
            uVar4 = (**(code **)(*plVar6 + 0x50))();
            uVar8 = (uint64_t)uVar4;
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 != '\0') {
            plVar6 = (int64_t *)FUN_00e8fc40();
            FUN_00152930();
            (**(code **)(*plVar6 + 0x18))();
            uVar9 = local_58;
            if (plVar6 == local_40) {
              if ((char)local_58 == '\0') {
                uVar9 = CONCAT71((int7)(local_58 >> 8),1);
                plVar6 = local_40;
              }
              else {
                FUN_00d50b20();
                plVar6 = local_40;
              }
            }
            else {
              uVar9 = CONCAT71((int7)(uVar8 >> 8),1);
              if (((char)local_58 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_f0 = '\0';
            local_f8 = plVar1;
            local_40 = plVar6;
            FUN_01d523b0();
            if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
              local_d8 = *local_98;
              local_d0 = '\0';
              FUN_01d52610();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              local_c8 = local_40;
              local_c0 = '\0';
              local_b8 = *local_98;
              local_b0 = '\0';
              FUN_01cdb5f0();
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              *this_ptr = local_40;
              *(void*)(this_ptr + 1) = 1;
              FUN_00d50b20();
              FUN_00d50b20();
              return this_ptr;
            }
            local_40 = (int64_t *)0x0;
            local_58 = uVar9 & 0xffffffff;
          }
          FUN_00d50b20();
          lVar7 = lVar7 + 1;
          lVar5 = *(int64_t *)(arg1 + 0x50);
        } while (lVar7 < *(int *)(lVar5 + 0xc));
      }
      if (local_40 == (int64_t *)0x0) {
        FUN_01d51d50();
        cVar3 = (char)local_58;
        local_40 = local_50;
        if (local_50 == (int64_t *)0x0) {
          local_40 = (int64_t *)0x0;
        }
        else {
          cVar3 = '\x01';
          if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
             (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        cVar3 = (char)local_58;
      }
      plVar1 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (cVar3 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *this_ptr = plVar1;
      }
      else {
        *this_ptr = local_40;
      }
    }
    else {
      *this_ptr = plVar1;
    }
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}


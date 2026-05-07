// Function: FUN_01d45390
// Address: 01d45390
// Size: 2068 bytes
// Class: Unknown

void* FUN_01d45390(float param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  void*puVar3;
  int in_ECX;
  void*this_ptr;
  void*puVar4;
  bool bVar5;
  float fVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  code *local_60;
  int64_t *local_58;
  void*local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    iVar2 = FUN_00d8c7a0();
    if (iVar2 < 1) {
      *(void*)(this_ptr + 1) = 0;
      puVar4 = (void*)*param_2;
      if ((char)param_2[1] != '\0') {
        *this_ptr = puVar4;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(param_2 + 1) = 0;
        return this_ptr;
      }
      if (puVar4 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      puVar4 = (void*)*param_2;
      local_31 = (char)param_2[1];
      local_58 = param_2;
      if ((local_31 != '\0') && (puVar4 != (void*)0x0)) {
        FUN_00d50b00();
      }
      if (in_ECX == 3) {
        local_60 = g_025795c0;
        local_50 = &g_025795a8;
        while ((fVar6 = (float)FUN_01d43d10(), param_1 < fVar6 &&
               (iVar2 = FUN_00d8c7a0(), 5 < iVar2))) {
          if ((void*)*local_58 == puVar4) {
            puVar3 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar3 = local_50;
            (*local_60)();
            if (puVar3 == puVar4) {
              puVar3 = puVar4;
              if (local_31 == '\0') {
                local_31 = '\x01';
              }
              else {
                FUN_00d50b20();
              }
            }
            else {
              bVar5 = local_31 != '\0';
              local_31 = '\x01';
              if ((bVar5) && (puVar4 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            local_c8 = *local_58;
            local_c0 = '\0';
            FUN_00d8db80();
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d8c7a0();
            uVar7 = FUN_00e7b4e0();
            lVar1 = g_0272fa48;
            if (g_0272fa48 != 0) {
              uVar7 = FUN_00d50b00();
            }
            local_b8 = lVar1;
            local_b0 = '\x01';
            FUN_00d8e100(uVar7,&local_b8);
            puVar4 = puVar3;
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00e7b4e0();
            uVar7 = FUN_00d8ede0();
            local_70 = local_48;
            local_68 = 0;
            if (local_40 == '\0') {
              if (local_48 != 0) {
                uVar7 = FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_68 = '\x01';
            FUN_00d8e100(uVar7,&local_70);
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        if (in_ECX == 2) {
          local_60 = g_025795c0;
          local_50 = (void*)0xffffffff;
          do {
            bVar5 = true;
            while( true ) {
              fVar6 = (float)FUN_01d43d10();
              if ((fVar6 <= param_1) || (iVar2 = FUN_00d8c7a0(), iVar2 < 6)) goto LAB_01d45b65;
              if ((void*)*local_58 == puVar4) break;
              if (bVar5) {
                local_50 = (void*)(uint64_t)((int)local_50 - 1);
                FUN_00e7b4e0();
                uVar7 = FUN_00d8ede0();
                local_a0 = local_48;
                local_98 = 0;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    uVar7 = FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_98 = '\x01';
                FUN_00d8e100(uVar7,&local_a0);
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                bVar5 = false;
              }
              else {
                FUN_00e7b4e0();
                uVar7 = FUN_00d8ede0();
                local_90 = local_48;
                local_88 = 0;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    uVar7 = FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_88 = '\x01';
                FUN_00d8e100(uVar7,&local_90);
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                bVar5 = true;
              }
            }
            puVar3 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar3 = &g_025795a8;
            (*local_60)();
            if (puVar3 == puVar4) {
              puVar3 = puVar4;
              if (local_31 == '\0') {
                local_31 = '\x01';
              }
              else {
                FUN_00d50b20();
              }
            }
            else {
              bVar5 = local_31 != '\0';
              local_31 = '\x01';
              if ((bVar5) && (puVar4 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d8db80();
            FUN_00d8c7a0();
            local_50 = (void*)FUN_00e7b4e0();
            lVar1 = g_0272fa48;
            uVar7 = extraout_XMM0_Da;
            if (g_0272fa48 != 0) {
              uVar7 = FUN_00d50b00();
            }
            local_f8 = lVar1;
            local_f0 = '\x01';
            FUN_00d8e100(uVar7,&local_f8);
            puVar4 = puVar3;
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
          } while( true );
        }
        if (in_ECX == 1) {
          local_60 = g_025795c0;
          local_50 = &g_025795a8;
          while ((fVar6 = (float)FUN_01d43d10(), param_1 < fVar6 &&
                 (iVar2 = FUN_00d8c7a0(), 5 < iVar2))) {
            if ((void*)*local_58 == puVar4) {
              puVar3 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar3 = local_50;
              (*local_60)();
              if (puVar3 == puVar4) {
                puVar3 = puVar4;
                if (local_31 == '\0') {
                  local_31 = '\x01';
                }
                else {
                  FUN_00d50b20();
                }
              }
              else {
                bVar5 = local_31 != '\0';
                local_31 = '\x01';
                if ((bVar5) && (puVar4 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_e8 = *local_58;
              local_e0 = '\0';
              FUN_00d8db80();
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              uVar7 = FUN_00e7b4e0();
              lVar1 = g_0272fa48;
              if (g_0272fa48 != 0) {
                uVar7 = FUN_00d50b00();
              }
              local_d8 = lVar1;
              local_d0 = '\x01';
              FUN_00d8e100(uVar7,&local_d8);
              puVar4 = puVar3;
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_00e7b4e0();
              uVar7 = FUN_00d8ede0();
              local_80 = local_48;
              local_78 = 0;
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  uVar7 = FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              local_78 = '\x01';
              FUN_00d8e100(uVar7,&local_80);
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
LAB_01d45b65:
      if ((void*)*local_58 != puVar4) {
        FUN_00d8c7d0();
      }
      *(void*)(this_ptr + 1) = 0;
      if ((local_31 == '\0') && (puVar4 != (void*)0x0)) {
        FUN_00d50b00();
      }
    }
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}


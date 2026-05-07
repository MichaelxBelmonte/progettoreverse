// Function: FUN_01c6d4b0
// Address: 01c6d4b0
// Size: 956 bytes
// Class: GNPopUpButton

void FUN_01c6d4b0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar4;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  FUN_01d3abf0();
  local_38 = FUN_01e466c0();
  local_40 = '\0';
  local_48 = 0;
  if (*(int64_t *)(this_ptr + 0x188) != 0) {
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x2c8);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 == 0) {
      iVar3 = FUN_01d3a5a0();
      if ((iVar3 == 1) && (*(int *)(this_ptr + 0x268) != 0)) {
        *(void*)(this_ptr + 0x268) = 0;
        (**(code **)(**(int64_t **)(this_ptr + 0x158) + 0x478))();
        if (*(int64_t *)(this_ptr + 0x158) != 0) {
          *(void*)(this_ptr + 0x158) = 0;
          FUN_00d50b20();
        }
        if (*(int64_t *)(this_ptr + 0x270) != 0) {
          *(void*)(this_ptr + 0x270) = 0;
          FUN_00d50b20();
        }
        FUN_01e436c0();
        FUN_01c4d670();
      }
      local_88 = *arg1;
      local_80 = '\0';
      cVar2 = FUN_01c6cca0((uint32_t)local_38);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        cVar2 = FUN_01c61680((uint32_t)local_38,&local_48);
        if (cVar2 == '\0') {
          local_f8 = *arg1;
          local_f0 = 0;
          cVar2 = FUN_01c638f0((uint32_t)local_38);
          if (cVar2 == '\0') {
            local_e8 = *arg1;
            local_e0 = 0;
            cVar2 = FUN_01c63d50();
            if (cVar2 == '\0') {
              local_d8 = *arg1;
              local_d0 = 0;
              FUN_01c60a90((uint32_t)local_38);
              local_c8 = *arg1;
              local_c0 = 0;
              cVar2 = FUN_01c6a410((uint32_t)local_38);
              if (cVar2 == '\0') {
                local_68 = *arg1;
                local_60 = '\0';
                cVar2 = FUN_01c63f60((uint32_t)local_38);
                if ((local_60 != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar2 == '\0') {
                  local_b8 = *arg1;
                  local_b0 = 0;
                  cVar2 = FUN_01c635e0((uint32_t)local_38);
                  if (cVar2 == '\0') {
                    local_a8 = *arg1;
                    local_a0 = 0;
                    cVar2 = FUN_01c62da0((uint32_t)local_38);
                    if (cVar2 == '\0') {
                      local_58 = *arg1;
                      local_50 = '\0';
                      FUN_01e459c0();
                      if ((local_50 != '\0') && (local_58 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_78 = *arg1;
          local_70 = '\0';
          local_128 = local_48;
          local_120 = 0;
          cVar2 = FUN_01c61bb0((uint32_t)local_38,&local_128);
          uVar4 = extraout_XMM0_Da;
          if ((local_70 != '\0') && (local_78 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            local_118 = *arg1;
            local_110 = 0;
            local_108 = local_48;
            local_100 = 0;
            FUN_01c631e0(uVar4,&local_108);
          }
        }
      }
      goto LAB_01c6d61b;
    }
  }
  local_98 = *arg1;
  local_90 = '\0';
  FUN_01e459c0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01c6d61b:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


// Function: FUN_00b9d930
// Address: 00b9d930
// Size: 1119 bytes
// Class: Unknown

void FUN_00b9d930(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar7;
  int64_t local_e0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint32_t local_98;
  uint32_t uStack_94;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*arg1 != 0) {
    (**(code **)(*this_ptr + 0x3a8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      if ((g_028a56b0 == 0) || (lVar2 = g_028a56b0, g_028a56b9 == '\0')) {
        FUN_00e8cb50();
        lVar3 = g_02765240;
        if (g_028a56b0 == 0) {
          if (g_02765240 != 0) {
            FUN_00d50b00();
          }
          lVar2 = g_02764890;
          if (g_02764890 != 0) {
            FUN_00d50b00();
          }
          lVar4 = g_02765250;
          if (g_02765250 != 0) {
            FUN_00d50b00();
          }
          local_78 = lVar2;
          local_e0 = lVar4;
          FUN_002bd7b0(&local_e0,&local_78,3);
          FUN_000b6830();
          lVar6 = g_028a56b0;
          if (g_028a56b0 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == 0) {
                lVar6 = 0;
              }
              else {
                FUN_00d50b00();
                lVar6 = local_40;
              }
            }
            else {
              local_38 = '\0';
              lVar6 = local_40;
            }
            bVar1 = g_028a56b0 != 0;
            g_028a56b0 = lVar6;
            if (bVar1) {
              FUN_00d50b20();
              lVar6 = local_40;
            }
          }
          if ((lVar6 != 0) && (g_028a56b8 == '\0')) {
            g_028a56b8 = '\x01';
            FUN_00e8cb90();
            lVar6 = local_40;
          }
          if ((local_38 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          g_028a56b9 = '\x01';
          FUN_00e8cb70();
          lVar2 = g_028a56b0;
          local_50 = lVar3;
        }
        else {
          g_028a56b9 = '\x01';
          FUN_00e8cb70();
          lVar2 = g_028a56b0;
        }
      }
      g_028a56b0 = lVar2;
      if (lVar2 != 0) {
        if (0 < *(int *)(lVar2 + 0xc)) {
          iVar7 = 0;
          do {
            (**(code **)(*this_ptr + 0x3a8))();
            cVar5 = FUN_00c9ff50();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (cVar5 != '\0') {
              (**(code **)(*this_ptr + 0x3a8))();
              FUN_000175c0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00ca0840();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar2 + 0xc));
        }
        FUN_00018280();
      }
    }
  }
  return;
}


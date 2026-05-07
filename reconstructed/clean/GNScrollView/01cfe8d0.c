// Function: FUN_01cfe8d0
// Address: 01cfe8d0
// Size: 1433 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfe8d0(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  int64_t *plVar6;
  char *pcVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  bool bVar9;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_028b7948 == (int64_t *)0x0) || (g_028b7951 == '\0')) {
      FUN_00e8cb50();
      if (g_028b7948 == (int64_t *)0x0) {
        plVar6 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar6 + 0x18))();
        if (g_028b7948 == plVar6) {
          bVar5 = false;
          bVar4 = false;
        }
        else {
          bVar5 = true;
          bVar4 = true;
          bVar9 = g_028b7948 != (int64_t *)0x0;
          g_028b7948 = plVar6;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
        if (g_028b7950 == '\0') {
          g_028b7950 = '\x01';
          FUN_00e8cb90();
          bVar4 = bVar5;
        }
        if (!bVar4) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        local_e8 = g_027ef228;
        plVar6 = (int64_t *)CONCAT71(uStack_4f,local_50);
        if (g_027ef228 != 0) {
          FUN_00d50b00();
        }
        local_e0 = '\x01';
        FUN_00cac150();
        local_68 = local_98;
        local_60 = 0;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_60 = '\x01';
        (**(code **)(*plVar6 + 0x5f0))(&local_68,&local_e8);
        lVar8 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          local_d8 = lVar8;
          local_d0 = '\0';
          FUN_00ca94c0();
          lVar8 = local_40;
          if (local_38[0] == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
          }
          local_58 = lVar8;
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          lVar8 = 0;
          while( true ) {
            FUN_00c9fe20();
            lVar2 = local_40;
            local_50 = local_38[0];
            pcVar7 = local_38;
            if (local_38[0] == '\0') {
              pcVar7 = &local_50;
            }
            *pcVar7 = '\0';
            if ((local_38[0] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            iVar1 = *(int *)(lVar2 + 0xc);
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            if (iVar1 <= lVar8) break;
            FUN_00c9fe20();
            lVar2 = local_40;
            local_50 = local_38[0];
            pcVar7 = local_38;
            if (local_38[0] == '\0') {
              pcVar7 = &local_50;
            }
            *pcVar7 = '\0';
            if ((local_38[0] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            local_c0 = '\0';
            local_c8 = lVar2;
            FUN_000175c0();
            lVar3 = CONCAT71(uStack_4f,local_50);
            if (local_48 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_80 = '\x01';
            local_88 = lVar3;
            FUN_01cfd750();
            lVar3 = local_40;
            if ((local_38[0] == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            FUN_01cff270();
            local_b8 = lVar3;
            local_b0 = '\0';
            local_38[0] = '\0';
            local_40 = lVar2;
            FUN_00ca0840();
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + 1;
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        g_028b7951 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b7951 = '\x01';
        FUN_00e8cb70();
      }
    }
    local_a8 = *arg1;
    local_a0 = '\0';
    FUN_000175c0();
    lVar8 = local_40;
    *(void*)(this_ptr + 1) = 0;
    if (local_38[0] == '\0') {
      if (local_40 == 0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = lVar8;
        *(void*)(this_ptr + 1) = 1;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      local_38[0] = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


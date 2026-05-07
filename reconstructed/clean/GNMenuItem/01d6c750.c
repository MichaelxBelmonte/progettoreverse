// Function: FUN_01d6c750
// Address: 01d6c750
// Size: 1936 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d6c750(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint32_t param_4)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  void*arg1;
  int64_t *this_ptr;
  int iVar6;
  float fVar7;
  uint64_t uVar8;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar10;
  uint64_t extraout_XMM0_Qb;
  float fVar11;
  uint8_t auVar9 [16];
  float fVar12;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar13;
  float fVar14;
  uint64_t uVar15;
  float fVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  float local_98;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if ((g_028b84c0 == (int64_t *)0x0) || (g_028b84c9 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027f0a88;
    if (g_028b84c0 == (int64_t *)0x0) {
      if (g_027f0a88 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      plVar5 = g_028b84c0;
      if (g_028b84c0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar5 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
        }
        bVar2 = g_028b84c0 != (int64_t *)0x0;
        g_028b84c0 = plVar5;
        if (bVar2) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (int64_t *)0x0) && (g_028b84c8 == '\0')) {
        g_028b84c8 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b84c9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b84c9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b84d0 == (int64_t *)0x0) || (g_028b84d9 == '\0')) {
    FUN_00e8cb50();
    if (g_028b84d0 == (int64_t *)0x0) {
      FUN_01d4ead0();
      plVar5 = g_028b84d0;
      if (g_028b84d0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar5 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar5 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
        }
        bVar2 = g_028b84d0 != (int64_t *)0x0;
        g_028b84d0 = plVar5;
        if (bVar2) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((plVar5 != (int64_t *)0x0) && (g_028b84d8 == '\0')) {
        g_028b84d8 = '\x01';
        FUN_00e8cb90();
        plVar5 = local_40;
      }
      if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (g_028b84d0 != (int64_t *)0x0) {
        FUN_01d52700();
        local_98 = 0.0;
        iVar6 = 1;
        do {
          FUN_01d52740();
          (**(code **)(*this_ptr + 0x3a0))();
          if (local_b0 == '\0') {
            if (local_b8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b0 = '\0';
          }
          (**(code **)(*this_ptr + 0x3a8))();
          local_48 = 0;
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          local_48 = '\x01';
          local_50 = local_a8;
          FUN_01cfd290(local_98 / g_024229fc,&local_50);
          if (local_c0 == '\0') {
            if (local_c8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          FUN_01d488d0();
          if (local_c8 != 0) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_b8 != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*local_40 + 0x3e0))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*local_40 + 0x3e0))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_98 = (float)iVar6;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x102);
        FUN_01d52770();
      }
      g_028b84d9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b84d9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (((g_028b84c0 != (int64_t *)0x0) && (uVar8 = FUN_01d526f0(), 0.0 < (float)uVar8)) &&
     (0.0 < (float)((uint64_t)uVar8 >> 0x20))) {
    fVar10 = in_XMM1_Dc + 0.0;
    fVar11 = in_XMM1_Dd + 0.0;
    fVar13 = (float)((uint64_t)param_2 >> 0x20) + 0.0 + g_02390d00;
    if (0.0 < fVar13) {
      fVar14 = (float)param_2 + 0.0 + g_02390d00;
      if (fVar14 <= 0.0) {
        fVar10 = 0.0;
        do {
          FUN_01d526f0();
          fVar10 = fVar10 + extraout_XMM0_Db_00;
        } while (fVar10 < fVar13);
      }
      else {
        uVar17 = 0;
        uVar18 = 0;
        uVar15 = extraout_XMM0_Qb;
        do {
          fVar12 = 0.0;
          do {
            auVar9 = insertps(ZEXT416((uint)fVar12),(int)uVar17,0x10);
            cVar4 = FUN_00d054a0(auVar9._0_8_,(int)uVar8,param_3,param_4,fVar14,fVar10,uVar8,uVar15,
                                 fVar13,fVar11,uVar17,uVar18);
            plVar5 = g_028b84c0;
            if (cVar4 != '\0') {
              plVar1 = (int64_t *)*arg1;
              if (g_028b84c0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              (**(code **)(*plVar1 + 0x400))();
              if (plVar5 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            fVar7 = (float)FUN_01d526f0();
            fVar16 = (float)uVar17;
            fVar12 = fVar12 + fVar7;
          } while (fVar12 < fVar14);
          FUN_01d526f0();
          uVar17 = (uint64_t)(uint)(fVar16 + extraout_XMM0_Db);
        } while (fVar16 + extraout_XMM0_Db < fVar13);
      }
    }
  }
  plVar5 = g_028b84d0;
  if (g_028b84d0 != (int64_t *)0x0) {
    if (g_028b84c0 == (int64_t *)0x0) {
      FUN_00d50b00();
      FUN_01d49070();
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      FUN_01d49240();
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


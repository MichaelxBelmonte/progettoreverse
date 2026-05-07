// Function: FUN_01d6d5e0
// Address: 01d6d5e0
// Size: 1106 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d6d5e0(float param_1,float param_2)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint64_t unaff_R12;
  uint64_t uVar5;
  uint uVar6;
  char cVar7;
  uint64_t unaff_R15;
  uint64_t uVar8;
  float fVar9;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if ((g_028b84e0 == (int64_t *)0x0) || (g_028b84e9 == '\0')) {
    FUN_00e8cb50();
    if (g_028b84e0 == (int64_t *)0x0) {
      FUN_01cfbee0(g_0239011c,g_023b294c,g_02390124);
      local_58 = local_40;
      if (local_40 == (int64_t *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
      local_48 = local_40;
      if (local_40 == (int64_t *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d4ead0(g_02420950);
      plVar2 = g_028b84e0;
      if (g_028b84e0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar2 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar2 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar2 = local_40;
        }
        bVar1 = g_028b84e0 != (int64_t *)0x0;
        g_028b84e0 = plVar2;
        if (bVar1) {
          FUN_00d50b20();
          plVar2 = local_40;
        }
      }
      if ((plVar2 != (int64_t *)0x0) && (g_028b84e8 == '\0')) {
        g_028b84e8 = '\x01';
        FUN_00e8cb90();
        plVar2 = local_40;
      }
      if ((local_38 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (g_028b84e0 != (int64_t *)0x0) {
        local_60 = uVar5;
        local_50 = uVar8;
        FUN_01d52700();
        fVar9 = g_023945d0 * param_2;
        uVar6 = 0x16;
        iVar4 = 0x2a;
        do {
          FUN_01d52740();
          uVar6 = uVar6 - 1;
          local_a0 = local_58;
          local_98 = '\0';
          FUN_01cfd290((float)(int)uVar6 / g_02411474,&local_a0);
          local_70 = local_90;
          local_68 = 0;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_68 = '\x01';
          FUN_01d488d0();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*local_40 + 0x3c0))(fVar9 + param_1,(float)iVar4);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar8 = local_50;
          uVar5 = local_60;
          iVar4 = iVar4 + -2;
        } while (1 < uVar6);
        FUN_01d52770();
      }
      cVar3 = (char)uVar5;
      cVar7 = (char)uVar8;
      g_028b84e9 = '\x01';
      FUN_00e8cb70();
      goto LAB_01d6d649;
    }
    g_028b84e9 = '\x01';
    FUN_00e8cb70();
  }
  local_48 = (int64_t *)0x0;
  cVar3 = '\0';
  cVar7 = '\0';
  local_58 = (int64_t *)0x0;
LAB_01d6d649:
  plVar2 = g_028b84e0;
  local_78 = 0;
  if (g_028b84e0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_80 = plVar2;
  local_78 = '\x01';
  FUN_01d49240(param_1,param_2,g_02390124);
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar7 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


// Function: FUN_003a88e0
// Address: 003a88e0
// Size: 1752 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MDPluginTransferTempoDialog"

uint64_t FUN_003a88e0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int64_t *plVar5;
  char *pcVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  int64_t **pplVar10;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_70 = this_ptr[0xf];
  if (local_70 == 0) {
    uVar8 = 0;
    goto LAB_003a8d89;
  }
  plVar5 = (int64_t *)(param_2 & 0xffffffff);
  FUN_00d50b00();
  if ((int64_t *)this_ptr[0x13] == (int64_t *)0x0) {
    uVar8 = 0;
  }
  else if ((char)plVar5 == '\0') {
    uVar3 = (**(code **)(*(int64_t *)this_ptr[0x13] + 0x9a0))();
    uVar8 = (uint64_t)uVar3;
  }
  else {
    if (this_ptr[0x15] == 0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_000161a0();
      *plVar5 = (int64_t)&g_02502630;
      plVar5[0xe] = (int64_t)&g_02502c10;
      plVar5[0xf] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = 0;
      plVar5[0x12] = 0;
      plVar5[0x13] = 0;
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      plVar5[0x16] = 0;
      plVar5[0x17] = 0;
      plVar5[0x18] = 0;
      plVar5[0x19] = 0;
      plVar5[0x1a] = 0;
      plVar5[0x1b] = 0;
      plVar5[0x1c] = 0;
      (*g_02502648)();
      lVar1 = this_ptr[0x15];
      this_ptr[0x15] = (int64_t)plVar5;
      if (lVar1 != 0) {
        FUN_00d50b20();
        plVar5 = (int64_t *)this_ptr[0x15];
      }
      lVar1 = g_027050e8;
      if (plVar5 == (int64_t *)0x0) {
        if (g_027050e8 != 0) {
          FUN_00d50b00();
        }
        local_c0 = 0;
        local_b8 = '\0';
        local_b0 = 0;
        local_a8 = '\0';
        pplVar10 = &local_48;
        FUN_01e4fcf0(&local_b0,&local_c0);
        plVar5 = local_48;
        if ((g_027052b8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_02705208 = FUN_00015ff0();
          g_027051f0 = "MDPluginTransferTempoDialog";
          g_027051f8 = 0xe8;
          g_02705200 = FUN_003ae0b0;
          g_02705210 = 0;
          ram_0000000002705218 = 0;
          g_02705220 = 0;
          g_02705298 = 0;
          ram_00000000027052a0 = 0;
          g_027052a8 = 0;
          g_027052aa = 1;
          g_02705228 = 0;
          ram_0000000002705230 = 0;
          g_02705238 = 0;
          ram_0000000002705240 = 0;
          g_02705248 = 0;
          ram_0000000002705250 = 0;
          g_02705258 = 0;
          ram_0000000002705260 = 0;
          g_02705268 = 0;
          ram_0000000002705270 = 0;
          g_02705278 = 0;
          ram_0000000002705280 = 0;
          g_02705288 = 0;
          ram_0000000002705290 = 0;
          g_027052b3 = 0;
          g_027052ab = 0;
          ___cxa_guard_release();
        }
        if (plVar5 == (int64_t *)0x0) {
LAB_003a8e3a:
          pplVar10 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar5 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') goto LAB_003a8e3a;
        }
        plVar9 = (int64_t *)this_ptr[0x15];
        plVar7 = *pplVar10;
        if (plVar9 != plVar7) {
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar7 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar7 = *pplVar10;
              plVar9 = (int64_t *)this_ptr[0x15];
            }
          }
          else {
            *(void*)(pplVar10 + 1) = 0;
          }
          this_ptr[0x15] = (int64_t)plVar7;
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_003a7490();
    plVar9 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_003a8a2a;
      }
    }
    else if (local_48 != (int64_t *)0x0) {
LAB_003a8a2a:
      FUN_00d50b00();
      local_38[0] = '\0';
      plVar5 = this_ptr;
      do {
        (**(code **)(*plVar5 + 0x370))();
        plVar7 = local_48;
        if (local_48 == plVar5) {
          if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_003a8aa7;
          }
        }
        else {
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar6 = local_38;
            }
            else {
              FUN_00d50b20();
              pcVar6 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
            local_38[0] = '\x01';
            plVar5 = plVar7;
LAB_003a8aa7:
            local_38[0] = '\x01';
            pcVar6 = local_40;
            plVar7 = plVar5;
          }
          *pcVar6 = '\0';
          plVar5 = plVar7;
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((g_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_026e0ab8 = FUN_00015ff0();
          g_026e0aa0 = "MDMetaWindowController";
          g_026e0aa8 = 0x198;
          g_026e0ab0 = FUN_0006dea0;
          g_026e0ac0 = 0;
          ram_00000000026e0ac8 = 0;
          g_026e0ad0 = 0;
          g_026e0b48 = 0;
          ram_00000000026e0b50 = 0;
          g_026e0b58 = 0;
          g_026e0b5a = 1;
          g_026e0ad8 = 0;
          ram_00000000026e0ae0 = 0;
          g_026e0ae8 = 0;
          ram_00000000026e0af0 = 0;
          g_026e0af8 = 0;
          ram_00000000026e0b00 = 0;
          g_026e0b08 = 0;
          ram_00000000026e0b10 = 0;
          g_026e0b18 = 0;
          ram_00000000026e0b20 = 0;
          g_026e0b28 = 0;
          ram_00000000026e0b30 = 0;
          g_026e0b38 = 0;
          ram_00000000026e0b40 = 0;
          g_026e0b63 = 0;
          g_026e0b5b = 0;
          ___cxa_guard_release();
        }
        plVar7 = &g_02802688;
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar2 = FUN_00e85ea0();
          plVar7 = (int64_t *)&stack0xffffffffffffff98;
          if (cVar2 == '\0') {
            plVar7 = &g_02802688;
          }
        }
        if (*plVar7 != 0) {
          if ((local_38[0] == '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          goto LAB_003a8c23;
        }
      } while (plVar5 != (int64_t *)0x0);
      plVar5 = (int64_t *)0x0;
LAB_003a8c23:
      FUN_00d50b20();
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x5d8))();
        plVar7 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        FUN_005494a0();
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a0 = plVar9;
      local_98 = '\0';
      FUN_00549500();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = local_70;
      local_88 = '\0';
      FUN_00549560();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      local_78 = 0;
      lVar1 = this_ptr[0x15];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      local_80 = lVar1;
      FUN_01d83990();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
      FUN_00d50b20();
      goto LAB_003a8d80;
    }
    uVar8 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
  }
LAB_003a8d80:
  FUN_00d50b20();
LAB_003a8d89:
  return uVar8 & 0xffffffff;
}


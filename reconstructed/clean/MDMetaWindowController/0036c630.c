// Function: FUN_0036c630
// Address: 0036c630
// Size: 1814 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MDMetaDocumentController"

void FUN_0036c630(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  bool *pbVar5;
  int64_t **pplVar6;
  int64_t **pplVar7;
  void*this_ptr;
  int64_t *plVar8;
  bool bVar9;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  bool local_60 [8];
  int64_t *local_58;
  bool local_50 [16];
  char local_40 [8];
  int64_t *local_38;
  
  FUN_01f30290();
  plVar8 = local_58;
  if ((local_50[0] != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) goto LAB_0036cacc;
  FUN_01f30290();
  pplVar7 = &local_58;
  FUN_01e5c650();
  plVar8 = local_58;
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
  if (plVar8 == (int64_t *)0x0) {
LAB_0036c6c2:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0036c6c2;
  }
  plVar8 = *pplVar7;
  local_40[0] = *(char *)(pplVar7 + 1);
  pplVar7 = pplVar7 + 1;
  if (local_40[0] == '\0') {
    pplVar7 = (int64_t **)(local_50 + 0x10);
  }
  *(void*)pplVar7 = 0;
  if ((local_50[0] != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != false) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    pplVar7 = &local_68;
    FUN_01f30840();
    if (local_68 == (int64_t *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01f30840();
      FUN_00d23310();
      plVar1 = local_58;
      pbVar5 = local_50 + 0x18;
      if (local_50[0] != false) {
        pbVar5 = local_50;
      }
      local_38._0_1_ = local_50[0];
      *pbVar5 = false;
      if ((local_50[0] != false) && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar9 = plVar1 != (int64_t *)0x0;
      if (((char)local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60[0] != false) && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01f30840();
      FUN_00d23310();
      plVar1 = local_58;
      bVar9 = local_50[0] == false;
      local_68 = local_58;
      if (bVar9) {
        local_60[0] = false;
      }
      else {
        local_60[0] = true;
        local_50[0] = false;
      }
      local_60[0] = !bVar9;
      if ((g_026fbe40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_0271be08 = FUN_000838a0();
        g_0271bdf0 = "MDMetaDocumentController";
        g_0271bdf8 = 0x60;
        g_0271be00 = FUN_002a0ad0;
        g_0271be10 = 0;
        ram_000000000271be18 = 0;
        g_0271be20 = 0;
        g_0271be98 = 0;
        ram_000000000271bea0 = 0;
        g_0271bea8 = 0;
        g_0271beaa = 1;
        g_0271be28 = 0;
        ram_000000000271be30 = 0;
        g_0271be38 = 0;
        ram_000000000271be40 = 0;
        g_0271be48 = 0;
        ram_000000000271be50 = 0;
        g_0271be58 = 0;
        ram_000000000271be60 = 0;
        g_0271be68 = 0;
        ram_000000000271be70 = 0;
        g_0271be78 = 0;
        ram_000000000271be80 = 0;
        g_0271be88 = 0;
        ram_000000000271be90 = 0;
        g_0271beb3 = 0;
        g_0271beab = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (int64_t *)0x0) {
LAB_0036c859:
        pplVar7 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_0036c859;
      }
      plVar1 = *pplVar7;
      local_38._0_1_ = *(char *)(pplVar7 + 1);
      pplVar6 = (int64_t **)(local_50 + 0x18);
      if ((char)local_38 != '\0') {
        pplVar6 = pplVar7 + 1;
      }
      *(void*)pplVar6 = 0;
      if ((local_60[0] != false) && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        pplVar7 = &local_68;
        (**(code **)(*plVar1 + 0x4a0))();
        if (local_68 == (int64_t *)0x0) {
          bVar9 = false;
        }
        else {
          (**(code **)(*plVar1 + 0x4a0))();
          FUN_00d23310();
          plVar2 = local_58;
          pbVar5 = local_50 + 8;
          if (local_50[0] != false) {
            pbVar5 = local_50;
          }
          local_50[8] = local_50[0];
          *pbVar5 = false;
          if ((local_50[0] != false) && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar9 = plVar2 != (int64_t *)0x0;
          if ((local_50[8] != false) && (plVar2 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60[0] != false) && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar9) {
          (**(code **)(*plVar1 + 0x4a0))();
          FUN_00d23310();
          plVar1 = local_58;
          local_60[0] = false;
          local_68 = local_58;
          if (local_50[0] == false) {
            pbVar5 = local_60;
          }
          else {
            pbVar5 = local_50;
            local_60[0] = true;
          }
          local_60[0] = local_50[0] != false;
          *pbVar5 = false;
          if ((local_50[0] != false) && (plVar1 != (int64_t *)0x0)) {
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
          if (plVar1 == (int64_t *)0x0) {
LAB_0036c9eb:
            pplVar7 = (int64_t **)&g_02802688;
          }
          else {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            if (cVar3 == '\0') goto LAB_0036c9eb;
          }
          plVar1 = *pplVar7;
          if (plVar1 != (int64_t *)0x0) {
            pplVar6 = (int64_t **)(local_50 + 0x10);
            if (*(char *)(pplVar7 + 1) != '\0') {
              local_40[0] = '\x01';
              pplVar6 = pplVar7 + 1;
            }
            *(char *)pplVar6 = '\0';
            plVar8 = plVar1;
          }
          if ((local_60[0] != false) && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((char)local_38 != '\0') {
          FUN_00d50b20();
        }
      }
    }
  }
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x5e0))();
    plVar1 = local_58;
    if ((local_50[0] != false) && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x5e0))();
      FUN_00756eb0();
      if ((local_50[0] != false) && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40[0] == '\0') {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
  }
LAB_0036cacc:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}


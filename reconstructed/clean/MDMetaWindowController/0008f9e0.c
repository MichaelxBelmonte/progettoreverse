// Function: FUN_0008f9e0
// Address: 0008f9e0
// Size: 1857 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MUBarSignature"

uint32_t FUN_0008f9e0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  uint64_t in_RAX;
  void *pvVar7;
  char *pcVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t **pplVar11;
  int64_t *this_ptr;
  int64_t *plVar12;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar5 = (uint32_t)CONCAT71((int7)((uint64_t)in_RAX >> 8),1);
  if (param_2 == 0) {
    return uVar5;
  }
  pplVar11 = &local_48;
  (**(code **)(*(int64_t *)this_ptr[0x13] + 0x980))();
  plVar1 = local_48;
  if ((g_026d8a28 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_027ed1e8 = FUN_00d4fe50();
    g_027ed1d0 = "MUBarSignature";
    g_027ed1d8 = 0x18;
    g_027ed1e0 = FUN_00092680;
    g_027ed1f0 = 0;
    ram_00000000027ed1f8 = 0;
    g_027ed200 = 0;
    g_027ed278 = 0;
    ram_00000000027ed280 = 0;
    g_027ed288 = 0;
    g_027ed28a = 2;
    g_027ed208 = 0;
    ram_00000000027ed210 = 0;
    g_027ed218 = 0;
    ram_00000000027ed220 = 0;
    g_027ed228 = 0;
    ram_00000000027ed230 = 0;
    g_027ed238 = 0;
    ram_00000000027ed240 = 0;
    g_027ed248 = 0;
    ram_00000000027ed250 = 0;
    g_027ed258 = 0;
    ram_00000000027ed260 = 0;
    g_027ed268 = 0;
    ram_00000000027ed270 = 0;
    g_027ed293 = 0;
    g_027ed28b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_0008fa51:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0008fa51;
  }
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    plVar1 = (int64_t *)this_ptr[0x13];
    lVar2 = this_ptr[0x25];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x978))();
    if (lVar2 == 0) {
      return uVar5;
    }
    FUN_00d50b20();
    return uVar5;
  }
  FUN_0008b310();
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_00090032;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) goto LAB_00090032;
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar12 = this_ptr;
  do {
    (**(code **)(*plVar12 + 0x370))();
    plVar10 = local_48;
    if (local_48 == plVar12) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_0008fbc7;
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar8 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar8 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
        plVar12 = plVar10;
LAB_0008fbc7:
        local_38[0] = '\x01';
        pcVar8 = local_40;
        plVar10 = plVar12;
      }
      *pcVar8 = '\0';
      plVar12 = plVar10;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    plVar10 = &g_02802688;
    if (plVar12 != (int64_t *)0x0) {
      (**(code **)(*plVar12 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar10 = (int64_t *)&stack0xffffffffffffffa0;
      if (cVar4 == '\0') {
        plVar10 = &g_02802688;
      }
    }
    if (*plVar10 != 0) {
      if ((local_38[0] == '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_0008fd3b;
    }
  } while (plVar12 != (int64_t *)0x0);
  plVar12 = (int64_t *)0x0;
LAB_0008fd3b:
  pVar9 = (void*)plVar10;
  FUN_00d50b20();
  if (plVar12 == (int64_t *)0x0) {
    bVar3 = true;
  }
  else {
    FUN_006577f0();
    if (local_40[0] == '\0') {
      if (local_48 == (int64_t *)0x0) goto LAB_0008fdf7;
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_0008fd9c:
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_40[0] == '\0') {
        if (local_48 == (int64_t *)0x0) goto LAB_0008ff28;
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0008fe27:
        FUN_00d50b00();
        local_38[0] = '\0';
        plVar12 = this_ptr;
        do {
          (**(code **)(*plVar12 + 0x370))();
          plVar10 = local_48;
          if (local_48 == plVar12) {
            if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
               (plVar10 = plVar12, local_40[0] != '\0')) goto LAB_0008fe97;
          }
          else {
            if (local_40[0] == '\0') {
              if (local_38[0] == '\0') {
                pcVar8 = local_38;
              }
              else {
                FUN_00d50b20();
                pcVar8 = local_38;
              }
            }
            else {
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
LAB_0008fe97:
              local_38[0] = '\x01';
              pcVar8 = local_40;
            }
            *pcVar8 = '\0';
            plVar12 = plVar10;
          }
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00082eb0();
          plVar10 = &g_02802688;
          if (plVar12 != (int64_t *)0x0) {
            (**(code **)(*plVar12 + 0x360))();
            cVar4 = FUN_00e85ea0();
            plVar10 = (int64_t *)&stack0xffffffffffffffa0;
            if (cVar4 == '\0') {
              plVar10 = &g_02802688;
            }
          }
          if (*plVar10 != 0) {
            if ((local_38[0] == '\0') && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            break;
          }
        } while (plVar12 != (int64_t *)0x0);
        FUN_00d50b20();
        if (plVar12 != (int64_t *)0x0) {
          FUN_0078e590();
        }
        (**(code **)(*plVar1 + 0x3b0))();
        FUN_01c45560();
        if (this_ptr[0x25] != 0) {
          this_ptr[0x25] = 0;
          FUN_00d50b20();
        }
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        bVar3 = false;
        FUN_00d50b20();
      }
      else {
        if (local_48 != (int64_t *)0x0) goto LAB_0008fe27;
LAB_0008ff28:
        bVar3 = true;
      }
      FUN_00d50b20();
    }
    else {
      if (local_48 != (int64_t *)0x0) goto LAB_0008fd9c;
LAB_0008fdf7:
      bVar3 = true;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (!bVar3) {
    FUN_00d50b20();
    return uVar5;
  }
LAB_00090032:
  FUN_00d50b20();
  return 0;
}


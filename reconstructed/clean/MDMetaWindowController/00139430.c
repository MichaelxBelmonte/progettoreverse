// Function: FUN_00139430
// Address: 00139430
// Size: 2410 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MDEditorViewController"
//   "MUMultiTrackView"

void FUN_00139430(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_0013a110();
  if (this_ptr[0x1a] != 0) {
    this_ptr[0x1a] = 0;
    FUN_00d50b20();
  }
  this_ptr[0x1f] = 0;
  FUN_01e561b0();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_00139521;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_001394ca:
    pplVar10 = &local_48;
    FUN_01d8b220();
    plVar9 = local_48;
    FUN_000914a0();
    if (plVar9 == (int64_t *)0x0) {
LAB_00139509:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_00139509;
    }
    plVar9 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      pplVar10 = &local_48;
      FUN_01d8b220();
      plVar8 = local_48;
      if ((g_026fe4d0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_02726438 = FUN_0006d940();
        g_02726420 = "MUMultiTrackView";
        g_02726428 = 0x228;
        g_02726430 = FUN_00082de0;
        g_02726440 = 0;
        ram_0000000002726448 = 0;
        g_02726450 = 0;
        g_027264c8 = 0;
        ram_00000000027264d0 = 0;
        g_027264d8 = 0;
        g_027264da = 1;
        g_02726458 = 0;
        ram_0000000002726460 = 0;
        g_02726468 = 0;
        ram_0000000002726470 = 0;
        g_02726478 = 0;
        ram_0000000002726480 = 0;
        g_02726488 = 0;
        ram_0000000002726490 = 0;
        g_02726498 = 0;
        ram_00000000027264a0 = 0;
        g_027264a8 = 0;
        ram_00000000027264b0 = 0;
        g_027264b8 = 0;
        ram_00000000027264c0 = 0;
        g_027264e3 = 0;
        g_027264db = 0;
        ___cxa_guard_release();
      }
      if (plVar8 == (int64_t *)0x0) {
LAB_00139608:
        pplVar10 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_00139608;
      }
      local_60 = *pplVar10;
      if (*pplVar10 == (int64_t *)0x0) {
        bVar1 = false;
        bVar2 = false;
        local_60 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar10 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar10 + 1) = 0;
        }
        bVar1 = true;
        bVar2 = true;
      }
      if ((local_40[0] != '\0') && (bVar2 = bVar1, local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = (int64_t *)0x0;
      bVar2 = false;
    }
    if (this_ptr[0x15] != 0) {
      this_ptr[0x15] = 0;
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      local_68 = plVar9;
      (**(code **)(*plVar9 + 0xa10))();
      plVar8 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_0013a110();
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_38[0] = '\0';
      local_78 = plVar9;
      do {
        plVar9 = local_78;
        (**(code **)(*local_78 + 0x370))();
        plVar8 = local_48;
        if (local_48 == plVar9) {
          if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            plVar8 = plVar9;
            goto LAB_001398f7;
          }
        }
        else {
          local_78 = local_48;
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar7 = local_38;
            }
            else {
              FUN_00d50b20();
              pcVar7 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
            local_38[0] = '\x01';
LAB_001398f7:
            local_38[0] = '\x01';
            pcVar7 = local_40;
          }
          *pcVar7 = '\0';
          plVar9 = plVar8;
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((g_026f7020 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          g_0270aa58 = FUN_00015ff0();
          g_0270aa40 = "MDEditorViewController";
          g_0270aa48 = 0x1e8;
          g_0270aa50 = FUN_00074eb0;
          g_0270aa60 = 0;
          ram_000000000270aa68 = 0;
          g_0270aa70 = 0;
          g_0270aae8 = 0;
          ram_000000000270aaf0 = 0;
          g_0270aaf8 = 0;
          g_0270aafa = 1;
          g_0270aa78 = 0;
          ram_000000000270aa80 = 0;
          g_0270aa88 = 0;
          ram_000000000270aa90 = 0;
          g_0270aa98 = 0;
          ram_000000000270aaa0 = 0;
          g_0270aaa8 = 0;
          ram_000000000270aab0 = 0;
          g_0270aab8 = 0;
          ram_000000000270aac0 = 0;
          g_0270aac8 = 0;
          ram_000000000270aad0 = 0;
          g_0270aad8 = 0;
          ram_000000000270aae0 = 0;
          g_0270ab03 = 0;
          g_0270aafb = 0;
          ___cxa_guard_release();
        }
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar10 = &local_78;
          if (cVar5 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        plVar9 = local_78;
        if (*pplVar10 != (int64_t *)0x0) {
          bVar3 = false;
          bVar1 = true;
          bVar4 = true;
          if (local_38[0] != '\0') goto LAB_00139abf;
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = false;
          plVar8 = (int64_t *)this_ptr[0x15];
          if (plVar8 == plVar9) goto LAB_00139ad7;
          goto LAB_00139a84;
        }
      } while (local_78 != (int64_t *)0x0);
      bVar3 = true;
      plVar9 = (int64_t *)0x0;
      bVar4 = false;
LAB_00139abf:
      bVar1 = bVar4;
      plVar8 = (int64_t *)this_ptr[0x15];
      if (plVar8 == plVar9) {
LAB_00139ad7:
        if (!bVar3 && plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
LAB_00139a84:
        if (!bVar1 && plVar9 != (int64_t *)0x0) {
          FUN_00d50b00();
          plVar8 = (int64_t *)this_ptr[0x15];
        }
        this_ptr[0x15] = (int64_t)plVar9;
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((bVar2) && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_00139c44;
    }
    if (local_60 != (int64_t *)0x0) {
      local_68 = plVar9;
      FUN_00d50b00();
      local_38[0] = '\0';
      local_78 = this_ptr;
      do {
        plVar9 = local_78;
        (**(code **)(*local_78 + 0x370))();
        plVar8 = local_48;
        if (local_48 == plVar9) {
          if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            plVar8 = plVar9;
            goto LAB_001396d7;
          }
        }
        else {
          local_78 = local_48;
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar7 = local_38;
            }
            else {
              FUN_00d50b20();
              pcVar7 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
            local_38[0] = '\x01';
LAB_001396d7:
            local_38[0] = '\x01';
            pcVar7 = local_40;
          }
          *pcVar7 = '\0';
          plVar9 = plVar8;
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
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar10 = &local_78;
          if (cVar5 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        plVar9 = local_78;
        if (*pplVar10 != (int64_t *)0x0) {
          if ((local_38[0] == '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          goto LAB_00139b4c;
        }
      } while (local_78 != (int64_t *)0x0);
      plVar9 = (int64_t *)0x0;
LAB_00139b4c:
      FUN_00d50b20();
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x5e0))();
        plVar8 = local_48;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x5e0))();
          FUN_00764570();
          plVar9 = local_48;
          if (local_40[0] == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          FUN_0013a110();
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (bVar2) {
            FUN_00d50b20();
          }
          goto LAB_00139c44;
        }
        FUN_00d50b20();
      }
      if (bVar2) {
        FUN_00d50b20();
        bVar2 = false;
        goto LAB_00139c1e;
      }
    }
    bVar2 = false;
  }
  else {
    if (local_48 != (int64_t *)0x0) goto LAB_001394ca;
LAB_00139521:
    bVar2 = true;
  }
LAB_00139c1e:
  FUN_0013a110();
  if (bVar2) {
    return;
  }
LAB_00139c44:
  FUN_00d50b20();
  return;
}


// Function: FUN_003544d0
// Address: 003544d0
// Size: 2482 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00354e78) */
/* WARNING: Removing unreachable block (ram,0x003547ab) */
/* WARNING: Removing unreachable block (ram,0x003547b4) */
/* WARNING: Removing unreachable block (ram,0x00354712) */
/* WARNING: Removing unreachable block (ram,0x0035471f) */
/* WARNING: Removing unreachable block (ram,0x00354df9) */
/* WARNING: Removing unreachable block (ram,0x00354982) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003544d0(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_003baed0();
  FUN_003ba620();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_004f9670();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(unaff_RDI + 200);
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004f78f0();
  (**(code **)(*plVar6 + 0x918))();
  plVar6 = *(longlong **)(unaff_RDI + 0xd0);
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004f7980();
  (**(code **)(*plVar6 + 0x918))();
  FUN_003ba620();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(unaff_RDI + 0xd8);
  if (local_40 == 0) {
    (**(code **)(*plVar6 + 0x998))();
  }
  else {
    FUN_003ba620();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4aa0();
    (**(code **)(*plVar6 + 0x918))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004f7a80();
  (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x928))();
  FUN_0035a0d0();
  FUN_01c00e50();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01bbf570();
  iVar1 = *(int *)(local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 < 1) {
    if (*(longlong *)(unaff_RDI + 0xe0) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x478))();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x80) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        FUN_01e53c20();
        lVar2 = *(longlong *)(unaff_RDI + 0x80);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(MACH_HEADER._0_8_ + 0x450))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (*(longlong *)(unaff_RDI + 0x88) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        FUN_01e53c20();
        lVar2 = *(longlong *)(unaff_RDI + 0x88);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(MACH_HEADER._0_8_ + 0x450))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (*(longlong *)(unaff_RDI + 0xe0) == 0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(plVar6 + 0x27) = 0;
      plVar6[0x2e] = 0;
      *(undefined4 *)(plVar6 + 0x2f) = 0;
      plVar6[0x30] = 0;
      *(undefined1 *)(plVar6 + 0x31) = 0;
      plVar6[0x28] = 0;
      plVar6[0x29] = 0;
      *(undefined4 *)(plVar6 + 0x2a) = 0;
      plVar6[0x2b] = 0;
      plVar6[0x2c] = 0;
      *(undefined8 *)((longlong)plVar6 + 0x165) = 0;
      *(undefined8 *)((longlong)plVar6 + 0x18c) = 0;
      *(undefined8 *)((longlong)plVar6 + 0x194) = 0;
      *(undefined8 *)((longlong)plVar6 + 0x199) = 0;
      plVar6[0x35] = 0;
      plVar6[0x36] = 0;
      plVar6[0x37] = 0;
      plVar6[0x38] = 0;
      *plVar6 = (longlong)&DAT_02677e10;
      plVar6[2] = (longlong)&DAT_026788e8;
      plVar6[0x39] = (longlong)&DAT_02678928;
      *(undefined4 *)((longlong)plVar6 + 500) = 0;
      *(undefined1 *)(plVar6 + 0x3f) = 0;
      plVar6[0x43] = 0;
      plVar6[0x3c] = 0;
      plVar6[0x3d] = 0;
      plVar6[0x3a] = 0;
      plVar6[0x3b] = 0;
      *(undefined1 *)(plVar6 + 0x3e) = 0;
      *(undefined8 *)((longlong)plVar6 + 0x1fc) = 0;
      *(undefined8 *)((longlong)plVar6 + 0x204) = 0;
      *(undefined8 *)((longlong)plVar6 + 0x20c) = 0;
      (*DAT_02677e28)();
      lVar2 = *(longlong *)(unaff_RDI + 0xe0);
      *(longlong **)(unaff_RDI + 0xe0) = plVar6;
      if (lVar2 != 0) {
        FUN_00d50b20();
        plVar6 = *(longlong **)(unaff_RDI + 0xe0);
      }
      (**(code **)(*plVar6 + 0x4d0))(0,_DAT_023b2d60);
      plVar6 = *(longlong **)(unaff_RDI + 0xe0);
      FUN_00d50b00();
      (**(code **)(*plVar6 + 0xa20))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      FUN_01cef4c0();
      lVar2 = DAT_027032b8;
      plVar6 = *(longlong **)(unaff_RDI + 0xe0);
      if (DAT_027032b8 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar6 + 0xa10))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    cVar4 = FUN_01bc1700();
    lVar3 = DAT_027032c8;
    lVar2 = DAT_027032c0;
    if (cVar4 == '\0') {
      if (DAT_027032c8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01cef3b0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_027032c0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01cef3b0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      FUN_01e53c20();
      lVar2 = *(longlong *)(unaff_RDI + 0xe0);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(MACH_HEADER._0_8_ + 0x450))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x80) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x478))();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x88) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x478))();
      }
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}



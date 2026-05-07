// Function: FUN_000b7160
// Address: 000b7160
// Size: 702 bytes
// Class: MDAsyncProcess


/* WARNING: Removing unreachable block (ram,0x000b73e6) */
/* WARNING: Removing unreachable block (ram,0x000b73ef) */
/* WARNING: Removing unreachable block (ram,0x000b71a5) */
/* WARNING: Removing unreachable block (ram,0x000b71ae) */

void FUN_000b7160(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  int iVar6;
  longlong *local_40;
  char local_38;
  
  FUN_01e5ca90();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar5 = &DAT_024f1490;
  puVar5[2] = &DAT_024f1e80;
  *(undefined4 *)(puVar5 + 0x27) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x13b) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2a] = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  puVar5[0x30] = 0;
  (*DAT_024f14a8)();
  puVar1 = (undefined8 *)unaff_RDI[2];
  if (puVar1 == puVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[2] = (longlong)puVar5;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)unaff_RDI[2];
  (**(code **)(*local_40 + 0x4d8))();
  (**(code **)(*plVar2 + 0x4d0))();
  FUN_01e59080();
  FUN_01e4cf40();
  plVar2 = (longlong *)unaff_RDI[2];
  uVar3 = FUN_01e5c720();
  FUN_01e5c7d0();
  (**(code **)(*plVar2 + 0x558))(uVar3);
  plVar2 = (longlong *)unaff_RDI[2];
  (**(code **)(*local_40 + 0x578))();
  (**(code **)(*plVar2 + 0x570))();
  (**(code **)(*unaff_RDI + 0x670))();
  uVar4 = (**(code **)(*local_40 + 0x560))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((uVar4 & 0x10) == 0) {
    (**(code **)(*unaff_RDI + 0x670))();
    FUN_01e59910();
    (**(code **)(*local_40 + 0x9b8))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_40 + 0x4a0))();
  iVar6 = *(int *)((longlong)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (0 < iVar6) {
    do {
      (**(code **)(*local_40 + 0x4a0))();
      plVar2 = *(longlong **)local_40[2];
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar2 + 0x478))();
      (**(code **)(*(longlong *)unaff_RDI[2] + 0x450))();
      FUN_00d50b20();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00d50b20();
  return;
}



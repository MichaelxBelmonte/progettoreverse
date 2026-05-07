// Function: FUN_01e56280
// Address: 01e56280
// Size: 686 bytes
// Class: GNStringTable


/* WARNING: Removing unreachable block (ram,0x01e564f4) */
/* WARNING: Removing unreachable block (ram,0x01e564c9) */
/* WARNING: Removing unreachable block (ram,0x01e56508) */

void FUN_01e56280(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  undefined4 uVar3;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_38;
  char local_30;
  
  *(undefined1 *)(unaff_RDI + 0x40) = 1;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_026a3350;
  puVar2[2] = &DAT_026a37c8;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined2 *)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x37) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar2 + 100) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x69) = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x7f) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x94) = 0;
  uVar3 = (*DAT_026a3368)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x18);
  if (puVar1 == puVar2) {
    uVar3 = FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x18) = puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      uVar3 = FUN_00d50b20();
    }
  }
  local_78 = *param_2;
  local_70 = '\0';
  FUN_01e5b6f0(uVar3,&local_78);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01e5c670();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x20) != 0) {
    FUN_01e5eec0();
  }
  FUN_01e5e3f0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if (local_30 != '\0') {
      local_30 = '\0';
    }
    FUN_01e5e380();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    FUN_01e5ca90();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e6cc40();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e5e430();
  return;
}



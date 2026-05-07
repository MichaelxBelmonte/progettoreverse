// Function: FUN_00d8fd30
// Address: 00d8fd30
// Size: 566 bytes
// Class: GNString
// String references:
//   "%@.%@"


undefined8 * FUN_00d8fd30(int param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  undefined8 *puVar5;
  undefined8 *local_70;
  undefined8 *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d8ed10();
  puVar4 = local_68;
  if ((local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00d8f1a0();
  puVar1 = local_68;
  if ((local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  if (puVar4 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar4 + 4);
    if (iVar2 == -1) {
      if (puVar4[2] == 0) goto LAB_00d8fdd1;
      iVar2 = FUN_00e7dde0();
    }
    if (iVar2 != 0) {
      uVar3 = *(uint *)(puVar4 + 4);
      if (uVar3 == 0xffffffff) {
        if (puVar4[2] == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00e7dde0();
        }
      }
      param_1 = param_1 + ~uVar3;
    }
  }
LAB_00d8fdd1:
  FUN_00d8f4b0(param_1,param_2);
  puVar5 = local_68;
  if (puVar1 == local_68) {
LAB_00d8fe25:
    puVar5 = puVar1;
    if (local_60 != '\0') {
LAB_00d8fe2b:
      if (local_68 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_60 == '\0') {
      if (local_68 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
        puVar1 = puVar5;
        goto LAB_00d8fe25;
      }
      if (local_60 == '\0') goto LAB_00d8fe3e;
      goto LAB_00d8fe2b;
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_00d8fe3e:
  if (puVar4 == (undefined8 *)0x0) {
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  iVar2 = *(int *)(puVar4 + 4);
  if (iVar2 == -1) {
    if (puVar4[2] != 0) {
      iVar2 = FUN_00e7dde0();
      goto LAB_00d8fe62;
    }
  }
  else {
LAB_00d8fe62:
    if (iVar2 != 0) {
      local_70 = puVar4;
      FUN_00083ea0(2,&local_70);
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025795a8;
      FUN_00d500e0();
      FUN_00d94d80();
      *(byte *)((longlong)puVar4 + 0x24) = *(byte *)((longlong)puVar4 + 0x24) & 0xfe;
      *unaff_RDI = puVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_68 = (undefined8 *)&DAT_0253d630;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_68 = &DAT_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00d8ff36;
    }
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00d8ff36:
  FUN_00d50b20();
  return unaff_RDI;
}



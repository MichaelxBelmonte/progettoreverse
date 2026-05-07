// Function: FUN_00dad000
// Address: 00dad000
// Size: 591 bytes
// Class: GNForeignThreadPool


/* WARNING: Removing unreachable block (ram,0x00dad0ca) */
/* WARNING: Removing unreachable block (ram,0x00dad0d3) */
/* WARNING: Removing unreachable block (ram,0x00dad047) */
/* WARNING: Removing unreachable block (ram,0x00dad050) */
/* WARNING: Removing unreachable block (ram,0x00dad11a) */
/* WARNING: Removing unreachable block (ram,0x00dad123) */

void FUN_00dad000(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar3;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00c8e830();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00c92170();
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_0256d868;
    puVar2[2] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
    (*DAT_0256d880)();
    FUN_00cccfe0();
    FUN_00d50b20();
    FUN_00ccce80();
    uVar3 = FUN_00daa940();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (uVar3 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        uVar3 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      local_50 = lVar1;
      local_48 = '\0';
      (**(code **)(*unaff_RSI + 0x618))(uVar3,&local_50);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



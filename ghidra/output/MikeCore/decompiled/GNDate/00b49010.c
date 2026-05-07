// Function: FUN_00b49010
// Address: 00b49010
// Size: 896 bytes
// Class: GNDate


undefined8 FUN_00b49010(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char unaff_SIL;
  longlong unaff_RDI;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  if (((*(longlong *)(unaff_RDI + 0x70) < 0x100000000) && (*(int *)(unaff_RDI + 0x8c) == 0)) &&
     ((ulonglong)(*(longlong *)(unaff_RDI + 0x48) + *(longlong *)(unaff_RDI + 0x40)) >> 0x20 == 0))
  {
    uVar4 = 0x20;
    if (unaff_SIL != '\0') {
      FUN_00b45250(param_1,0x6d646864);
      FUN_00b45190(param_1,0);
      uVar1 = *(undefined4 *)(unaff_RDI + 0x70);
      uVar2 = *(undefined4 *)(unaff_RDI + 0x88);
      FUN_00ccdf50(param_1,uVar2);
      bVar5 = true;
      if (local_68 == 0) {
        FUN_00ccdf50(param_1,uVar2);
        bVar5 = true;
        if (local_58 == 0) {
          FUN_00ccdf50(param_1,*(undefined4 *)(unaff_RDI + 0x90));
          bVar5 = true;
          if (local_48 == 0) {
            FUN_00ccdf50(param_1,uVar1);
            bVar5 = true;
            if (local_38 == 0) {
              FUN_00ccdf50(param_1,0);
              bVar5 = local_98 != 0;
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_30 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027653a0;
      uVar4 = 0x20;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    uVar4 = 0x2c;
    if (unaff_SIL != '\0') {
      FUN_00b45250(param_1,0x6d646864);
      FUN_00b45190(param_1,0);
      FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
      bVar5 = true;
      if (local_68 == 0) {
        FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x88));
        bVar5 = true;
        if (local_58 == 0) {
          FUN_00ccdf50(param_1,*(undefined4 *)(unaff_RDI + 0x90));
          bVar5 = true;
          if (local_48 == 0) {
            FUN_00ccdf90(param_1,*(undefined8 *)(unaff_RDI + 0x70));
            bVar5 = true;
            if (local_38 == 0) {
              FUN_00ccdf50(param_1,0);
              bVar5 = local_98 != 0;
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_30 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027653a0;
      uVar4 = 0x2c;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar4;
}



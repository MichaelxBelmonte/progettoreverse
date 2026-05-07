// Function: FUN_00b4ab30
// Address: 00b4ab30
// Size: 931 bytes
// Class: GNDate


undefined8 FUN_00b4ab30(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
  iVar3 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  iVar3 = (iVar3 >> 2) + (iVar1 / 0x18) * -6;
  uVar4 = 0x28;
  if (iVar3 == 0) {
    uVar4 = 0x1c;
  }
  if (unaff_ESI != 0) {
    FUN_00b45250(param_1,0x73747363);
    FUN_00b45190(param_1,0);
    if (iVar3 == 0) {
      FUN_00ccdf50(param_1,1);
      bVar5 = true;
      if (local_60 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_50 == 0) {
          FUN_00ccdf50(param_1,6);
          bVar5 = true;
          if (local_40 == 0) {
            FUN_00ccdf50(param_1,1);
            bVar5 = local_70 != 0;
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027653a0;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00ccdf50(param_1,2);
      bVar5 = true;
      if (local_60 == 0) {
        FUN_00ccdf50(param_1,1);
        bVar5 = true;
        if (local_50 == 0) {
          FUN_00ccdf50(param_1,6);
          bVar5 = true;
          if (local_40 == 0) {
            FUN_00ccdf50(param_1,1);
            bVar5 = true;
            if (local_70 == 0) {
              FUN_00ccdf50(param_1,iVar1 / 0x18 + 1);
              bVar5 = true;
              if (local_b0 == 0) {
                FUN_00ccdf50(param_1,iVar3);
                bVar5 = true;
                if (local_a0 == 0) {
                  FUN_00ccdf50(param_1,1);
                  bVar5 = local_c0 != 0;
                  if ((local_b8 != '\0') && (local_c0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_98 != '\0') && (local_a0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027653a0;
      if (bVar5) {
        if (DAT_027653a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar4;
}



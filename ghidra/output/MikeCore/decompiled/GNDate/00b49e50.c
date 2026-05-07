// Function: FUN_00b49e50
// Address: 00b49e50
// Size: 1354 bytes
// Class: GNDate


longlong FUN_00b49e50(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  bool bVar4;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x98) + 0x18);
  if (unaff_ESI != 0) {
    FUN_00b45250(param_1,0x73747364);
    FUN_00b45190(param_1,0);
    FUN_00ccdf50(param_1,1);
    lVar2 = local_38;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027653a0;
    if (lVar2 != 0) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,*(int *)(*(longlong *)(unaff_RDI + 0x98) + 0x18) + 0x30);
    bVar4 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x616c6163);
      bVar4 = true;
      if (local_58 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar4 = true;
        if (local_48 == 0) {
          FUN_00ccdf50(param_1,1);
          bVar4 = local_68 != 0;
          if ((local_60 != '\0') && (local_68 != 0)) {
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
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027653a0;
    if (bVar4) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,0);
    bVar4 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0);
      bVar4 = true;
      if (local_58 == 0) {
        FUN_00ccdf10(param_1,(int)*(short *)(unaff_RDI + 0x30));
        bVar4 = true;
        if (local_48 == 0) {
          FUN_00ccdf10(param_1,(int)*(short *)(unaff_RDI + 0xa0));
          bVar4 = true;
          if (local_68 == 0) {
            FUN_00ccdf10(param_1,0);
            bVar4 = true;
            if (local_d8 == 0) {
              FUN_00ccdf50(param_1,0xac44);
              bVar4 = true;
              if (local_c8 == 0) {
                FUN_00ccdf10(param_1,0);
                bVar4 = local_e8 != 0;
                if ((local_e0 != '\0') && (local_e8 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
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
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027653a0;
    if (bVar4) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,*(int *)(*(longlong *)(unaff_RDI + 0x98) + 0x18) + 0xc);
    bVar4 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x616c6163);
      bVar4 = true;
      if (local_58 == 0) {
        FUN_00ccdf50(param_1,0);
        bVar4 = true;
        if (local_48 == 0) {
          local_70 = 0;
          lVar2 = *(longlong *)(unaff_RDI + 0x98);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_70 = '\x01';
          local_78 = lVar2;
          FUN_00ccdbb0(param_1,&local_78);
          bVar4 = local_68 != 0;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
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
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027653a0;
    if (bVar4) {
      if (DAT_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return (longlong)iVar1 + 0x40;
}


